#pragma once

#include <map>
//#include <string>

#include "../Singleton.h"
#include "../World/Node.h"

#include "antlr4-runtime.h"
//#include "../ANTLR\Build_World\WorldLexer.h"
//#include "../ANTLR\Build_World\WorldParser.h"
//#include "../ANTLR\Build_World\WorldBaseListener.h"
//#include "../ANTLR\Build_World\WorldBaseVisitor.h"
//#include "../ANTLR\Build_World\MyWorldVisitor.h"

using namespace antlr4;
using namespace std;

class NodeManager : public Singleton<NodeManager>
{
public:
	Node* AddNode(string nodeId);
	Node* GetNode(string nodeId) { return m_MapNodes[nodeId]; }

	Node* GetLastAddedNode() const { return m_LastAddedNode; }

	bool SetNodesToMap(string assetFile);
private:
	map<string, Node*>m_MapNodes;
	Node* m_LastAddedNode = nullptr;

	friend class Singleton<NodeManager>;
	NodeManager() {};
	~NodeManager();
};