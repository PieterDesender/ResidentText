// Generated from WorldObjects.g4 by ANTLR 4.6

#pragma once

#include "antlr4-runtime.h"
#include "WorldObjectsListener.h"

/**
 * This class provides an empty implementation of WorldObjectsListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  WorldObjectsBaseListener : public WorldObjectsListener {
public:

	virtual void enterWorldobjects(WorldObjectsParser::WorldobjectsContext * /*ctx*/) override { }
	virtual void exitWorldobjects(WorldObjectsParser::WorldobjectsContext * /*ctx*/) override { }

	virtual void enterWorldobject(WorldObjectsParser::WorldobjectContext * /*ctx*/) override { }
	virtual void exitWorldobject(WorldObjectsParser::WorldobjectContext * /*ctx*/) override { }

	virtual void enterWorldobjectname(WorldObjectsParser::WorldobjectnameContext * /*ctx*/) override { }
	virtual void exitWorldobjectname(WorldObjectsParser::WorldobjectnameContext * /*ctx*/) override { }

	virtual void enterWorldobjectexamine(WorldObjectsParser::WorldobjectexamineContext * /*ctx*/) override { }
	virtual void exitWorldobjectexamine(WorldObjectsParser::WorldobjectexamineContext * /*ctx*/) override { }

	virtual void enterWorldobjectitemlist(WorldObjectsParser::WorldobjectitemlistContext * /*ctx*/) override { }
	virtual void exitWorldobjectitemlist(WorldObjectsParser::WorldobjectitemlistContext * /*ctx*/) override { }

	virtual void enterWorldobjectitemiteration(WorldObjectsParser::WorldobjectitemiterationContext * /*ctx*/) override { }
	virtual void exitWorldobjectitemiteration(WorldObjectsParser::WorldobjectitemiterationContext * /*ctx*/) override { }

	virtual void enterWorldobjectitem(WorldObjectsParser::WorldobjectitemContext * /*ctx*/) override { }
	virtual void exitWorldobjectitem(WorldObjectsParser::WorldobjectitemContext * /*ctx*/) override { }

	virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
	virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
	virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
	virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }
};
