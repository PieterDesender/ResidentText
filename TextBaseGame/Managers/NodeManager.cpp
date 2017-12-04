#include "NodeManager.h"
#include "../ANTLR/Build_World/WorldParser.h"
#include "../ANTLR/Build_World/WorldVisitor.h"
#include "../ANTLR/Build_World/MyWorldVisitor.h"

NodeManager::~NodeManager()
{
	for each (pair<string, Node*> mapped in m_MapNodes)
	{
		delete mapped.second;
	}
	m_MapNodes.clear();
	m_LastAddedNode = nullptr;
}

Node* NodeManager::AddNode(string nodeId)
{
	m_MapNodes[nodeId] = new Node(nodeId);
	m_LastAddedNode = m_MapNodes[nodeId];
	return m_LastAddedNode;
}

bool NodeManager::SetNodesToMap(string assetFile)
{
	ifstream stream;
	stream.open(assetFile);
	if (stream.is_open()) {
		ANTLRInputStream input(stream);
		WorldLexer lexer(&input);
		CommonTokenStream tokens(&lexer);
		WorldParser parser(&tokens);
		tree::ParseTree* tree = parser.world();
		WorldVisitor* visitor = new MyWorldVisitor();
		visitor->visit(tree);
		stream.close();
		tree->~ParseTree();
		delete visitor;
		return true;
	}
	return false;
}