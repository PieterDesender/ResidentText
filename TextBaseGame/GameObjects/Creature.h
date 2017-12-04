#pragma once
#include "../Enumeration.h"
#include"GameObject.h"

class GameObject;

class Creature : public GameObject
{
public:
	Creature(Node* startNode, int maxHealth);
	~Creature() {};

	void Tick(float dTime);

	CreatureState GetCreatureState() const { return m_State; }
	void SetCreatureState(CreatureState state);

private:
	CreatureState m_State;

	bool m_NewState = true;

	void StateWaiting(float dTime);
	float m_WaitTimer = 0.0f;

	void StateSleeping(float dTime);
	float m_SleepTimer = 0.0f;

	void StateMoving(float dTime);

	void StateDefeated(float dTime);

	void StateDamaged(float dTime);
	float m_DamagedTimer = 0.0f;
};
