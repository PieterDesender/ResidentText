#pragma once

#include <vector>
#include <string>
#include <algorithm>

#include "Connection.h"
#include "WorldObject.h"

using namespace std;

class Node
{
public:
	Node(string nodeId);
	~Node();

	void AddConnection(Connection* connection) { m_VecConnections.push_back(connection); }
	vector<Connection*> GetConnections() const { return m_VecConnections; }

	Connection* ConnectionWithNode(string nodeId);
	Connection* GetConnection(string connectionId);

	string GetNodeId() const { return m_NodeId; }

	void AddWorldObject(WorldObject* object) { m_VecWorldObjects.push_back(object); }
	void RemoveWorldOjectByName(const string& name);
	void RemoveWorldOjectById(const string& id);
	vector<WorldObject*> GetWorldObjects() const { return m_VecWorldObjects; }

	void SetExamineResponce(string responce) { m_ExamineResponce = responce; }
	string GetExamineResponce() const { return m_ExamineResponce; }

	WorldObject* GetObjectByName(const string& name) const;

private:
	vector<Connection*> m_VecConnections;
	vector<WorldObject*> m_VecWorldObjects;

	string m_NodeId;

	string m_ExamineResponce;
};
