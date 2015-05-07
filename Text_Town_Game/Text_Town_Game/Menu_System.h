#include "Defines.h"

enum MenuState
{
	GameIntro,
	BasicGame,
	End
};

class Menu_System
{
public:
	Menu_System();
	~Menu_System();

	void Init();

	void Update();

	bool GameComplete();

private:
	void MenuOption(int option);
private:
	bool _GameComplete;
	int _CurrentState;

};

extern Menu_System* g_pMenuSystem;