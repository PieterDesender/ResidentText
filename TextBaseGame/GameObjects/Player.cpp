#include "Player.h"

//#include "../World/WorldObject.h"
#include "../World/Node.h"
#include "../Items/Inventory.h"

Player::Player(Node * startNode, int maxHealth) : GameObject(startNode, maxHealth)
{
	m_pInventory = new Inventory(m_InventoryWeightMax, true);
}

Player::~Player()
{
	delete m_pInventory;
	m_pInventory = nullptr;
}