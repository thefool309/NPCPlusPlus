// NPCPlusPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
///<summary>
///Welcome to NPC++, A Dungeons and Dragons 5e NPC stat generator
///this is licensed under the Unlicense
///You have full permission to download, change, and redistribute this code 
///I have no affiliations with any repos or forks of NPC aside from 
///thefool309/NPCplusplus and it's original repo on my deadname github
///Happy Adventures and Happy Coding!
/// </summary>

#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <limits>

#include "Character.h"
#include "Barbarian.h"
#include "TheDiceBag.h"
#include "Utils.h"
#include "UI.h"

using namespace std;

int main()
{
	//AS in this context is ability scores shortened for brevity
	// this is to represent the minimum and maximum amount you can roll on ability scores 
	srand(time(NULL));
	int ASmaxValue = 18;
	int ASminValue = 9;

	string name = UI::GetString("please enter your characters name", "Name: ");

	//roll ability scores
	vector<int> scores = Dice::RollAS();
	//print the ability scores back
	for (int i = 0; i < scores.size(); i++) {
		cout << "Score Rolled: " << scores[i] << endl;
	}
	
	

	//define variables for ability scores and bonuses
	int str;
	int dex;
	int con;
	int intel;
	int wis;
	int cha;
	//as or AS in these contexts stands for ability score
	//define input constants for the programs min and max values

	const int PROF_MIN_INPUT = 2; // Proficiency bonus input minimum
	const int PROF_MAX_INPUT = 6; // proficiency bonus input maximum

	const int NUMBER_OF_DICE_MIN = 1; //lowest input for numberOfDice
	const int NUMBER_OF_DICE_MAX = 20;//Highest input for numberOfDice

	const int HITDIE_INPUT_MIN = 1; //lowest input for maxHitDie
	const int HITDIE_INPUT_MAX = 12; //highest input for maxHitDie

	const int MISC_ATTACK_BONUS_MIN = 0; //lowest input for misc attack mods
	const int MISC_ATTACK_BONUS_MAX = 10; //highest input for misc attack mods

	//take user input on where they would like to assign these scores

	UI::TakeAllAbilityScores(str, dex, con, wis, intel, cha);

	UI::ClearConsole();

	int numberOfDice = 0;
	//define prompts for the ui input method
	string numberOfDicePrime = "Please enter the number of Hit Dice (a.k.a. the LVL)";
	string numberOfDicePrompt = "Number of Hit Dice: ";

	int maxHitDie = 0;
	//define prompts for the ui input method
	string hitdiePrime = "Please enter the maximum value of the hit die";
	string hitdiePrompt = "Largest Number on Hit Die: ";

	//user inputs numberOfDice and program verifies that it is in range
	numberOfDice = UI::VerifyIntegerInput(NUMBER_OF_DICE_MIN, NUMBER_OF_DICE_MAX, numberOfDicePrime, numberOfDicePrompt);
	Character newCharacter(str, dex, con, intel, wis, cha, numberOfDice, maxHitDie, name);

	UI::ClearConsole();

	cout << "these are your final scores:" << endl
		<< setw(10) << "STR:" << setw(3) << newCharacter.Str() << setw(3)
		<< "  STR Bonus: " << setw(3) << newCharacter.StrBonus() << endl

		<< setw(10) << "DEX:" << setw(3) << newCharacter.Dex() << setw(3)
		<< "  DEX Bonus: " << setw(3) << newCharacter.DexBonus() << endl

		<< setw(10) << "CON:" << setw(3) << newCharacter.Con() << setw(3)
		<< "  CON Bonus: " << setw(3) << newCharacter.ConBonus() << endl

		<< setw(10) << "INT:" << setw(3) << newCharacter.Intel() << setw(3)
		<< "  INT Bonus: " << setw(3) << newCharacter.IntelBonus() << endl

		<< setw(10) << "WIS:" << setw(3) << newCharacter.Wis() << setw(3)
		<< "  WIS Bonus: " << setw(3) << newCharacter.WisBonus() << endl

		<< setw(10) << "CHA:" << setw(3) << newCharacter.Cha() << setw(3)
		<< "  CHA Bonus: " << setw(3) << newCharacter.ChaBonus() << endl;

	cin.get();

	cout << "These are your attack bonuses: " << endl
		<< "STR based Attack Bonus: " << newCharacter.StrAttack() << endl
		<< "DEX based Attack Bonus: " << newCharacter.DexAttack() << endl;
	if (newCharacter.IsCaster()) {
		/*cout << "Your Spell attack bonus: " << scAttackBonus << endl
			<< "Your Spell Save DC: " << spellSaveDC << endl;*/
	}
	cin.get();

	cout << endl << "Your HitPoints: " << newCharacter.HitPoints() << endl;

	cout << "Press any key to continue...";

	cin.get();
	

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file