// Generated from WorldObjects.g4 by ANTLR 4.6

#pragma once

#include "antlr4-runtime.h"
#include "WorldObjectsVisitor.h"

/**
 * This class provides an empty implementation of WorldObjectsVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  WorldObjectsBaseVisitor : public WorldObjectsVisitor {
public:

	virtual antlrcpp::Any visitWorldobjects(WorldObjectsParser::WorldobjectsContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitWorldobject(WorldObjectsParser::WorldobjectContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitWorldobjectname(WorldObjectsParser::WorldobjectnameContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitWorldobjectexamine(WorldObjectsParser::WorldobjectexamineContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitWorldobjectitemlist(WorldObjectsParser::WorldobjectitemlistContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitWorldobjectitemiteration(WorldObjectsParser::WorldobjectitemiterationContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitWorldobjectitem(WorldObjectsParser::WorldobjectitemContext *ctx) override {
		return visitChildren(ctx);
	}
};
