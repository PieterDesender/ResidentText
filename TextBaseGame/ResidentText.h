#pragma once

#include <atomic>
//#include <tchar.h>
//#include <string>
//#include <stdio.h>
//#include <iostream>
#include <thread>
//#include <algorithm>
#include <windows.h>
//#include <time.h>
//#include <stdlib.h>
//#include <chrono>

#include "Enumeration.h"

#include "GameObjects/Player.h"
#include "GameObjects/Creature.h"

//#include "Managers/NodeManager.h"
#include "Managers/ConnectionManager.h"
//#include "Managers/ItemManager.h"
//#include "Managers/InteractionsManager.h"
//#include "Managers/GameManager.h"
//#include "Managers/WorldObjectManager.h"
//#include "Managers/EventManager.h"

using namespace std;

class ResidentText
{
public:
	ResidentText(const int windowWidth, const int windowHeight);
	~ResidentText();

	void GameLoop();
private:
	/************* FUNCTION SIGNATURES **************/
	void GameInitialise(bool restart = false);
	void GameRunning();
	void GameEnd();
	void GamePause();
	void GameIntro();
	void GameHelp();
	void GameEncounter();
	void GameOutro();
	void GameDefeated();
	void GameRestart();

	void CheckPause();
	void CheckQuit();
	void CheckHelp();

	void GetInput();

	void SetGameState(GameState state);

	void CreateInputThread();
	void ReadCin(atomic<bool>& run, atomic<char*>& buffer, atomic<bool>& start);
	void CreateObjects();

	void DrawTitle();
	void DrawLine(const int &lineWidth);

	void ResetUserInput();

	void CalculateDeltaTime();

	void InitialiseError(string error);

	void EncounterRun() const;
	void EncounterFight();

	/************* GLOBAL VARIABLES **************/
	GameState m_GameState = GameState::INITIALISE;

	thread m_CinThread;

	atomic<bool> m_AGameRun;
	atomic<bool> m_AGameStart;
	atomic<char*> m_CinBuffer;

	string m_UserInput = "";

	bool m_CapDTime = true;
	float m_CapDTimeValue = 0.016f;
	DWORD m_TimeCurrent = 0;
	DWORD m_TimePrevious = 0;
	float m_DTime = 0;
	DWORD m_coutDelay = 10;

	int m_WindowWidth = 0;
	int m_WindowHeight = 0;

	string m_AssatFileWorld = "Resources/World.w";
	string m_AssatFileItems = "Resources/Items.w";
	string m_AssatFileWorldObjects = "Resources/WorldObjects.w";

	Player* m_pPlayer;
	Creature* m_pEncounteredCreature = nullptr;;
};
