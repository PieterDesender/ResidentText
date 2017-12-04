#pragma once
#include <map>
//#include <string>

#include "../World/WorldObject.h"
#include "../Singleton.h"

#include "antlr4-runtime.h"
//#include "../ANTLR\Build_WorldObjects\WorldObjectsLexer.h"
//#include "../ANTLR\Build_WorldObjects\WorldObjectsParser.h"
//#include "../ANTLR\Build_WorldObjects\WorldObjectsBaseListener.h"
//#include "../ANTLR\Build_WorldObjects\WorldObjectsBaseVisitor.h"
//#include "../ANTLR\Build_WorldObjects\MyWorldObjectsVisitor.h"

using namespace antlr4;
using namespace std;

class WorldObjectManager : public Singleton<WorldObjectManager>
{
public:
	WorldObject* AddWorldObject(string objectId);

	WorldObject* GetWorldObject(string objectId) { return m_MapWordlObject[objectId]; }
	WorldObject* GetLastAddedWorldObject() const { return m_LastAddedWorldObject; }

	bool SetWorldObjectsToMap(string assetFile);
private:
	map<string, WorldObject*> m_MapWordlObject;
	WorldObject* m_LastAddedWorldObject = nullptr;

	friend class Singleton<WorldObjectManager>;
	WorldObjectManager() {}
	~WorldObjectManager();
};
