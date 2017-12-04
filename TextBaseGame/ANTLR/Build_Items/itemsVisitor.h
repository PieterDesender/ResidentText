// Generated from items.g4 by ANTLR 4.6

#pragma once

#include "antlr4-runtime.h"
#include "itemsParser.h"

/**
 * This class defines an abstract visitor for a parse tree
 * produced by itemsParser.
 */
class  itemsVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

	/**
	 * Visit parse trees produced by itemsParser.
	 */
	virtual antlrcpp::Any visitItems(itemsParser::ItemsContext *context) = 0;

	virtual antlrcpp::Any visitItem(itemsParser::ItemContext *context) = 0;

	virtual antlrcpp::Any visitItemtype(itemsParser::ItemtypeContext *context) = 0;

	virtual antlrcpp::Any visitItemweight(itemsParser::ItemweightContext *context) = 0;

	virtual antlrcpp::Any visitItemexamine(itemsParser::ItemexamineContext *context) = 0;

	virtual antlrcpp::Any visitValue(itemsParser::ValueContext *context) = 0;
};
