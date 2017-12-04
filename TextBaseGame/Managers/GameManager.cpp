#include "GameManager.h"

GameManager::GameManager()
{}

GameManager::~GameManager()
{
	for each (Creature* creature in m_VecCreatures)
	{
		delete creature;
	}
	m_VecCreatures.clear();

	delete m_pPlayer;
	m_pPlayer = nullptr;
}

void GameManager::DeleteCreature(Creature * pCreature)
{
	for (auto it = m_VecCreatures.begin(); it != m_VecCreatures.end(); ) {
		if ((*it) == pCreature) {
			delete * it;
			it = m_VecCreatures.erase(it);
		}
		else {
			++it;
		}
	}
}