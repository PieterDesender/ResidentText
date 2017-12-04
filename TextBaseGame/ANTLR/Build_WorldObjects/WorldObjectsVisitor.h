// Generated from WorldObjects.g4 by ANTLR 4.6

#pragma once

#include "antlr4-runtime.h"
#include "WorldObjectsParser.h"

/**
 * This class defines an abstract visitor for a parse tree
 * produced by WorldObjectsParser.
 */
class  WorldObjectsVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

	/**
	 * Visit parse trees produced by WorldObjectsParser.
	 */
	virtual antlrcpp::Any visitWorldobjects(WorldObjectsParser::WorldobjectsContext *context) = 0;

	virtual antlrcpp::Any visitWorldobject(WorldObjectsParser::WorldobjectContext *context) = 0;

	virtual antlrcpp::Any visitWorldobjectname(WorldObjectsParser::WorldobjectnameContext *context) = 0;

	virtual antlrcpp::Any visitWorldobjectexamine(WorldObjectsParser::WorldobjectexamineContext *context) = 0;

	virtual antlrcpp::Any visitWorldobjectitemlist(WorldObjectsParser::WorldobjectitemlistContext *context) = 0;

	virtual antlrcpp::Any visitWorldobjectitemiteration(WorldObjectsParser::WorldobjectitemiterationContext *context) = 0;

	virtual antlrcpp::Any visitWorldobjectitem(WorldObjectsParser::WorldobjectitemContext *context) = 0;
};
