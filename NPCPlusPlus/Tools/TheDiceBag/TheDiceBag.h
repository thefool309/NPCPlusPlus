#pragma once

#include <vector>
class Dice {
public:
	static int ASModifier(int abilityScore);
	static std::vector<int> RollAS();
	static int RollHP(int maxHitDie, int numberOfDice, int conBonus);
};


