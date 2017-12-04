#pragma once

#include"../GameObjects/Player.h"
#include"../GameObjects/Creature.h"

#include"../Singleton.h"

#include<vector>

using namespace std;

class GameManager : public Singleton<GameManager>
{
public:
	void SetPlayer(Player* pPlayer) { m_pPlayer = pPlayer; }
	Player* GetPlayer() const { return m_pPlayer; }

	void AddCreature(Creature* pCreature) { m_VecCreatures.push_back(pCreature); }
	vector<Creature*> GetCreatures() const { return m_VecCreatures; }

	void DeleteCreature(Creature* pCreature);

	void SetEndGame(bool value = true) { m_EndGame = value; }
	bool GetEndGame() const { return m_EndGame; }

private:
	Player* m_pPlayer = nullptr;
	vector<Creature*> m_VecCreatures;

	bool m_EndGame = false;

	friend class Singleton<GameManager>;
	GameManager();
	~GameManager();
};