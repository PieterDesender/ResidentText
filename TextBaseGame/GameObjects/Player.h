#pragma once

#include "GameObject.h"

class Node;
class WorldObject;
class Inventory;

class Player : public GameObject
{
public:
	Player(Node* startNode, int maxHealth);
	~Player();

	Inventory* GetInventory() const { return m_pInventory; }

	WorldObject* GetLastSearchedWorldObject() const { return m_pLastSearchedWorldObject; }
	void SetLastSearchedWorldObject(WorldObject* object) { m_pLastSearchedWorldObject = object; }

	WorldObject* GetLastExaminedWorldObject() const { return m_pLastExaminedWorldObject; }
	void SetLastExaminedWorldObject(WorldObject* object) { m_pLastExaminedWorldObject = object; }

private:

	WorldObject* m_pLastSearchedWorldObject = nullptr;
	WorldObject* m_pLastExaminedWorldObject = nullptr;

	int m_InventoryWeightMax = 50;
	Inventory* m_pInventory;
};
