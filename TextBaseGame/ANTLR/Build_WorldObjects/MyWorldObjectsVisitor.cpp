#include "MyWorldObjectsVisitor.h"

antlrcpp::Any MyWorldObjectsVisitor::visitWorldobject(WorldObjectsParser::WorldobjectContext * ctx)
{
	string id = ctx->ID()->getSymbol()->getText();
	string name = ctx->worldobjectname()->STRING()->getSymbol()->getText();
	string examineResponce = ctx->worldobjectexamine()->STRING()->getSymbol()->getText();

	WorldObject* object = WorldObjectManager::GetInstance()->AddWorldObject(id);

	name = name.substr(1, name.size() - 2);
	examineResponce = examineResponce.substr(1, examineResponce.size() - 2);

	object->SetObjectName(name);
	object->SetExamineResponce(examineResponce);

	return visitChildren(ctx);
}

antlrcpp::Any MyWorldObjectsVisitor::visitWorldobjectitem(WorldObjectsParser::WorldobjectitemContext * ctx)
{
	string itemId = ctx->STRING()->getSymbol()->getText();
	itemId = itemId.substr(1, itemId.size() - 2);

	if (itemId == "none")
		return visitChildren(ctx);

	WorldObject* object = WorldObjectManager::GetInstance()->GetLastAddedWorldObject();

	object->GetInventory()->AddItem(itemId);

	return visitChildren(ctx);
}