#pragma once

#include "../Managers/GameManager.h"

#include "../World/Node.h"

namespace EventConditons {
	inline bool ExaminedWindowFrontPorch() {
		Player* pPlayer = GameManager::GetInstance()->GetPlayer();
		WorldObject* obj = pPlayer->GetLastExaminedWorldObject();
		if (obj == nullptr)
			return false;
		if (obj->GetObjectId() == "windowfrontporch")
			return true;
		return false;
	}

	inline bool EnteredKitchen() {
		Player* pPlayer = GameManager::GetInstance()->GetPlayer();
		if (pPlayer->GetCurrentNode()->GetNodeId() == "kitchen")
			return true;
		return false;
	}

	inline bool EnteredHallwaySouthFirst() {
		Player* pPlayer = GameManager::GetInstance()->GetPlayer();
		if (pPlayer->GetCurrentNode()->GetNodeId() == "hallwaysouth")
			return true;
		return false;
	}

	inline bool SearchedLivingRoomTable() {
		Player* pPlayer = GameManager::GetInstance()->GetPlayer();
		if (pPlayer->GetLastSearchedWorldObject() == nullptr)
			return false;
		if (pPlayer->GetLastSearchedWorldObject()->GetObjectId() == "livingroomtable")
			return true;
		return false;
	}

	inline bool SearchedHiddenPainting() {
		Player* pPlayer = GameManager::GetInstance()->GetPlayer();
		if (pPlayer->GetLastSearchedWorldObject() == nullptr)
			return false;
		if (pPlayer->GetLastSearchedWorldObject()->GetObjectId() == "hiddenpainting")
			return true;
		return false;
	}

	inline bool SearchedGarageBag() {
		Player* pPlayer = GameManager::GetInstance()->GetPlayer();
		if (pPlayer->GetLastSearchedWorldObject() == nullptr)
			return false;
		if (pPlayer->GetLastSearchedWorldObject()->GetObjectId() == "hangingbaggarage")
			return true;
		return false;
	}

	inline bool SearchedBookCase() {
		Player* pPlayer = GameManager::GetInstance()->GetPlayer();
		if (pPlayer->GetLastSearchedWorldObject() == nullptr)
			return false;
		if (pPlayer->GetLastSearchedWorldObject()->GetObjectId() == "bookcase")
			return true;
		return false;
	}

	inline bool SearchedComputer() {
		Player* pPlayer = GameManager::GetInstance()->GetPlayer();
		if (pPlayer->GetLastSearchedWorldObject() == nullptr)
			return false;
		if (pPlayer->GetLastSearchedWorldObject()->GetObjectId() == "computer")
			return true;
		return false;
	}

	inline bool SearchedBathtub() {
		Player* pPlayer = GameManager::GetInstance()->GetPlayer();
		if (pPlayer->GetLastSearchedWorldObject() == nullptr)
			return false;
		if (pPlayer->GetLastSearchedWorldObject()->GetObjectId() == "bathtub")
			return true;
		return false;
	}

	inline bool EnteredBackjard() {
		Player* pPlayer = GameManager::GetInstance()->GetPlayer();
		if (pPlayer->GetCurrentNode()->GetNodeId() == "backjard")
			return true;
		return false;
	}
}
