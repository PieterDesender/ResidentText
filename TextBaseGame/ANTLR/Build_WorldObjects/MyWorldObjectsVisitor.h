#pragma once

#include"WorldObjectsBaseVisitor.h"
#include"WorldObjectsLexer.h"
#include"WorldObjectsParser.h"
#include "tree/TerminalNode.h"

#include "../../Managers/NodeManager.h"
#include "../../Managers/WorldObjectManager.h"

#include<string>

#include"../../World/WorldObject.h"

#include"../../Items/Inventory.h"

using namespace std;

class MyWorldObjectsVisitor : public WorldObjectsBaseVisitor
{
public:
	MyWorldObjectsVisitor() {};
	~MyWorldObjectsVisitor() {};

	virtual antlrcpp::Any visitWorldobject(WorldObjectsParser::WorldobjectContext *ctx) override;
	virtual antlrcpp::Any visitWorldobjectitem(WorldObjectsParser::WorldobjectitemContext *ctx) override;
};
