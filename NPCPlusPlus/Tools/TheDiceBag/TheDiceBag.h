#pragma once
#include "Structs.h"
#include <ctime>
#include <cmath>
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <vector>
class Dice {
public:
	static int ASModifier(int abilityScore);
	static std::vector<int> RollAS();
	static int RollHP(int maxHitDie, int numberOfDice, int conBonus);
	static void DetermineSpellSlotsFull(int lvl, std::vector<SpellSlots>& spellSlots);
	static void DetermineSpellSlotsHalf(int lvl, std::vector<SpellSlots>& spellSlots);
	static void DetermineSpellSlotsFull(int lvl, int& cantripsKnown, std::vector<SpellSlots>& spellSlots);
	static void DetermineSpellSlotsHalf(int lvl, int& cantripsKnown, std::vector<SpellSlots>& spellSlots);
};


