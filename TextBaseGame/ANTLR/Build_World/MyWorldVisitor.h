#pragma once

#include "WorldBaseVisitor.h"
#include "WorldLexer.h"
#include "WorldParser.h"
//#include "tree/TerminalNode.h"
//
//#include<string>

using namespace std;

class MyWorldVisitor : public WorldBaseVisitor
{
public:
	MyWorldVisitor() {};
	virtual ~MyWorldVisitor() {};

	virtual antlrcpp::Any visitNode(WorldParser::NodeContext* ctx) override;
	virtual antlrcpp::Any visitNodeworldobject(WorldParser::NodeworldobjectContext *ctx) override;

	virtual antlrcpp::Any visitConnection(WorldParser::ConnectionContext *ctx) override;
};
