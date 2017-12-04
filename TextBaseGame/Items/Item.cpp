#include"Item.h"

bool Item::UseItem() const
{
	switch (m_ItemType)
	{
	case ItemType::NOTYPE:
		cout << "\nI Don't have a use for this at the moment.";
		return false;
	case ItemType::GREENHERB:
		UseGreenHerb();
		return true;
	case ItemType::REDHERB:
		UseRedHerb();
		return true;
	case ItemType::KEY:
		cout << "\nThis is a key. I need to find the door it fits.";
		return false;
	default:
		cout << "\nI Don't have a use for this at the moment.";
		return false;
	}
}

void Item::UseRedHerb() const
{
	Player* pPlayer = GameManager::GetInstance()->GetPlayer();
	pPlayer->SetMaxHealth(pPlayer->GetMaxHealth() + m_RedHerbAmount);
	pPlayer->AddHealth(m_RedHerbAmount);
}

void Item::UseGreenHerb() const
{
	GameManager::GetInstance()->GetPlayer()->AddHealth(m_GreenHerbAmount);
}

void Item::UseYellowHerb() const
{
	Player* pPlayer = GameManager::GetInstance()->GetPlayer();
	pPlayer->SetHealth(pPlayer->GetMaxHealth());
}