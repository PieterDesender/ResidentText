#include "MyWorldVisitor.h"

#include "../../Managers/NodeManager.h"
#include "../../Managers/ConnectionManager.h"
#include "../../Managers/WorldObjectManager.h"

//#include"../../Items/Item.h"

#include"../../World/Node.h"
#include"../../World/Connection.h"
#include"../../World/WorldObject.h"

#include "tree/TerminalNode.h"

#include<string>

antlrcpp::Any MyWorldVisitor::visitNode(WorldParser::NodeContext * ctx)
{
	Node* currentNode = NodeManager::GetInstance()->AddNode(ctx->ID()->getSymbol()->getText());
	string examineResponce = ctx->nodeexamine()->STRING()->getSymbol()->getText();

	examineResponce = examineResponce.substr(1, examineResponce.size() - 2);

	currentNode->SetExamineResponce(examineResponce);

	return visitChildren(ctx);
}

antlrcpp::Any MyWorldVisitor::visitNodeworldobject(WorldParser::NodeworldobjectContext * ctx)
{
	string worldObjectId = ctx->STRING()->getSymbol()->getText();

	worldObjectId = worldObjectId.substr(1, worldObjectId.size() - 2);

	if (worldObjectId == "none")
		return visitChildren(ctx);

	WorldObject* object = WorldObjectManager::GetInstance()->GetWorldObject(worldObjectId);
	NodeManager::GetInstance()->GetLastAddedNode()->AddWorldObject(object);

	return visitChildren(ctx);
}

antlrcpp::Any MyWorldVisitor::visitConnection(WorldParser::ConnectionContext * ctx)
{
	string nodeId1 = ctx->node1()->STRING()->getSymbol()->getText();
	string nodeId2 = ctx->node2()->STRING()->getSymbol()->getText();
	string keyId = ctx->keyid()->STRING()->getSymbol()->getText();

	nodeId1 = nodeId1.substr(1, nodeId1.size() - 2);
	nodeId2 = nodeId2.substr(1, nodeId2.size() - 2);
	keyId = keyId.substr(1, keyId.size() - 2);

	int connectionStatus = stoi(ctx->connectionstatus()->INT()->getSymbol()->getText());

	Connection* currentConnection = ConnectionManager::GetInstance()->AddConnection(nodeId1, nodeId2, connectionStatus, keyId);

	string connectionStatusOpen = ctx->examineopen()->STRING()->getSymbol()->getText();
	string connectionStatusClosed = ctx->examineclosed()->STRING()->getSymbol()->getText();

	connectionStatusOpen = connectionStatusOpen.substr(1, connectionStatusOpen.size() - 2);
	connectionStatusClosed = connectionStatusClosed.substr(1, connectionStatusClosed.size() - 2);

	currentConnection->SetExamineResponceOpen(connectionStatusOpen);
	currentConnection->SetExamineResponceClosed(connectionStatusClosed);

	return visitChildren(ctx);
}