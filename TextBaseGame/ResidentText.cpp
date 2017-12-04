#include "ResidentText.h"
#include "Helpers.h"
#include "Managers/ItemManager.h"
#include "Managers/InteractionsManager.h"
#include "Managers/WorldObjectManager.h"
#include "Managers/EventManager.h"
#include "Items/Inventory.h"

ResidentText::ResidentText(const int windowWidth, const int windowHeight) :
	m_WindowHeight(windowHeight),
	m_WindowWidth(windowWidth),
	m_AGameRun(true),
	m_CinBuffer(""),
	m_AGameStart(false),
	m_pPlayer(nullptr)
{
	srand(static_cast <unsigned> (time(nullptr)));
}

ResidentText::~ResidentText()
{
	GameEnd();
}
/************************************************** GAME LOOP **********************************************************/
void ResidentText::GameLoop() {
	while (m_GameState != GameState::QUIT)
	{
		switch (m_GameState)
		{
		case GameState::INITIALISE:
			GameInitialise();
			SetGameState(GameState::INTRO);
			break;
		case GameState::INTRO:
			GameIntro();
			m_AGameStart.store(true);
			SetGameState(GameState::RUNNING);
			break;
		case GameState::RUNNING:
			CalculateDeltaTime();
			GetInput();
			CheckPause();
			CheckQuit();
			CheckHelp();
			GameRunning();
			break;
		case GameState::PAUSE:
			GamePause();
			break;
		case GameState::HELP:
			GameHelp();
			break;
		case GameState::OUTRO:
			GameOutro();
			SetGameState(GameState::END);
			break;
		case GameState::ENCOUNTER:
			GameEncounter();
			break;
		case GameState::DEFEATED:
			GameDefeated();
			break;
		case GameState::END:
			GameEnd();
			m_GameState = GameState::QUIT;
			break;
		case GameState::RESTART:
			GameRestart();
			break;
		case GameState::QUIT: break;

		default:
			break;
		}
	}
}
/************************************************** GAME RUNS **********************************************************/
/*INITIALISE*/
/************/
void ResidentText::GameInitialise(bool restart)
{
	cout << "\nGame Initialisation ...";
	InitialiseState initState = InitialiseState::NODESTOVECTOR;

	ConnectionManager::GetInstance();
	ItemManager::GetInstance();
	NodeManager::GetInstance();
	GameManager::GetInstance();
	InteractionsManager::GetInstance();
	WorldObjectManager::GetInstance();
	EventManager::GetInstance();

	bool result = false;
	while (initState != InitialiseState::INITIALISEDONE)
	{
		switch (initState)
		{
		case InitialiseState::NODESTOVECTOR:
			result = ItemManager::GetInstance()->SetItemsToMap(m_AssatFileItems);
			if (!result) {
				InitialiseError("\nFAILED: [SetItemsToMap]");
				initState = InitialiseState::INITIALISEFAILED;
				break;
			}
			result = WorldObjectManager::GetInstance()->SetWorldObjectsToMap(m_AssatFileWorldObjects);
			if (!result) {
				InitialiseError("\nFAILED: [SetWorldObjectsToMap]");
				initState = InitialiseState::INITIALISEFAILED;
				break;
			}
			result = NodeManager::GetInstance()->SetNodesToMap(m_AssatFileWorld);
			if (!result) {
				InitialiseError("\nFAILED: [SetNodesToMap]");
				initState = InitialiseState::INITIALISEFAILED;
				break;
			}
			result = EventManager::GetInstance()->AddEvents();
			if (!result) {
				InitialiseError("\nFAILED: [AddEvents]");
				initState = InitialiseState::INITIALISEFAILED;
				break;
			}
			cout << "\n\tWorld created";
			if (!restart)
				initState = InitialiseState::CREATECINTHREAD;
			else
				initState = InitialiseState::CREATEOBJECTS;
			break;
		case InitialiseState::CREATECINTHREAD:
			CreateInputThread();
			cout << "\n\tCin thread created";
			initState = InitialiseState::CREATEOBJECTS;
			break;
		case InitialiseState::CREATEOBJECTS:
			CreateObjects();
			cout << "\nObjects Created";
			initState = InitialiseState::INITIALISECOMPLETE;
			break;
		case InitialiseState::INITIALISECOMPLETE:
			SetGameState(GameState::RUNNING);
			initState = InitialiseState::INITIALISEDONE;
			cout << "\nInitialisation completed";
			system("cls");
			break;
		case InitialiseState::INITIALISEFAILED:
			SetGameState(GameState::END);
			initState = InitialiseState::INITIALISEDONE;
			cout << "\nInitialisation FAILED!!!\n\n\n";
			break;
		default:
			break;
		}
	}
}
/*INTRO*/
/*******/
void ResidentText::GameIntro()
{
	system("cls");
	DrawLine(m_WindowWidth);
	cout << R"(
			  ___		 ____________		 ______              _            _   _
			 / _ \		 | ___ \  _  \		 | ___ \            | |          | | (_)
			/ /_\ \		 | |_/ / | | |		 | |_/ / __ ___   __| |_   _  ___| |_ _  ___  _ __
			|  _  |		 |  __/| | | |		 |  __/ '__/ _ \ / _` | | | |/ __| __| |/ _ \| '_ \
			| | | |		 | |   | |/ /		 | |  | | | (_) | (_| | |_| | (__| |_| | (_) | | | |
			\_| |_/		 \_|   |___/		 \_|  |_|  \___/ \__,_|\__,_|\___|\__|_|\___/|_| |_|
	)";
	DrawLine(m_WindowWidth);
	Sleep(3000);
	system("cls");
	DelayPrint("\n6 Years has passed since that fatefull day.\nSince the viral outbreak that has cost the lives of thousands of people.");
	DelayPrint("\nThe virus that caused that nightmare was a manmade bioweapon.\n It killed every living person that came in contact with it.");
	DelayPrint("\nProblem was,");
	Sleep(1000);
	DelayPrint("They did not stay dead.\nThe virus reanimated the dead cells of its victims and turned them in mindless monsters.");
	Sleep(1000);
	DelayPrint("\nThe local armed forces and the companies private elite taskforce that made the virus tried to contain the zombi threat.\n They failed.");
	DelayPrint("\nThe only option remaining to the government was total sanitation of the city.");
	DelayPrint("\nA bomb was dropped to completly level the city and destroy any evidance of the virus.");
	DelayPrint("\nInstead of disclosing the incident to the people they covered it up as a malfunction of the a nuclear powerplant near the city.");
	Sleep(1000);
	DelayPrint("\nI was there when it all happend, I was a rookie cop assigned to the: Special Tactics And Rescue Squades or STARS.");
	DelayPrint("\nIt was my first day on the job when the knightmare started, Huh some day first.");
	Sleep(1000);
	DelayPrint("\nBut I was able to escape the city with one other surviver, Claire.\nAfter the knightmare we both started working for an anti bioweapon NGO called \"CounterViral\".");
	Sleep(1000);
	DelayPrint("2 years have passed and I find myself in an uncivilised part of the country following Claire.\nShe was investigating desturbing rumors of a new type of bioweapon being tested in the region.");
	Sleep(1000);
	DelayPrint("\nBut that was 2 months ago and she never reported back.\nI find myself worrying and started my own investigation in what happend to her and this unknown type of bioweapon.");
	DelayPrint("\nI start my investigation at her last known location, at a mansion owned by the Baker family.");
	Sleep(1000);
	DelayPrint("\n\t\t\t\t\tAgain the knightmare begins.");
	cin.get();
	system("cls");
	DrawLine(m_WindowWidth + 50);
	DrawTitle();
	DrawLine(m_WindowWidth + 50);
	cin.get();
	system("cls");
	DelayPrint("type \"help\" to activate the help page.");
	DelayPrint("\ntype \"pause\" to activate the pause page.");
	DelayPrint("\ntype \"quit\" to quit the game.");
	DrawLine(m_WindowWidth);
	DelayPrint("\n\nPress Enter to continue.");
	cin.get();
	system("cls");
}
/*HELP*/
/******/
void ResidentText::GameHelp()
{
	system("cls");
	DrawTitle();
	DrawLine(m_WindowWidth);
	cout << "\n*********************Game Help*********************";
	cout << "\n\n--------->Player Interactions";
	cout << "\n\nMove: \"m\" or \"move to\" or \"go to\" & \"placename\".";
	cout << "\n\nLook: \"l\" or \"look\".";
	cout << "\n\nExamine object: \"e\" or \"look at\" or \"examine\" & \"objectname\".";
	cout << "\n\nExamine door: \"e\" or \"look at\" or \"examine\" & \"d\" or \"d\" & \"placename\".";
	cout << "\n\nSearch object: \"s\" or \"search\" & \"objectname\".";
	cout << "\n\nInventory show: \"inv\" or \"i\" or \"inventory\".";
	cout << "\n\nInventory examine: \"inv\" or \"i\" or \"inventory\" & \"e\" or \"look at\" or \"examine\" & \"objectname\".";
	cout << "\n\nPickup item: \"pickup\" or \"take\" or \"p\" & \"itemname\".";
	cout << "\n\t->This will pickup from the last searched object in the room.";
	cout << "\n\nDrop item: \"drop\" or \"dr\" & \"itemname\".";
	cout << "\n\nUse item: \"use\" or \"u\" & \"itemname\".";
	cout << "\n\nStatus player: \"st\" or \"status\".";
	cout << "\n\nuse key: \"uk\" or \"use key\" & \"keyname\".";
	cout << "\n\n\n\n";
	DrawLine(m_WindowWidth);
	cout << "\n\n\nPress enter to continue";
	cin.get();
	system("cls");
	SetGameState(GameState::RUNNING);
	m_AGameStart.store(true);
}
/*ENCOUNTER*/
/***********/
void ResidentText::GameEncounter()
{
	system("cls");
	DelayPrint("\nI have encountered a monster a monster in the " + m_pPlayer->GetCurrentNode()->GetNodeId() + ".");
	DelayPrint("\nI need to decide what to do. Killing it a possibility if I have the ammo.");
	DelayPrint("\nI could also try to run, but if it catches me I clould be in trouble.");
	DelayPrint("\nAmmo: " + to_string(m_pPlayer->GetInventory()->GetItemPair("bullet").m_Amount) + " bullets.");
	DelayPrint("\nWhat should I do (run or fight)");
	string input;

	bool goodInput = false;
	do {
		getline(std::cin, input);
		transform(input.begin(), input.end(), input.begin(), ::tolower);
		if (input == "run" || input == "fight")
			goodInput = true;
		else
			DelayPrint("\nUnknown command.");
	} while (!goodInput);

	if (input == "run")
		EncounterRun();
	else
		EncounterFight();

	SetGameState(GameState::RUNNING);
}
/*OUTRO*/
/*******/
void ResidentText::GameOutro()
{
	system("cls");
	DrawLine(m_WindowWidth + 50);
	DrawTitle();
	DrawLine(m_WindowWidth + 50);
	Sleep(5000);
	system("cls");
	DelayPrint("\nThe knightmare will continue in the future.");
	Sleep(2000);
	DelayPrint("\nMaybe");
}
/*DEFEATED*/
/**********/
void ResidentText::GameDefeated()
{
	system("cls");
	DrawLine(m_WindowWidth);
	cout << R"(
				  _______             ______  _________ _______  ______
			|\     /|(  ___  )|\     /|  (  __  \ \__   __/(  ____ \(  __  \
			( \   / )| (   ) || )   ( |  | (  \  )   ) (   | (    \/| (  \  )
			 \ (_) / | |   | || |   | |  | |   ) |   | |   | (__    | |   ) |
			  \   /  | |   | || |   | |  | |   | |   | |   |  __)   | |   | |
			   ) (   | |   | || |   | |  | |   ) |   | |   | (      | |   ) |
			   | |   | (___) || (___) |  | (__/  )___) (___| (____/\| (__/  )
			   \_/   (_______)(_______)  (______/ \_______/(_______/(______/
	)";
	DrawLine(m_WindowWidth);
	DelayPrint("\n\t\t\t\t\tPress Enter to continue.");
	cin.get();

	system("cls");

	DelayPrint("\nDo you want to try to face the knighmare again (y/n)");
	string input;

	bool goodInput = false;
	do {
		getline(std::cin, input);
		transform(input.begin(), input.end(), input.begin(), ::tolower);
		if (input.find("y") != string::npos || input.find("n") != string::npos)
			goodInput = true;
		else
			DelayPrint("\nUnknown command.");
	} while (!goodInput);

	if (input.find("y") != string::npos)
		SetGameState(GameState::RESTART);
	else
		SetGameState(GameState::END);
}
/*RUNNING*/
/*********/
void ResidentText::GameRunning()
{
	if (m_UserInput != "") {
		InteractionsManager::GetInstance()->Interaction(m_UserInput);
		ResetUserInput();
	}

	vector<Creature*> vecCreatures = GameManager::GetInstance()->GetCreatures();
	for_each(vecCreatures.begin(), vecCreatures.end(), [&](Creature* creature) {
		if (creature != nullptr) {
			creature->Tick(m_DTime);
			if (creature->GetCreatureState() != CreatureState::DAMAGED ||
				creature->GetCreatureState() != CreatureState::DEFEATED ||
				creature->GetCreatureState() != CreatureState::SLEEPING) {
				if (creature->GetCurrentNode()->GetNodeId() == m_pPlayer->GetCurrentNode()->GetNodeId()) {
					SetGameState(GameState::ENCOUNTER);
					m_pEncounteredCreature = creature;
				}
			}
		}
	});

	if (m_pPlayer->GetHealth() <= 0)
		SetGameState(GameState::DEFEATED);

	EventManager::GetInstance()->CheckAndRunEvents();

	if (GameManager::GetInstance()->GetEndGame())
		SetGameState(GameState::OUTRO);
}
/*GAME END*/
/**********/
void ResidentText::GameEnd()
{
	if (m_CinThread.joinable()) {
		//cout << "\nThread Joined";
		m_CinThread.join();
	}
	else {
		//cout << "\nERROR: Thread \"m_CinThread\" NOT Joined";
	}

	NodeManager::destroy();
	ConnectionManager::destroy();
	ItemManager::destroy();
	InteractionsManager::destroy();
	GameManager::destroy();
	WorldObjectManager::destroy();
	EventManager::destroy();
}
/*GAME PAUSE*/
/************/
void ResidentText::GamePause()
{
	system("cls");
	DrawTitle();
	DrawLine(m_WindowWidth);
	cout << "\n*********************Game Pause*********************";
	cout << "\n\n--------->Player status";
	cout << "\n\n-->Player status";
	cout << "\nHealth: " + to_string(int(m_pPlayer->GetHealth())) + " / " + to_string(int(m_pPlayer->GetMaxHealth()));
	cout << "\nCurrent location: " + m_pPlayer->GetCurrentNode()->GetNodeId();
	cout << "\nInventory : " + to_string(m_pPlayer->GetInventory()->GetInventoryWeight()) + " / " + to_string(m_pPlayer->GetInventory()->GetMaxInventoryWeight());
	Inventory* pInventory = GameManager::GetInstance()->GetPlayer()->GetInventory();
	map<string, ItemPtrAmount> itemMap = pInventory->GetItemMap();
	vector<string> vecItemId;
	for_each(itemMap.begin(), itemMap.end(), [&](pair <string, ItemPtrAmount> item) {
		if (item.second.m_Amount > 0)
			vecItemId.push_back(item.second.m_pItem->GetItemId());
	});

	if (vecItemId.size() != 0) {
		for_each(vecItemId.begin(), vecItemId.end(), [&](string itemId) {
			Item* item = ItemManager::GetInstance()->GetItem(itemId);
			cout << "\n-> ";
			if (itemMap[itemId].m_Amount > 1)
				cout << itemMap[itemId].m_Amount << " ";
			cout << item->GetItemId() << " : " << item->GetItemWeight()*itemMap[itemId].m_Amount;
		});
	}
	cout << "\n\n\n";
	DrawLine(m_WindowWidth);
	cout << "\n\n\nPress enter to continue";
	cin.get();
	system("cls");
	SetGameState(GameState::RUNNING);
	m_AGameStart.store(true);
}
/*GAME RESTART*/
/**************/
void ResidentText::GameRestart()
{
	NodeManager::destroy();
	ConnectionManager::destroy();
	ItemManager::destroy();
	InteractionsManager::destroy();
	GameManager::destroy();
	WorldObjectManager::destroy();
	EventManager::destroy();

	GameInitialise(true);
}
/************************************************** EXTRA GAME FUNCTIONS **********************************************************/
void ResidentText::CheckPause() {
	if (m_UserInput != "pause")
		return;
	SetGameState(GameState::PAUSE);
	m_AGameStart.store(false);
	ResetUserInput();
}
void ResidentText::CheckQuit() {
	if (m_UserInput == "quit") {
		SetGameState(GameState::END);
		ResetUserInput();
	}
}
void ResidentText::CheckHelp()
{
	if (m_UserInput != "help")
		return;
	SetGameState(GameState::HELP);
	m_AGameStart.store(false);
	ResetUserInput();
}
void ResidentText::SetGameState(GameState state) {
	if (state == GameState::END) m_AGameRun.store(false);
	else m_AGameRun.store(true);
	m_GameState = state;
}
void ResidentText::GetInput() {
	m_UserInput = string(m_CinBuffer.load());
	transform(m_UserInput.begin(), m_UserInput.end(), m_UserInput.begin(), ::tolower);
}
void ResidentText::ResetUserInput() {
	m_UserInput = "";
	m_CinBuffer.store("");
}
void ResidentText::InitialiseError(string error) {
	SetGameState(GameState::END);
	cout << error << "\n";
}
void ResidentText::EncounterRun() const
{
	DelayPrint("\nI try to run.");
	int d = GetRandomInt(0, 3);
	if (d == 0) {
		DelayPrint("\nI got away safely.");
	}
	else
	{
		DelayPrint("\nIt got me, but I still got awey.");
		m_pPlayer->ReduceHealth(10 * d);
	}

	string otherNodeId;
	vector<Connection*> vecConnections = m_pPlayer->GetCurrentNode()->GetConnections();
	do {
		int randomInt = GetRandomInt(0, vecConnections.size() - 1);
		Connection* randomConnection = vecConnections[randomInt];

		otherNodeId = randomConnection->GetOtherNodeId(m_pPlayer->GetCurrentNode()->GetNodeId());
	} while (!m_pPlayer->MoveToNode(otherNodeId));
	DelayPrint("\nI have fled to the " + otherNodeId + ".");
	m_pEncounteredCreature->SetCreatureState(CreatureState::SLEEPING);
}
void ResidentText::EncounterFight()
{
	int ammo = m_pPlayer->GetInventory()->GetItemPair("bullet").m_Amount;
	int ammoOrig = ammo;
	int damageAmount = 0;
	while (ammo > 0 && m_pEncounteredCreature->GetHealth() > 0)
	{
		int d = GetRandomInt(0, 2);
		if (d == 0) {
			m_pEncounteredCreature->ReduceHealth(30);
			damageAmount += 30;
		}
		else {
			m_pEncounteredCreature->ReduceHealth(15);
			damageAmount += 15;
		}
		ammo--;
	}
	if (ammo == 0)
	{
		DelayPrint("\nDamn, I'm out of ammo. Time to run.");
		if (damageAmount >= m_pEncounteredCreature->GetMaxHealth() / 2)
		{
			DelayPrint("\nHuh it's not chasing me, geuss I hurt it somehow.");
			m_pEncounteredCreature->SetCreatureState(CreatureState::DAMAGED);
		}
		else
		{
			DelayPrint("\nI hope it won't chase me.");
			m_pEncounteredCreature->SetCreatureState(CreatureState::WAITING);
		}
		EncounterRun();
	}
	if (m_pEncounteredCreature->GetHealth() <= 0)
	{
		DelayPrint("The creature is dead. Better check the corpse for usable gear.");
		GameManager::GetInstance()->DeleteCreature(m_pEncounteredCreature);
		m_pEncounteredCreature = nullptr;
		int d = GetRandomInt(0, 7);
		int z = GetRandomInt(0, 3);
		d -= 2;
		z -= 2;
		if (d <= 0 && z <= 0)
			DelayPrint("I found nothing of value.");
		if (d > 0) {
			DelayPrint("\nI found some ammo. " + to_string(d) + " Bullets");
			m_pPlayer->GetInventory()->AddItem("bullet", d);
		}
		if (z > 0) {
			DelayPrint("\nI found a green herb.");
			m_pPlayer->GetInventory()->AddItem("greenherb", z);
		}
	}
	m_pPlayer->GetInventory()->ReduceItem("bullet", ammoOrig - ammo);
}
void ResidentText::CalculateDeltaTime()
{
	m_TimeCurrent = GetTickCount();
	m_DTime = (static_cast<float>(m_TimeCurrent) - m_TimePrevious) / 1000.0f;
	m_TimePrevious = m_TimeCurrent;
	if (m_CapDTime && m_DTime >= m_CapDTime)
		m_DTime = m_CapDTime;
}
void ResidentText::CreateObjects()
{
	m_pPlayer = new Player(NodeManager::GetInstance()->GetNode("frontporch"), 100);

	m_pPlayer->GetInventory()->AddItem("pistol");
	m_pPlayer->GetInventory()->AddItem("bullet", 10);

	GameManager::GetInstance()->SetPlayer(m_pPlayer);
}

void ResidentText::DrawTitle()
{
	cout << R"(
		    _______  _______  _______ _________ ______   _______  _       _________		  _________ _______          _________
		   (  ____ )(  ____ \(  ____ \\__   __/(  __  \ (  ____ \( (    /|\__   __/		  \__   __/(  ____ \|\     /|\__   __/
		   | (    )|| (    \/| (    \/   ) (   | (  \  )| (    \/|  \  ( |   ) (		     ) (   | (    \/( \   / )   ) (
		   | (____)|| (__    | (_____    | |   | |   ) || (__    |   \ | |   | |		     | |   | (__     \ (_) /    | |
		   |     __)|  __)   (_____  )   | |   | |   | ||  __)   | (\ \) |   | |		     | |   |  __)     ) _ (     | |
		   | (\ (   | (            ) |   | |   | |   ) || (      | | \   |   | |		     | |   | (       / ( ) \    | |
		   | ) \ \__| (____/\/\____) |___) (___| (__/  )| (____/\| )  \  |   | |		     | |   | (____/\( /   \ )   | |
		   |/   \__/(_______/\_______)\_______/(______/ (_______/|/    )_)   )_(		     )_(   (_______/|/     \|   )_(
	)";
}
void ResidentText::DrawLine(const int &lineWidth)
{
	cout << "\n";
	for (int i = 0; i < lineWidth; ++i) {
		cout << "+";
	}
}
/************************************************** THREAD CIN **********************************************************/
void ResidentText::ReadCin(atomic<bool>& run, atomic<char*>& buffer, atomic<bool>& start)
{
	char input[100];
	while (run.load())
	{
		if (start.load()) {
			//cout << "\nUserInput: ";
			cin.getline(input, sizeof(input));
			buffer.store(input);
			this_thread::sleep_for(200ms);
		}
	}
	//cout << "End Cin thread\n";
}
void ResidentText::CreateInputThread() {
	m_CinThread = thread([=] {ReadCin(m_AGameRun, m_CinBuffer, m_AGameStart); });
}