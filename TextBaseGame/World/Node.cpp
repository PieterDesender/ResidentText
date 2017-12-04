#include "Node.h"

Node::Node(string nodeId) : m_NodeId(nodeId)
{
	m_VecConnections.reserve(10);
	m_VecWorldObjects.reserve(10);
}

Node::~Node()
{
	m_VecConnections.clear();
	m_VecWorldObjects.clear();
}

Connection* Node::ConnectionWithNode(string nodeId)
{
	Connection* foundConnection = nullptr;
	for_each(m_VecConnections.begin(), m_VecConnections.end(), [&](Connection* connection) {
		if (connection->GetOtherNodeId(m_NodeId) == nodeId) {
			foundConnection = connection;
			return;
		}
	});
	return foundConnection;
}

Connection * Node::GetConnection(string otherNodeId)
{
	Connection* returnVal = nullptr;
	for_each(m_VecConnections.begin(), m_VecConnections.end(), [&](Connection* connection) {
		if (connection->GetOtherNodeId(m_NodeId) == otherNodeId)
		{
			returnVal = connection;
			return;
		}

	});
	return returnVal;
}

void Node::RemoveWorldOjectById(const string& id)
{
	m_VecWorldObjects.erase(std::remove_if(m_VecWorldObjects.begin(), m_VecWorldObjects.end(), [&](WorldObject* obj) {
		return obj->GetObjectId() == id;
	}), m_VecWorldObjects.end());
}

void Node::RemoveWorldOjectByName(const string& name)
{
	m_VecWorldObjects.erase(std::remove_if(m_VecWorldObjects.begin(), m_VecWorldObjects.end(), [&](WorldObject* obj) {
		return obj->GetObjectName() == name;
	}), m_VecWorldObjects.end());
}

WorldObject * Node::GetObjectByName(const string& name) const
{
	WorldObject* selectedObject = nullptr;
	for each (WorldObject* object in m_VecWorldObjects)
	{
		if (object->GetObjectName() == name) {
			selectedObject = object;
			break;
		}
	}
	return selectedObject;
}
