#include "Menu_System.h"
#include <iostream>

using namespace std;

Menu_System* g_pMenuSystem;
// -----------------------------------------
Menu_System::Menu_System()
{
	_GameComplete = false;
	_CurrentState = GameIntro;
}
// -----------------------------------------
Menu_System::~Menu_System()
{
}
// -----------------------------------------
void Menu_System::Init()
{
	// Set up various variables
}
// -----------------------------------------
void Menu_System::Update()
{
	switch (_CurrentState)
	{
	case GameIntro:
		cout << "------- Main Menu -------\n";
		cout << "1/ New Game\n";
		cout << "2/ Load Game\n";
		cout << "3/ Exit\n";
		cout << "Select Above option: ";
		int menuVar;
		cin >> menuVar;
		MenuOption(menuVar);
		break;
	case BasicGame:
		break;
	case End: // always same as default
	default:
		break;
	}
}
// -----------------------------------------
bool Menu_System::GameComplete()
{
	return(_GameComplete);
}
// -----------------------------------------
void  Menu_System::MenuOption(int option)
{
	CLEAR_WINDOW;

	switch (option)
	{
	case 1:
		cout << "New Game Began\n";
		break;
	case 2:
		cout << "Game Loaded\n";
		break;
	case 3:
		cout << "Game Exit\n";
		_GameComplete = true;
		break;
	default:
		break;
	}
}
// -----------------------------------------