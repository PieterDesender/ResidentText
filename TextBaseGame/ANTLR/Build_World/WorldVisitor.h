// Generated from World.g4 by ANTLR 4.6

#pragma once

#include "antlr4-runtime.h"
#include "WorldParser.h"

/**
 * This class defines an abstract visitor for a parse tree
 * produced by WorldParser.
 */
class  WorldVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

	/**
	 * Visit parse trees produced by WorldParser.
	 */
	virtual antlrcpp::Any visitWorld(WorldParser::WorldContext *context) = 0;

	virtual antlrcpp::Any visitNode(WorldParser::NodeContext *context) = 0;

	virtual antlrcpp::Any visitNodeexamine(WorldParser::NodeexamineContext *context) = 0;

	virtual antlrcpp::Any visitNodeworldobjectlist(WorldParser::NodeworldobjectlistContext *context) = 0;

	virtual antlrcpp::Any visitNodeworldobjectiteration(WorldParser::NodeworldobjectiterationContext *context) = 0;

	virtual antlrcpp::Any visitNodeworldobject(WorldParser::NodeworldobjectContext *context) = 0;

	virtual antlrcpp::Any visitConnection(WorldParser::ConnectionContext *context) = 0;

	virtual antlrcpp::Any visitNode1(WorldParser::Node1Context *context) = 0;

	virtual antlrcpp::Any visitNode2(WorldParser::Node2Context *context) = 0;

	virtual antlrcpp::Any visitConnectionstatus(WorldParser::ConnectionstatusContext *context) = 0;

	virtual antlrcpp::Any visitExamineclosed(WorldParser::ExamineclosedContext *context) = 0;

	virtual antlrcpp::Any visitExamineopen(WorldParser::ExamineopenContext *context) = 0;

	virtual antlrcpp::Any visitKeyid(WorldParser::KeyidContext *context) = 0;
};
