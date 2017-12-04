#pragma once

#include <iostream>
#include "../Helpers.h"
#include "../Managers/GameManager.h"
#include "../Items/Inventory.h"
#include "../Managers/WorldObjectManager.h"
#include "../Managers/ConnectionManager.h"

using namespace std;

namespace eventActions {
	inline void ExaminedWindowFrontPorch()
	{
		Node* node = NodeManager::GetInstance()->GetNode("frontporch");
		WorldObject* obj = WorldObjectManager::GetInstance()->GetWorldObject("rockWithKey");
		DelayPrint("\nMaybe I should look around again, I might have missed something.");
		node->AddWorldObject(obj);
	}

	inline void EnteredKitchen() {
		DelayPrint("\nHmm strange there is nobody here, who ever was here is gone now.");
	}

	inline void EnteredHallwaySouthFirst() {
		Player* pPlayer = GameManager::GetInstance()->GetPlayer();
		pPlayer->GetInventory()->ReduceItem("frontdoorkey");
		DelayPrint("\nAfter using the frontdoor key, it turned to dust while I was still holding it.");
		DelayPrint("\nI should tread with caution some stange thing are happening here.");
		DelayPrint("\nAs I entered the house the door slammed shut behind me as locking me inside.");
		Node* node = NodeManager::GetInstance()->GetNode("hallwaysouth");
		Connection* connection = node->GetConnection("frontporch");
		connection->SetConnectionStatus(false);
		connection->SetExamineResponceClosed("This door is closed now like it is being held closed by something.");
	}

	inline void SearchedLivingRoomTable() {
		system("cls");
		DelayPrint("\nAs I searched through the notes and papers on the table I found a cassette.");
		DelayPrint("\nOn it said \"clair\". I better look at the contents on it for any clues.");
		DelayPrint("\nBy chance there was a VCR player in room, let's hope it still works.");
		DelayPrint("\nI saw Clair talking to an old lady in a wheelchair. I think they are in a garage and I couldn't understand what they where saying. But I think I understood one word: \"H-virus\".");
		DelayPrint("\nSuddenly it turned black and I could here breathing.\nI heard something else in the background, I listened closely: 'Welcome to famely girl'.");
		DelayPrint("\nAs the cassette ran to its end a loud screech emenated from the tv.\nAs soon as it began the screech ended.");
		DelayPrint("\nComplete silence but hearing something move behind me I turned around. What I say was the statue moving.\n But it was not a statue anymore, it was a monster.");
		DelayPrint("\nWithout thinking I fired apon the creature but could do little but stun it so that I could escape the room and bar the door behind me.");
		DelayPrint("\nThat had to be the new type of bioweapon. I have to be ready and hope there aren't any more of them, but I knew better.");

		Player* pPlayer = GameManager::GetInstance()->GetPlayer();
		pPlayer->GetInventory()->ReduceItem("bullet", 2);
		pPlayer->MoveToNode("hallwaynorth");

		Node* node = NodeManager::GetInstance()->GetNode("livingroom");
		Connection* connection = node->GetConnection("hallwaynorth");
		connection->SetConnectionStatus(false);
		connection->SetExamineResponceClosed("Better keep this door closed, I can still here the creature behind it.");

		node = NodeManager::GetInstance()->GetNode("hallwaysouth");
		node->RemoveWorldOjectById("hallwaysouthstatue");
		GameManager::GetInstance()->AddCreature(new Creature(NodeManager::GetInstance()->GetNode("hallwaysouth"), 40));
		WorldObject* obj = WorldObjectManager::GetInstance()->GetWorldObject("hiddenpainting");
		node->AddWorldObject(obj);

		node = NodeManager::GetInstance()->GetNode("toilet");
		connection = node->GetConnection("hallwaynorth");
		connection->SetConnectionStatus(true);
	}

