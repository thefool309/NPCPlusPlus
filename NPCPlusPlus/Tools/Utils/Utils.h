#pragma once
#include <string>
#include <algorithm>
#include "enums.h"
#include "Structs.h"
#include "Character.h"
#include "Helper.h"

class Utils {

	static bool IsPrefix(std::string prefix, std::string comp);
	static AbilityScore SpellcastingAbility();
public:
	static void DetermineSCAbility(int& scAttackBonus, int& spellSaveDC, int& profBonus, int& chaBonus, int& wisBonus, int& intelBonus);
	static void PrintCharacterPtr(Character* newCharacter);
	static Character* GenerateNPC();
	static pClass UserChooseClass();


};