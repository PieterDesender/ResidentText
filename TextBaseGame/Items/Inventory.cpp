#include "Inventory.h"

Inventory::Inventory(int maxInventoryWeight, bool weightDependant) :
	m_MaxInventoryWeight(maxInventoryWeight), m_WeightDependant(weightDependant)
{
	map<string, Item*>mapItems = ItemManager::GetInstance()->GetItemMap();
	for_each(mapItems.begin(), mapItems.end(), [&](pair<string, Item*> itemPair) {
		ItemPtrAmount itemAmount;
		itemAmount.m_Amount = 0;
		itemAmount.m_pItem = itemPair.second;
		m_MapInventory[itemPair.first] = itemAmount;
	});
}

Inventory::~Inventory()
{
	m_MapInventory.clear();
}

bool Inventory::ReduceItem(string itemId, int amount)
{
	ItemPtrAmount pair = m_MapInventory[itemId];
	if (pair.m_Amount - amount < 0)
		return false;

	pair.m_Amount -= amount;
	m_CurrentItemCount -= amount;
	m_MapInventory[itemId] = pair;

	if (m_WeightDependant)
		CalculateWeight();

	return true;
}

bool Inventory::AddItem(string itemId, int amount)
{
	if (m_WeightDependant) {
		int itemWeight = ItemManager::GetInstance()->GetItem(itemId)->GetItemWeight();

		if ((m_CurrentInventoryWeight + itemWeight*amount) > m_MaxInventoryWeight)
			return false;
	}

	ItemPtrAmount pair = m_MapInventory[itemId];
	pair.m_Amount += amount;
	m_CurrentItemCount += amount;
	m_MapInventory[itemId] = pair;

	if (m_WeightDependant)
		CalculateWeight();

	return true;
}

bool Inventory::IsAbleToAddWeight(int itemWeight) const
{
	return  m_CurrentInventoryWeight + itemWeight <= m_MaxInventoryWeight;
}

void Inventory::CalculateWeight()
{
	int tempWeight = 0;
	for_each(m_MapInventory.begin(), m_MapInventory.end(), [&](pair<string, ItemPtrAmount> pair) {
		if (pair.second.m_Amount > 0) {
			tempWeight += pair.second.m_pItem->GetItemWeight() * pair.second.m_Amount;
		}
	});
	m_CurrentInventoryWeight = tempWeight;
}