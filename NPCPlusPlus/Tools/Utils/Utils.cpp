#include<iostream>
#include <iomanip>
#include "Utils.h"
#include "TheDiceBag.h"
#include "UI.h"
#include "Character.h"

bool Utils::IsPrefix(std::string prefix, std::string comp)
{
	bool prefixIs = false;
	std::transform(prefix.begin(), prefix.end(), prefix.begin(), ::tolower); //transform all to lower for case insensitivity
	std::transform(comp.begin(), comp.end(), comp.begin(), ::tolower);
	int found = comp.find(prefix); //returns position of prefix in comp (if found==0) than it is prefix else not. 
	if (found == 0) {
		prefixIs = true;
	}
	return prefixIs;
}

AbilityScore Utils::SpellcastingAbility()
{
	AbilityScore result;
	std::string userInput;
	std::string scPrime = "INT\nWIS\nCHA\n";
	std::string scPrompt = "Input your spell casting ability: ";
	bool wisCheck = false;
	bool intCheck = false;
	bool chaCheck = false;
	bool scDefined = false;
		do {
			userInput = UI::GetString(scPrime, scPrompt);
			intCheck = IsPrefix(userInput, "intelligence");
			wisCheck = IsPrefix(userInput, "wisdom");
			chaCheck = IsPrefix(userInput, "charisma");
			if (wisCheck) {
				result = Wisdom;
				scDefined = true;
			}
			else if (intCheck) {
				result = Intelligence;
				scDefined = true;
			}
			else if (chaCheck) {
				result = Charisma;
				scDefined = true;
			}
			else {
				std::cout << "Invalid Input, please try again!\n";
			}
		} while (!scDefined);
	
	return result;
}

void Utils::DetermineSCAbility(int& scAttackBonus, int& spellSaveDC, int& profBonus, int& chaBonus, int& wisBonus, int& intelBonus)
{
	AbilityScore scAbility = Utils::SpellcastingAbility();
	switch (scAbility)
	{
	case Wisdom:
		scAttackBonus = (wisBonus + profBonus);
		spellSaveDC = (8 + wisBonus + profBonus);
		break;
	case Intelligence:
		scAttackBonus = (intelBonus + profBonus);
		spellSaveDC = (8 + intelBonus + profBonus);
		break;
	default:
		scAttackBonus = (chaBonus + profBonus);
		spellSaveDC = (8 + chaBonus + profBonus);
		break;
	}
}

void Utils::PrintCharacterPtr(Character* character)
{
	character->Print();
}

Character* Utils::GenerateNPC()
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
	string numberOfDicePrime = "Please enter the character's level";
	string numberOfDicePrompt = "Lvl: ";

	int maxHitDie = 0;
	//define prompts for the ui input method
	string hitdiePrime = "Please enter the maximum value of the hit die";
	string hitdiePrompt = "Largest Number on Hit Die: ";

	//user inputs numberOfDice and program verifies that it is in range
	numberOfDice = UI::VerifyIntegerInput(NUMBER_OF_DICE_MIN, NUMBER_OF_DICE_MAX, numberOfDicePrime, numberOfDicePrompt);	//lvl
	Character newCharacter(str, dex, con, intel, wis, cha, numberOfDice, maxHitDie, name);
	///created new character
	UI::ClearConsole();
	Utils::PrintCharacterPtr(&newCharacter);
	return &newCharacter;
}

pClass Utils::UserChooseClass()
{
	pClass result;
	std::vector<std::string> menuOptions = { "Artificer", "Barbarian", "Bard", "NPC", "Cleric","Druid", "Fighter", "Monk", "Paladin", "Ranger", "Rogue", "Sorcerer", "Warlock", "Wizard" };
	Helper::PrintLine("---------------Classes---------------\n");
	for (auto& option : menuOptions) {
		Helper::PrintLine(option);
	}
	bool inputInvalid = true;
	std::string selection;
	int index;
	do
	{
		bool isPrefix;
		std::string searchResult;
		selection = Helper::StringInput("Choose a class off this list and enter it below", "Class");
		for (int i = 0; i < menuOptions.size(); i++) {
			isPrefix = Helper::IsPrefix(selection, menuOptions[i]);
			if (isPrefix) {
				searchResult = menuOptions[i];
				index = i;
				break;
			}
		}
		if (isPrefix) {
			bool isNeither;
			do
			{
				Helper::PrintLine("Your choice is " + searchResult);
				std::string yOrN = Helper::StringInput("Correct?(y/n)");
				bool isY = Helper::IsPrefix(yOrN, "y");
				bool isN = Helper::IsPrefix(yOrN, "n");
				isNeither = true;
				if (isY) {
					inputInvalid = false;
					isNeither = false;
				}
				else if (isN) {
					inputInvalid = true;
					isNeither = false;
				}
				else
					Helper::PrintLine("Invalid Input try again (y/n)");
			} while (isNeither);
			
		}
		else {
			Helper::PrintLine("Invalid Input, Check your spelling");
		}
	} while (inputInvalid);
	result = pClass(index);
	return result;
}



