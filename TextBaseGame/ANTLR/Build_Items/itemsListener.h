// Generated from items.g4 by ANTLR 4.6

#pragma once

#include "antlr4-runtime.h"
#include "itemsParser.h"

/**
 * This interface defines an abstract listener for a parse tree produced by itemsParser.
 */
class  itemsListener : public antlr4::tree::ParseTreeListener {
public:

	virtual void enterItems(itemsParser::ItemsContext *ctx) = 0;
	virtual void exitItems(itemsParser::ItemsContext *ctx) = 0;

	virtual void enterItem(itemsParser::ItemContext *ctx) = 0;
	virtual void exitItem(itemsParser::ItemContext *ctx) = 0;

	virtual void enterItemtype(itemsParser::ItemtypeContext *ctx) = 0;
	virtual void exitItemtype(itemsParser::ItemtypeContext *ctx) = 0;

	virtual void enterItemweight(itemsParser::ItemweightContext *ctx) = 0;
	virtual void exitItemweight(itemsParser::ItemweightContext *ctx) = 0;

	virtual void enterItemexamine(itemsParser::ItemexamineContext *ctx) = 0;
	virtual void exitItemexamine(itemsParser::ItemexamineContext *ctx) = 0;

	virtual void enterValue(itemsParser::ValueContext *ctx) = 0;
	virtual void exitValue(itemsParser::ValueContext *ctx) = 0;
};
