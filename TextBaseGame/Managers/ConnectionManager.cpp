#include "ConnectionManager.h"

using namespace std;

ConnectionManager::~ConnectionManager()
{
	for each (Connection* connection in m_VecConnections)
	{
		delete connection;
	}
	m_VecConnections.clear();
}

Connection* ConnectionManager::AddConnection(string nodeId1, string nodeId2, bool connectionStatus, string keyId)
{
	Connection* currentConnection = new Connection(nodeId1, nodeId2, connectionStatus, keyId);
	m_VecConnections.push_back(currentConnection);

	Node* node = NodeManager::GetInstance()->GetNode(nodeId1);
	node->AddConnection(currentConnection);

	node = NodeManager::GetInstance()->GetNode(nodeId2);
	node->AddConnection(currentConnection);

	currentConnection = nullptr;

	return m_VecConnections[m_VecConnections.size() - 1];
}