#include<iostream>

#include "Utils.h"
#include "TheDiceBag.h"
#include "UI.h"

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
			userInput = 
UI::GetString(scPrime, scPrompt);
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
