// Generated from World.g4 by ANTLR 4.6

#pragma once

#include "antlr4-runtime.h"
#include "WorldParser.h"

/**
 * This interface defines an abstract listener for a parse tree produced by WorldParser.
 */
class  WorldListener : public antlr4::tree::ParseTreeListener {
public:

	virtual void enterWorld(WorldParser::WorldContext *ctx) = 0;
	virtual void exitWorld(WorldParser::WorldContext *ctx) = 0;

	virtual void enterNode(WorldParser::NodeContext *ctx) = 0;
	virtual void exitNode(WorldParser::NodeContext *ctx) = 0;

	virtual void enterNodeexamine(WorldParser::NodeexamineContext *ctx) = 0;
	virtual void exitNodeexamine(WorldParser::NodeexamineContext *ctx) = 0;

	virtual void enterNodeworldobjectlist(WorldParser::NodeworldobjectlistContext *ctx) = 0;
	virtual void exitNodeworldobjectlist(WorldParser::NodeworldobjectlistContext *ctx) = 0;

	virtual void enterNodeworldobjectiteration(WorldParser::NodeworldobjectiterationContext *ctx) = 0;
	virtual void exitNodeworldobjectiteration(WorldParser::NodeworldobjectiterationContext *ctx) = 0;

	virtual void enterNodeworldobject(WorldParser::NodeworldobjectContext *ctx) = 0;
	virtual void exitNodeworldobject(WorldParser::NodeworldobjectContext *ctx) = 0;

	virtual void enterConnection(WorldParser::ConnectionContext *ctx) = 0;
	virtual void exitConnection(WorldParser::ConnectionContext *ctx) = 0;

	virtual void enterNode1(WorldParser::Node1Context *ctx) = 0;
	virtual void exitNode1(WorldParser::Node1Context *ctx) = 0;

	virtual void enterNode2(WorldParser::Node2Context *ctx) = 0;
	virtual void exitNode2(WorldParser::Node2Context *ctx) = 0;

	virtual void enterConnectionstatus(WorldParser::ConnectionstatusContext *ctx) = 0;
	virtual void exitConnectionstatus(WorldParser::ConnectionstatusContext *ctx) = 0;

	virtual void enterExamineclosed(WorldParser::ExamineclosedContext *ctx) = 0;
	virtual void exitExamineclosed(WorldParser::ExamineclosedContext *ctx) = 0;

	virtual void enterExamineopen(WorldParser::ExamineopenContext *ctx) = 0;
	virtual void exitExamineopen(WorldParser::ExamineopenContext *ctx) = 0;

	virtual void enterKeyid(WorldParser::KeyidContext *ctx) = 0;
	virtual void exitKeyid(WorldParser::KeyidContext *ctx) = 0;
};
