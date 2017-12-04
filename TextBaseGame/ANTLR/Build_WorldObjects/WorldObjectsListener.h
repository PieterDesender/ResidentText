// Generated from WorldObjects.g4 by ANTLR 4.6

#pragma once

#include "antlr4-runtime.h"
#include "WorldObjectsParser.h"

/**
 * This interface defines an abstract listener for a parse tree produced by WorldObjectsParser.
 */
class  WorldObjectsListener : public antlr4::tree::ParseTreeListener {
public:

	virtual void enterWorldobjects(WorldObjectsParser::WorldobjectsContext *ctx) = 0;
	virtual void exitWorldobjects(WorldObjectsParser::WorldobjectsContext *ctx) = 0;

	virtual void enterWorldobject(WorldObjectsParser::WorldobjectContext *ctx) = 0;
	virtual void exitWorldobject(WorldObjectsParser::WorldobjectContext *ctx) = 0;

	virtual void enterWorldobjectname(WorldObjectsParser::WorldobjectnameContext *ctx) = 0;
	virtual void exitWorldobjectname(WorldObjectsParser::WorldobjectnameContext *ctx) = 0;

	virtual void enterWorldobjectexamine(WorldObjectsParser::WorldobjectexamineContext *ctx) = 0;
	virtual void exitWorldobjectexamine(WorldObjectsParser::WorldobjectexamineContext *ctx) = 0;

	virtual void enterWorldobjectitemlist(WorldObjectsParser::WorldobjectitemlistContext *ctx) = 0;
	virtual void exitWorldobjectitemlist(WorldObjectsParser::WorldobjectitemlistContext *ctx) = 0;

	virtual void enterWorldobjectitemiteration(WorldObjectsParser::WorldobjectitemiterationContext *ctx) = 0;
	virtual void exitWorldobjectitemiteration(WorldObjectsParser::WorldobjectitemiterationContext *ctx) = 0;

	virtual void enterWorldobjectitem(WorldObjectsParser::WorldobjectitemContext *ctx) = 0;
	virtual void exitWorldobjectitem(WorldObjectsParser::WorldobjectitemContext *ctx) = 0;
};
