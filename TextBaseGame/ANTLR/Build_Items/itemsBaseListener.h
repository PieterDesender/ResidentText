// Generated from items.g4 by ANTLR 4.6

#pragma once

#include "antlr4-runtime.h"
#include "itemsListener.h"

/**
 * This class provides an empty implementation of itemsListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  itemsBaseListener : public itemsListener {
public:

	virtual void enterItems(itemsParser::ItemsContext * /*ctx*/) override { }
	virtual void exitItems(itemsParser::ItemsContext * /*ctx*/) override { }

	virtual void enterItem(itemsParser::ItemContext * /*ctx*/) override { }
	virtual void exitItem(itemsParser::ItemContext * /*ctx*/) override { }

	virtual void enterItemtype(itemsParser::ItemtypeContext * /*ctx*/) override { }
	virtual void exitItemtype(itemsParser::ItemtypeContext * /*ctx*/) override { }

	virtual void enterItemweight(itemsParser::ItemweightContext * /*ctx*/) override { }
	virtual void exitItemweight(itemsParser::ItemweightContext * /*ctx*/) override { }

	virtual void enterItemexamine(itemsParser::ItemexamineContext * /*ctx*/) override { }
	virtual void exitItemexamine(itemsParser::ItemexamineContext * /*ctx*/) override { }

	virtual void enterValue(itemsParser::ValueContext * /*ctx*/) override { }
	virtual void exitValue(itemsParser::ValueContext * /*ctx*/) override { }

	virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
	virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
	virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
	virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }
};
