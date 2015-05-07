#include <iostream>
#include <ctime>
#include "Defines.h"
#include "CharacterManager.h"
#include "Menu_System.h"

using namespace std;

// -----------------------------------------
void Init()
{
	// creates all global variables 
	g_pCharacterManager = new CharacterManager();
	g_pMenuSystem = new Menu_System();
}
// -----------------------------------------
int main() 
{
	Init();

	while ( !g_pMenuSystem->GameComplete() )
	{
		g_pMenuSystem->Update();
	}

	return 0;
}
// -----------------------------------------
void wait(int wait_time)
{
	long *start_time = new long;
	*start_time = time(0);

	while ((*start_time + wait_time) > time(0)){
	};

	delete start_time;
};
// -----------------------------------------