#pragma once

#include "itemsBaseVisitor.h"
#include "itemsLexer.h"
#include "itemsParser.h"
//#include "tree/TerminalNode.h"
//#include "../../Enumeration.h"
//
//#include "../../Managers/ItemManager.h"
//
//#include "../../Items/Item.h"
//
//#include<string>

using namespace std;

class MyItemsVisitor : public itemsBaseVisitor
{
public:
	MyItemsVisitor() {};
	~MyItemsVisitor() {};

	virtual antlrcpp::Any visitItem(itemsParser::ItemContext *ctx) override;
};
