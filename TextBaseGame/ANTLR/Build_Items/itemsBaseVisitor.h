// Generated from items.g4 by ANTLR 4.6

#pragma once

#include "antlr4-runtime.h"
#include "itemsVisitor.h"

/**
 * This class provides an empty implementation of itemsVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  itemsBaseVisitor : public itemsVisitor {
public:

	virtual antlrcpp::Any visitItems(itemsParser::ItemsContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitItem(itemsParser::ItemContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitItemtype(itemsParser::ItemtypeContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitItemweight(itemsParser::ItemweightContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitItemexamine(itemsParser::ItemexamineContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitValue(itemsParser::ValueContext *ctx) override {
		return visitChildren(ctx);
	}
};
