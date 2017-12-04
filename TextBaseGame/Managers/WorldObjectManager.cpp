#include "WorldObjectManager.h"
#include "../ANTLR/Build_WorldObjects/WorldObjectsLexer.h"
#include "../ANTLR/Build_WorldObjects/WorldObjectsParser.h"
#include "../ANTLR/Build_WorldObjects/MyWorldObjectsVisitor.h"

WorldObjectManager::~WorldObjectManager()
{
	for each (pair<string, WorldObject*> worldObjectPair in m_MapWordlObject)
	{
		delete worldObjectPair.second;
	}
	m_MapWordlObject.clear();
}

WorldObject * WorldObjectManager::AddWorldObject(string objectId)
{
	WorldObject* object = new WorldObject(objectId);
	m_MapWordlObject[objectId] = object;
	m_LastAddedWorldObject = object;
	return object;
}

bool WorldObjectManager::SetWorldObjectsToMap(string assetFile)
{
	ifstream stream;
	stream.open(assetFile);
	if (stream.is_open()) {
		ANTLRInputStream input(stream);
		WorldObjectsLexer lexer(&input);
		CommonTokenStream tokens(&lexer);
		WorldObjectsParser parser(&tokens);
		tree::ParseTree* tree = parser.worldobjects();
		WorldObjectsVisitor* visitor = new MyWorldObjectsVisitor();
		visitor->visit(tree);
		stream.close();
		tree->~ParseTree();
		tree = nullptr;
		delete visitor;
		visitor = nullptr;
		return true;
	}
	return false;
}