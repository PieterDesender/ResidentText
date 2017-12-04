#include "MyItemsVisitor.h"

#include "tree/TerminalNode.h"
#include "../../Enumeration.h"

#include "../../Managers/ItemManager.h"

#include "../../Items/Item.h"

#include<string>

antlrcpp::Any MyItemsVisitor::visitItem(itemsParser::ItemContext *ctx) {
	string itemId = ctx->ID()->getSymbol()->getText();
	string itemWeight = ctx->itemweight()->INT()->getSymbol()->getText();
	string itemExamineResponce = ctx->itemexamine()->STRING()->getSymbol()->getText();
	int itemTypeInt = stoi(ctx->itemtype()->INT()->getSymbol()->getText());

	itemExamineResponce = itemExamineResponce.substr(1, itemExamineResponce.size() - 2);

	Item* currentItem = ItemManager::GetInstance()->AddItem(itemId, (ItemType)itemTypeInt);

	currentItem->SetItemWeight(stoi(itemWeight));
	currentItem->SetItmeExamineResponce(itemExamineResponce);
	return visitChildren(ctx);
}