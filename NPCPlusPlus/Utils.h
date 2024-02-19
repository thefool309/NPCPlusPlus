#pragma once
#include <string>
#include <algorithm>
#include "enums.h"

class Utils {

	bool IsPrefix(std::string prefix, std::string comp);
	AbilityScore SpellcastingAbility();
public:
	void DetermineSCAbility(int& scAttackBonus, int& spellSaveDC, int& profBonus, int& chaBonus, int& wisBonus, int& intelBonus);

};