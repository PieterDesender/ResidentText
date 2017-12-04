#pragma once

#include "interactionsBaseVisitor.h"
#include "interactionsLexer.h"
#include "interactionsParser.h"

//#include "tree/TerminalNode.h"
//#include "../../Managers/GameManager.h"
//#include "../../Managers/NodeManager.h"
//#include "../../Managers/ItemManager.h"
//
//#include"../../World/WorldObject.h"
//#include"../../World/Node.h"
//#include"../../World/Connection.h"
//
//#include"../../Items/Item.h"
//#include"../../Items/Inventory.h"
//
//#include"../../GameObjects/Player.h"
//#include"../../GameObjects/GameObject.h"
//
//#include"../../Structs.h"
//
//#include <string>

using namespace std;

class MyinteractionsVisitor : public interactionsBaseVisitor
{
public:
	MyinteractionsVisitor() {};
	~MyinteractionsVisitor() {};

	virtual antlrcpp::Any visitMoveto(interactionsParser::MovetoContext *ctx) override;
	virtual antlrcpp::Any visitLook(interactionsParser::LookContext *ctx) override;
	virtual antlrcpp::Any visitExamineobject(interactionsParser::ExamineobjectContext *ctx) override;
	virtual antlrcpp::Any visitSearchobject(interactionsParser::SearchobjectContext *ctx) override;
	virtual antlrcpp::Any visitExaminedoor(interactionsParser::ExaminedoorContext *ctx) override;
	virtual antlrcpp::Any visitInventoryshow(interactionsParser::InventoryshowContext *ctx) override;
	virtual antlrcpp::Any visitPickupitem(interactionsParser::PickupitemContext *ctx) override;
	virtual antlrcpp::Any visitDropitem(interactionsParser::DropitemContext *ctx) override;
	virtual antlrcpp::Any visitUseitem(interactionsParser::UseitemContext *ctx) override;
	virtual antlrcpp::Any visitStatusself(interactionsParser::StatusselfContext *ctx) override;
	virtual antlrcpp::Any visitInventoryexamine(interactionsParser::InventoryexamineContext *ctx) override;
	virtual antlrcpp::Any visitUsekey(interactionsParser::UsekeyContext *ctx) override;

private:
};
