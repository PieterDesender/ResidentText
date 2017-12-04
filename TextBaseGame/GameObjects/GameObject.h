#pragma once

#include "../World/Node.h"
#include "../Managers/NodeManager.h"
//#include "../World/Connection.h"

//#include<string>
//#include<iostream>

using namespace std;

class GameObject
{
public:
	GameObject(Node* startNode, int maxHealth);
	~GameObject();

	bool MoveToNode(string nodeId, bool output = true);
	Node* GetCurrentNode() const { return m_CurrentNode; }

	float GetMaxHealth() const { return m_HealthMax; }
	void SetMaxHealth(float amount) { m_HealthMax = amount; }

	float GetHealth() const { return m_Health; }
	void SetHealth(float amount) { m_Health = amount; }

	void ReduceHealth(float amount) { m_Health -= amount; }
	void AddHealth(float amount);

protected:
	Node* m_CurrentNode = nullptr;

	float m_HealthMax = 100;
	float m_Health;

	bool AnyConnectionOpen();
};
