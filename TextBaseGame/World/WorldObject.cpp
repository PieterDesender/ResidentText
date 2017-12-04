#include "WorldObject.h"

#include"../Items/Inventory.h"

WorldObject::WorldObject(string ObjectId) : 
	m_ObjectId(ObjectId)
{
	m_pInventory = new Inventory();
}

WorldObject::~WorldObject()
{
	delete m_pInventory;
	m_pInventory = nullptr;
}