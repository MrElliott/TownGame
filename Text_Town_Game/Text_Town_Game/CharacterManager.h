#include <iostream>
#include <ctime>

enum Class
{
	WARRIOR,
	ROUGE,
	MAGE
};

enum Stat
{
	Health,
	Mana,
	Strength,
	Endurance,
	Charisma,
	Intelect,
	Agility,
	Luck,
};

class CharacterManager
{
public:
	CharacterManager();
	~CharacterManager();

	void CreateCharacter();

	int GetStat(Stat requiredStat);

	bool IsCharacterCreated();

	void AddExperience(int experience);

	void LevelCheck();

private:

	bool _CharacterCreated;

	std::string _CharacterName;

	int _Health;
	int _Mana;

	int _Experience;
	int _NextLevelExp;

	int _Strength;
	int _Endurance;
	int _Charisma;
	int _Intelect;
	int _Agility;
	int _Luck;
	
	// Requires Inventory for character

	Class _CharClass;
};

extern CharacterManager* g_pCharacterManager;
