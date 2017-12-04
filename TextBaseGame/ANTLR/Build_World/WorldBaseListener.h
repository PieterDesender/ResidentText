// Generated from World.g4 by ANTLR 4.6

#pragma once

#include "antlr4-runtime.h"
#include "WorldListener.h"

/**
 * This class provides an empty implementation of WorldListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  WorldBaseListener : public WorldListener {
public:

	virtual void enterWorld(WorldParser::WorldContext * /*ctx*/) override { }
	virtual void exitWorld(WorldParser::WorldContext * /*ctx*/) override { }

	virtual void enterNode(WorldParser::NodeContext * /*ctx*/) override { }
	virtual void exitNode(WorldParser::NodeContext * /*ctx*/) override { }

	virtual void enterNodeexamine(WorldParser::NodeexamineContext * /*ctx*/) override { }
	virtual void exitNodeexamine(WorldParser::NodeexamineContext * /*ctx*/) override { }

	virtual void enterNodeworldobjectlist(WorldParser::NodeworldobjectlistContext * /*ctx*/) override { }
	virtual void exitNodeworldobjectlist(WorldParser::NodeworldobjectlistContext * /*ctx*/) override { }

	virtual void enterNodeworldobjectiteration(WorldParser::NodeworldobjectiterationContext * /*ctx*/) override { }
	virtual void exitNodeworldobjectiteration(WorldParser::NodeworldobjectiterationContext * /*ctx*/) override { }

	virtual void enterNodeworldobject(WorldParser::NodeworldobjectContext * /*ctx*/) override { }
	virtual void exitNodeworldobject(WorldParser::NodeworldobjectContext * /*ctx*/) override { }

	virtual void enterConnection(WorldParser::ConnectionContext * /*ctx*/) override { }
	virtual void exitConnection(WorldParser::ConnectionContext * /*ctx*/) override { }

	virtual void enterNode1(WorldParser::Node1Context * /*ctx*/) override { }
	virtual void exitNode1(WorldParser::Node1Context * /*ctx*/) override { }

	virtual void enterNode2(WorldParser::Node2Context * /*ctx*/) override { }
	virtual void exitNode2(WorldParser::Node2Context * /*ctx*/) override { }

	virtual void enterConnectionstatus(WorldParser::ConnectionstatusContext * /*ctx*/) override { }
	virtual void exitConnectionstatus(WorldParser::ConnectionstatusContext * /*ctx*/) override { }

	virtual void enterExamineclosed(WorldParser::ExamineclosedContext * /*ctx*/) override { }
	virtual void exitExamineclosed(WorldParser::ExamineclosedContext * /*ctx*/) override { }

	virtual void enterExamineopen(WorldParser::ExamineopenContext * /*ctx*/) override { }
	virtual void exitExamineopen(WorldParser::ExamineopenContext * /*ctx*/) override { }

	virtual void enterKeyid(WorldParser::KeyidContext * /*ctx*/) override { }
	virtual void exitKeyid(WorldParser::KeyidContext * /*ctx*/) override { }

	virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
	virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
	virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
	virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }
};
