#include "GameObject.h"

GameObject::GameObject(Node* startNode, int maxHealth) : m_CurrentNode(startNode), m_HealthMax(maxHealth)
{
	m_Health = m_HealthMax;
}

GameObject::~GameObject()
{
	m_CurrentNode = nullptr;
}

bool GameObject::MoveToNode(string nodeId, bool output)
{
	auto connection = m_CurrentNode->ConnectionWithNode(nodeId);
	if (connection == nullptr) {
		if (output)cout << "\nThere is no door to " << nodeId << ".";
		return false;
	}

	bool connectionStatus = connection->GetConnectionStatus();
	if (!connectionStatus) {
		if (output)cout << "\nThe door leading to " << nodeId << " is closed.";
		return false;
	}

	m_CurrentNode = NodeManager::GetInstance()->GetNode(nodeId);

	return true;
}

bool GameObject::AnyConnectionOpen()
{
	vector<Connection*> connections = m_CurrentNode->GetConnections();

	bool openConnection = false;

	for_each(connections.begin(), connections.end(), [&](Connection* connection) {
		if (connection->GetConnectionStatus()) {
			openConnection = true;
			return;
		}
	});

	return openConnection;
}

void GameObject::AddHealth(float amount)
{
	m_Health += amount;
	if (m_Health > m_HealthMax)
		m_Health = m_HealthMax;
}