// TextBaseGame.cpp : Defines the entry point for the console application.

#include <stdio.h>
#include <iostream>

#include "ResidentText.h"

#pragma execution_character_set("utf-8")

using namespace std;

void MainMethod();

int main(int argc, const char* argv[])
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	//_CrtSetBreakAlloc(161);

	MainMethod();

	_CrtDumpMemoryLeaks();
	return 0;
}

void MainMethod()
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, 1920, 1080, TRUE);

	ResidentText* game = new ResidentText(120, 1080);
	game->GameLoop();
	delete game;
	game = nullptr;
}