#include "Creature.h"

#include <iostream>

#include "../Helpers.h"
#include "../World/Node.h"
#include "../Enumeration.h"
#include"GameObject.h"
#include "../World/Connection.h"

using namespace std;

Creature::Creature(Node* startNode, int maxHealth) : GameObject(startNode, maxHealth),
m_State(CreatureState::WAITING)
{}

void Creature::Tick(float dTime)
{
	switch (m_State)
	{
	case CreatureState::WAITING:
		StateWaiting(dTime);
		break;
	case CreatureState::SLEEPING:
		StateSleeping(dTime);
		break;
	case CreatureState::MOVING:
		StateMoving(dTime);
		break;
	case CreatureState::DEFEATED:
		StateDefeated(dTime);
		break;
	case CreatureState::DAMAGED:
		StateDamaged(dTime);
		break;
	default:
		break;
	}
}

void Creature::SetCreatureState(CreatureState state)
{
	m_NewState = true;
	m_State = state;
}

void Creature::StateWaiting(float dTime)
{
	if (m_NewState) {
		m_NewState = false;
		m_WaitTimer = GetRandomFloat(45.0f, 60.0f);
		//cout << "\ncreature waiting for " << m_WaitTimer;
	}

	m_WaitTimer -= dTime;
	if (m_WaitTimer <= 0) {
		SetCreatureState(CreatureState::MOVING);
		//cout << "\nCreature done waiting.";
	}
}

void Creature::StateSleeping(float dTime)
{
	if (m_NewState) {
		m_NewState = false;
		m_SleepTimer = GetRandomFloat(80.0f, 120.0f);
		//cout << "\ncreature sleeping for " << m_SleepTimer;
	}

	m_SleepTimer -= dTime;
	if (m_SleepTimer <= 0) {
		SetCreatureState(CreatureState::MOVING);
		//cout << "\nCreature done sleeping.";
	}
}

void Creature::StateMoving(float dTime)
{
	if (m_NewState) {
		m_NewState = false;
	}

	if (!AnyConnectionOpen()) {
		SetCreatureState(CreatureState::WAITING);
		return;
	}

	string otherNodeId;
	vector<Connection*> vecConnections = m_CurrentNode->GetConnections();
	do {
		int randomInt = GetRandomInt(0, vecConnections.size() - 1);
		Connection* randomConnection = vecConnections[randomInt];

		otherNodeId = randomConnection->GetOtherNodeId(m_CurrentNode->GetNodeId());
	} while (!MoveToNode(otherNodeId, false));

	SetCreatureState(CreatureState::WAITING);
}

void Creature::StateDefeated(float dTime)
{
	if (m_NewState) {
		m_NewState = false;
	}
}

void Creature::StateDamaged(float dTime)
{
	if (m_NewState) {
		m_NewState = false;
		m_DamagedTimer = GetRandomFloat(100.0f, 140.0f);
	}

	m_DamagedTimer -= dTime;
	if (m_WaitTimer <= 0) {
		SetCreatureState(CreatureState::WAITING);
	}
}