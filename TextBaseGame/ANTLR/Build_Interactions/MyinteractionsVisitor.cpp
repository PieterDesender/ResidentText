#include "MyinteractionsVisitor.h"

#include "tree/TerminalNode.h"
#include "../../Managers/GameManager.h"
#include "../../Managers/NodeManager.h"
#include "../../Managers/ItemManager.h"

#include"../../World/WorldObject.h"
#include"../../World/Node.h"
#include"../../World/Connection.h"

#include"../../Items/Item.h"
#include"../../Items/Inventory.h"

#include"../../GameObjects/Player.h"
#include"../../GameObjects/GameObject.h"

#include"../../Structs.h"

#include <string>

#pragma region MOVETO
antlrcpp::Any MyinteractionsVisitor::visitMoveto(interactionsParser::MovetoContext * ctx)
{
	if (ctx->STRING() == nullptr)
		return visitChildren(ctx);

	string moveToNodeId = ctx->STRING()->getSymbol()->getText();
	Node* moveToNode = NodeManager::GetInstance()->GetNode(moveToNodeId);

	if (moveToNode == nullptr) {
		cout << "\nThe place you have entered does not exist.";
		return visitChildren(ctx);
	}

	if (GameManager::GetInstance()->GetPlayer()->MoveToNode(moveToNode->GetNodeId())) {
		cout << "\nI have entered room " << moveToNodeId << ".";
		GameManager::GetInstance()->GetPlayer()->SetLastSearchedWorldObject(nullptr);
	}

	return visitChildren(ctx);
}
#pragma endregion
#pragma region LOOK
antlrcpp::Any MyinteractionsVisitor::visitLook(interactionsParser::LookContext * ctx)
{
	Node* currentNode = GameManager::GetInstance()->GetPlayer()->GetCurrentNode();
	cout << "\n" << currentNode->GetExamineResponce() << ".";

	vector<Connection*> connections = currentNode->GetConnections();
	cout << "\nI see doors to:";

	Node* otherNode = nullptr;
	for each (Connection* connection in connections)
	{
		otherNode = NodeManager::GetInstance()->GetNode(connection->GetOtherNodeId(currentNode->GetNodeId()));
		cout << "\n\t--> " << otherNode->GetNodeId();
	}

	vector<WorldObject*> objects = currentNode->GetWorldObjects();

	if (objects.size() <= 0)
		return visitChildren(ctx);

	cout << "\nI see objects:";
	for each (WorldObject* object in objects)
	{
		cout << "\n\t--> " << object->GetObjectName();
	}

	return visitChildren(ctx);
}
#pragma endregion
#pragma region EXAMINE OBJECT
antlrcpp::Any MyinteractionsVisitor::visitExamineobject(interactionsParser::ExamineobjectContext * ctx)
{
	if (ctx->STRING() == nullptr)
		return visitChildren(ctx);

	string objectName = ctx->STRING()->getSymbol()->getText();

	Node* currentNode = GameManager::GetInstance()->GetPlayer()->GetCurrentNode();

	WorldObject* selectedObject = currentNode->GetObjectByName(objectName);

	if (selectedObject == nullptr) {
		cout << "\nSelected object not recognised";
		return visitChildren(ctx);
	}

	GameManager::GetInstance()->GetPlayer()->SetLastExaminedWorldObject(selectedObject);

	cout << selectedObject->GetExamineResponce() << ".";

	return visitChildren(ctx);
}
#pragma endregion
#pragma region SEARCH OBJECT
antlrcpp::Any MyinteractionsVisitor::visitSearchobject(interactionsParser::SearchobjectContext * ctx)
{
	if (ctx->STRING() == nullptr)
		return visitChildren(ctx);

	string objectName = ctx->STRING()->getSymbol()->getText();

	Node* currentNode = GameManager::GetInstance()->GetPlayer()->GetCurrentNode();

	WorldObject* selectedObject = currentNode->GetObjectByName(objectName);

	if (selectedObject == nullptr) {
		cout << "\nSelected object not recognised";
		return visitChildren(ctx);
	}

	GameManager::GetInstance()->GetPlayer()->SetLastSearchedWorldObject(selectedObject);

	cout << "\nI searched " << selectedObject->GetObjectName() << ".";
	int itemCount = selectedObject->GetInventory()->GetItemCount();
	if (itemCount <= 0) {
		cout << " Nothing interesting found.";
		return visitChildren(ctx);
	}

	map<string, ItemPtrAmount> items = selectedObject->GetInventory()->GetItemMap();

	cout << " I found some things:";
	for each (pair<string, ItemPtrAmount> pair in items)
	{
		int amount = pair.second.m_Amount;
		if (amount <= 0)
			continue;

		cout << "\n\t" << pair.second.m_Amount << " " << pair.second.m_pItem->GetItemId();
	}

	return visitChildren(ctx);
}
#pragma endregion
#pragma region EXAMINE DOOR
antlrcpp::Any MyinteractionsVisitor::visitExaminedoor(interactionsParser::ExaminedoorContext * ctx)
{
	Node* pCurrentNode = GameManager::GetInstance()->GetPlayer()->GetCurrentNode();
	vector<Connection*> connections = pCurrentNode->GetConnections();

	string otherNodeName = ctx->STRING()->getSymbol()->getText();
	Node* pOtherNode = NodeManager::GetInstance()->GetNode(otherNodeName);

	if (pOtherNode == nullptr) {
		cout << "\nThere is no \"" << otherNodeName << "\" that i know of.";
		return visitChildren(ctx);
	}

	Connection* pConneection = pCurrentNode->ConnectionWithNode(pOtherNode->GetNodeId());

	if (pConneection == nullptr) {
		cout << "\nI can't go to \"" << otherNodeName << "\" from here.";
		return visitChildren(ctx);
	}

	if (pConneection->GetConnectionStatus())
		cout << "\n" << pConneection->GetExamineResponceOpen();
	else
		cout << "\n" << pConneection->GetExamineResponceClosed();

	return visitChildren(ctx);
}
#pragma endregion
#pragma region INVENTORY SHOW
antlrcpp::Any MyinteractionsVisitor::visitInventoryshow(interactionsParser::InventoryshowContext * ctx)
{
	Inventory* pInventory = GameManager::GetInstance()->GetPlayer()->GetInventory();
	map<string, ItemPtrAmount> itemMap = pInventory->GetItemMap();
	vector<string> vecItemId;
	for_each(itemMap.begin(), itemMap.end(), [&](pair <string, ItemPtrAmount> item) {
		if (item.second.m_Amount > 0)
			vecItemId.push_back(item.second.m_pItem->GetItemId());
	});

	if (vecItemId.size() == 0) {
		cout << "\nI have nothing in my backpack.";
		return visitChildren(ctx);
	}

	cout << "\nI have the following in my backpack:";
	for_each(vecItemId.begin(), vecItemId.end(), [&](string itemId) {
		Item* item = ItemManager::GetInstance()->GetItem(itemId);
		cout << "\n\t- ";
		if (itemMap[itemId].m_Amount > 1)
			cout << itemMap[itemId].m_Amount << " ";
		cout << item->GetItemId() << " : " << item->GetItemWeight()*itemMap[itemId].m_Amount;
	});
	cout << "\nWeight: " << pInventory->GetInventoryWeight() << "/" << pInventory->GetMaxInventoryWeight();

	return visitChildren(ctx);
}
#pragma endregion
#pragma region PICKUP ITEM
antlrcpp::Any MyinteractionsVisitor::visitPickupitem(interactionsParser::PickupitemContext * ctx)
{
	WorldObject* pLastSearchedWorldObject = GameManager::GetInstance()->GetPlayer()->GetLastSearchedWorldObject();

	if (pLastSearchedWorldObject == nullptr) {
		cout << "\nI have to search something before.";
		return visitChildren(ctx);
	}

	Inventory* pInventory = pLastSearchedWorldObject->GetInventory();

	if (pInventory->GetItemCount() <= 0) {
		cout << "\nThere is nothing inside " << pLastSearchedWorldObject->GetObjectName() << ".";
		return visitChildren(ctx);
	}

	string itemId = ctx->STRING()->getSymbol()->getText();
	Item* pItem = ItemManager::GetInstance()->GetItem(itemId);

	if (pItem == nullptr) {
		cout << itemId << " doesn't excist.";
		return visitChildren(ctx);
	}

	if (pInventory->GetItemPair(itemId).m_Amount <= 0) {
		cout << "I can't find " << itemId << " in " << pLastSearchedWorldObject->GetObjectName() << ".";
		return visitChildren(ctx);
	}

	Inventory* pPlayerInventory = GameManager::GetInstance()->GetPlayer()->GetInventory();

	if (!pPlayerInventory->IsAbleToAddWeight(pItem->GetItemWeight())) {
		cout << "I am carrying to much.";
		return visitChildren(ctx);
	}

	if (pInventory->ReduceItem(pItem->GetItemId())) {
		cout << "I took " << itemId << ".";
		pPlayerInventory->AddItem(pItem->GetItemId());
		return visitChildren(ctx);
	}

	cout << "I didn't find " << itemId << ".";

	return visitChildren(ctx);
}
#pragma endregion
#pragma region DROP ITEM
antlrcpp::Any MyinteractionsVisitor::visitDropitem(interactionsParser::DropitemContext * ctx)
{
	string itemId = ctx->STRING()->getSymbol()->getText();
	Item* pItem = ItemManager::GetInstance()->GetItem(itemId);

	if (pItem == nullptr) {
		cout << itemId << " doesn't excist.";
		return visitChildren(ctx);
	}

	Inventory* pInventory = GameManager::GetInstance()->GetPlayer()->GetInventory();

	if (pInventory->GetItemPair(itemId).m_Amount <= 0) {
		cout << "I am not carrying " << itemId << ".";
		return visitChildren(ctx);
	}

	if (pItem->GetItemWeight() == 0) {
		cout << "I should keep " << itemId << " may come in handy later.";
		return visitChildren(ctx);
	}

	if (pInventory->ReduceItem(pItem->GetItemId())) {
		cout << "I dropped " << itemId << ".";
		return visitChildren(ctx);
	}

	cout << "I am not carrying " << itemId << ".";

	return visitChildren(ctx);
}
#pragma endregion
#pragma region STATUS SELF
antlrcpp::Any MyinteractionsVisitor::visitStatusself(interactionsParser::StatusselfContext * ctx)
{
	Player* pPlayer = GameManager::GetInstance()->GetPlayer();

	float healthPercentage = pPlayer->GetHealth() / pPlayer->GetMaxHealth();

	if (healthPercentage >= 0 && healthPercentage < 0.25f) {
		cout << "\nI'm bleeding out, i'm not going to last long like this.";
	}
	else if (healthPercentage >= 0.25 && healthPercentage < 0.5f) {
		cout << "\nI'm hurt but i can still go on.";
	}
	else if (healthPercentage >= 0.5 && healthPercentage < 0.75f) {
		cout << "\nI've got some scratches, nothing serious.";
	}
	else if (healthPercentage >= 0.75 && healthPercentage <= 1) {
		cout << "\nI'am fine, no major injuries.";
	}

	cout << " " << pPlayer->GetHealth() << "/" << pPlayer->GetMaxHealth();

	return visitChildren(ctx);
}
#pragma endregion
#pragma region INVENTORY EXAMINE
antlrcpp::Any MyinteractionsVisitor::visitInventoryexamine(interactionsParser::InventoryexamineContext * ctx)
{
	Inventory* pInventory = GameManager::GetInstance()->GetPlayer()->GetInventory();
	string itemId = ctx->STRING()->getSymbol()->getText();
	Item* pItem = ItemManager::GetInstance()->GetItem(itemId);

	if (pItem == nullptr) {
		cout << itemId << " doesn't excist.";
		return visitChildren(ctx);
	}

	if (pInventory->GetItemPair(itemId).m_Amount <= 0) {
		cout << "I am not carrying " << itemId << ".";
		return visitChildren(ctx);
	}

	cout << pItem->GetItemExamineResponce();

	return visitChildren(ctx);
}
#pragma endregion
#pragma region USE KEY
antlrcpp::Any MyinteractionsVisitor::visitUsekey(interactionsParser::UsekeyContext *ctx)
{
	Inventory* pInventory = GameManager::GetInstance()->GetPlayer()->GetInventory();

	string itemId = ctx->STRING()->getSymbol()->getText();
	Item* pItem = ItemManager::GetInstance()->GetItem(itemId);

	if (pItem == nullptr) {
		cout << itemId << " doesn't excist.";
		return visitChildren(ctx);
	}

	if (pItem->GetItemtype() != ItemType::KEY) {
		cout << "\n" << itemId << " is not a key.";
		return visitChildren(ctx);
	}

	if (pInventory->GetItemPair(itemId).m_Amount <= 0) {
		cout << "I am not carrying " << itemId << ".";
		return visitChildren(ctx);
	}

	Node* pCurrentNode = GameManager::GetInstance()->GetPlayer()->GetCurrentNode();
	vector<Connection*> connections = pCurrentNode->GetConnections();

	bool noneOpend = true;
	for_each(connections.begin(), connections.end(), [&](Connection* connection) {
		if (connection->GetKeyId() == itemId) {
			connection->SetConnectionStatus(true);
			noneOpend = false;
			cout << "\nI unlocked the door to " << connection->GetOtherNodeId(pCurrentNode->GetNodeId()) << ".";
		}
	});

	if (noneOpend)
		cout << "I could not open any door.";

	return visitChildren(ctx);
}
#pragma endregion
#pragma region USE ITEM
antlrcpp::Any MyinteractionsVisitor::visitUseitem(interactionsParser::UseitemContext * ctx)
{
	Inventory* pInventory = GameManager::GetInstance()->GetPlayer()->GetInventory();
	map<string, ItemPtrAmount> itemMap = pInventory->GetItemMap();

	string itemId = ctx->STRING()->getSymbol()->getText();
	Item* pItem = ItemManager::GetInstance()->GetItem(itemId);

	if (pItem == nullptr) {
		cout << "I am not carrying " << itemId << ".";
		return visitChildren(ctx);
	}

	if (itemMap[itemId].m_Amount <= 0) {
		cout << "I am not carrying " << itemId << ".";
		return visitChildren(ctx);
	}

	if (pItem->UseItem()) {
		cout << "I used " << itemId << ".";
		pInventory->ReduceItem(itemId);
	}

	return visitChildren(ctx);
}
#pragma endregion