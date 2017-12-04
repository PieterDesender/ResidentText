// Generated from World.g4 by ANTLR 4.6

#pragma once

#include "antlr4-runtime.h"
#include "WorldVisitor.h"

/**
 * This class provides an empty implementation of WorldVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  WorldBaseVisitor : public WorldVisitor {
public:

	virtual antlrcpp::Any visitWorld(WorldParser::WorldContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitNode(WorldParser::NodeContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitNodeexamine(WorldParser::NodeexamineContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitNodeworldobjectlist(WorldParser::NodeworldobjectlistContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitNodeworldobjectiteration(WorldParser::NodeworldobjectiterationContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitNodeworldobject(WorldParser::NodeworldobjectContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitConnection(WorldParser::ConnectionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitNode1(WorldParser::Node1Context *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitNode2(WorldParser::Node2Context *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitConnectionstatus(WorldParser::ConnectionstatusContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitExamineclosed(WorldParser::ExamineclosedContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitExamineopen(WorldParser::ExamineopenContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitKeyid(WorldParser::KeyidContext *ctx) override {
		return visitChildren(ctx);
	}
};
