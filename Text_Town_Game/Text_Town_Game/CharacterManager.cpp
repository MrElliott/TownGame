#include "CharacterManager.h"

CharacterManager* g_pCharacterManager;
using namespace std;
// -----------------------------------------
CharacterManager::CharacterManager()
{
	_CharacterCreated = false;

	_CharacterName = "";

	_Health = 0;
	_Mana = 0;

	_Experience= 0;
	_NextLevelExp = 100;

	_Strength = 0;
	_Endurance = 0;
	_Charisma = 0;
	_Intelect = 0;
	_Agility = 0;
	_Luck = 0;
}
// -----------------------------------------
CharacterManager::~CharacterManager()
{

}
// -----------------------------------------
void CharacterManager::CreateCharacter()
{

}
// -----------------------------------------
bool CharacterManager::IsCharacterCreated()
{
	return _CharacterCreated;
}
// -----------------------------------------
int CharacterManager::GetStat(Stat requiredStat)
{
	switch (requiredStat)
	{
	case Health:
		return _Health;
		break;
	case Mana:
		return _Mana;
		break;
	case Strength:
		return _Strength;
		break;
	case Endurance:
		return _Endurance;
		break;
	case Charisma:
		return _Charisma;
		break;
	case Intelect:
		return _Intelect;
		break;
	case Agility:
		return _Agility;
		break;
	case Luck:
		return _Luck;
		break;
	default:
		// return -1 if the call failed
		return -1;
		break;
	}	
}
// -----------------------------------------
void CharacterManager::AddExperience(int experience)
{
	cout << "Congratulations you earned: " << experience << " experience" << endl;

	_Experience += experience;

	LevelCheck();
}
// -----------------------------------------
void CharacterManager::LevelCheck()
{
	if (_Experience >= _NextLevelExp)
	{
		// Calculate Next Level
	}
	else
	{
		// Do Nothing
	}
}
// -----------------------------------------