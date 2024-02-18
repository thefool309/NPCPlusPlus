#pragma once

#include <vector>
class Dice {
public:
	static int ASModifier(int abilityScore);
	static std::vector<int> RollAS();
	static int RollHP(int maxHitDie, int numberOfDice, int conBonus);
};

class UI {
public:
	static const int AS_MIN_INPUT = 7; //ability score input minimum
	static const int AS_MAX_INPUT = 19; // ability score input maximum

	static std::string GetString(std::string primeText, std::string promptText);
	static int VerifyIntegerInput(int userInputMin, int userInputMax, std::string primeText, std::string promptText);
	static void ClearConsole();
	static void IntakeAbilityScore(int abilityScoreMin, int abilityScoreMax, int& ability, int& bonus, std::string asPrimeText, std::string asPromptText);
	
	static void TakeAllAbilityScores(int& str, int& dex, int& con, int& wis, int& intel, int& cha, int& strBonus, int& dexBonus, int& conBonus, int& intBonus, int& wisBonus, int& chaBonus);

private:
	static int RecieveIntegerInput(std::string primeText, std::string promptText);
};