	inline void SearchedHiddenPainting() {
		DelayPrint("\nI moved the ainting aside and found ahidden switch. As I pressed it I heard the garage door unlocked.");

		Node* node = NodeManager::GetInstance()->GetNode("garage");
		Connection* connection = node->GetConnection("hallwaysouth");
		connection->SetConnectionStatus(true);

		GameManager::GetInstance()->AddCreature(new Creature(NodeManager::GetInstance()->GetNode("garage"), 50));
	}

	inline void SearchedGarageBag() {
		DelayPrint("\nI removed the bag and revealed a severd head.");

		Node* node = NodeManager::GetInstance()->GetNode("garage");

		node->RemoveWorldOjectById("hangingbaggarage");

		WorldObject* obj = WorldObjectManager::GetInstance()->GetWorldObject("severedhead");
		node->AddWorldObject(obj);
	}

	inline void SearchedBookCase() {
		system("cls");
		DelayPrint("\nI searched the book case and found a strange book. Like it was of place. As I pulled it the bookcase revealed a secret passage.");

		Connection* con = ConnectionManager::GetInstance()->AddConnection("bedroom", "secretroom", true, "none");

		Node* node = NodeManager::GetInstance()->GetNode("bedroom");
		node->AddConnection(con);

		node = NodeManager::GetInstance()->GetNode("secretroom");
		node->AddConnection(con);
	}

	inline void SearchedComputer() {
		system("cls");
		DelayPrint("\nI looked around in the computer and found some interresting files.\n Some files related to the viral outbreak 6 years ago.");
		DelayPrint("\nAccording to these files the virus that caused the outbreak was codenamed 'G'. Project G was a succes and further research was needed.");
		DelayPrint("It seems some nutjob experimented with the virus and addapted it to created the monsters I have seen in the house.");

		DelayPrint("\nLooking aound the room I found some interreting documents as well, may want to read them.");

		Node* node = NodeManager::GetInstance()->GetNode("secretroom");

		WorldObject* obj = WorldObjectManager::GetInstance()->GetWorldObject("document1");
		node->AddWorldObject(obj);
		obj = WorldObjectManager::GetInstance()->GetWorldObject("document2");
		node->AddWorldObject(obj);
		obj = WorldObjectManager::GetInstance()->GetWorldObject("document3");
		node->AddWorldObject(obj);

		GameManager::GetInstance()->AddCreature(new Creature(NodeManager::GetInstance()->GetNode("bathroom"), 50));

		node = NodeManager::GetInstance()->GetNode("bathroom");
		Connection* connection = node->GetConnection("secondfloor");

		connection->SetConnectionStatus(true);

		node = NodeManager::GetInstance()->GetNode("secondfloor");
		node->RemoveWorldOjectById("secondfloorstatue");
	}

	inline void SearchedBathtub() {
		system("cls");
		DelayPrint("\nI can't believe I'm adoing this, sticking my hand in a black substance. As I going is a figure plunged out of the tub.");
		DelayPrint("\nLuckely for me he was allready dead but it scared the life out of me.\n After further examination of the body it seem he was a subject in the experimetns here.");
		DelayPrint("\nWhat a bad way to end up. I saw something around his neck");

		Node* node = NodeManager::GetInstance()->GetNode("bathroom");

		WorldObject* obj = WorldObjectManager::GetInstance()->GetWorldObject("corpse");
		node->AddWorldObject(obj);

		node = NodeManager::GetInstance()->GetNode("diningroom");
		Connection* connection = node->GetConnection("livingroom");

		connection->SetConnectionStatus(true);
	}

	inline void EnteredBackjard() {
		system("cls");
		DelayPrint("\nFinaly outside I found myself in the backjard of the house. As I sighed of relieve but I found myself feeling more worried about Claire.");
		DelayPrint("\nWhat happend here and who is de nutjob who did all this. As I was contemplating all I have discovered I heard a familiar set of words behind me.");
		Sleep(3000);

		DelayPrint("\n\n\n\nWelcome to the family son.", 100);

		GameManager::GetInstance()->SetEndGame();

		Sleep(3000);
	}
}