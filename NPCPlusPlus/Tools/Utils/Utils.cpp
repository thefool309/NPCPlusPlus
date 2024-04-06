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

void Utils::PrintCharacterPtr(Character* newCharacter)
{
	std::cout << "these are your final scores:" << endl
		<< std::setw(10) << "STR:" << std::setw(3) << newCharacter->Str() << setw(3)
		<< "  STR Bonus: " << setw(3) << newCharacter->StrBonus() << endl

		<< setw(10) << "DEX:" << setw(3) << newCharacter->Dex() << setw(3)
		<< "  DEX Bonus: " << setw(3) << newCharacter->DexBonus() << endl

		<< setw(10) << "CON:" << setw(3) << newCharacter->Con() << setw(3)
		<< "  CON Bonus: " << setw(3) << newCharacter->ConBonus() << endl

		<< setw(10) << "INT:" << setw(3) << newCharacter->Intel() << setw(3)
		<< "  INT Bonus: " << setw(3) << newCharacter->IntelBonus() << endl

		<< setw(10) << "WIS:" << setw(3) << newCharacter->Wis() << setw(3)
		<< "  WIS Bonus: " << setw(3) << newCharacter->WisBonus() << endl

		<< setw(10) << "CHA:" << setw(3) << newCharacter->Cha() << setw(3)
		<< "  CHA Bonus: " << setw(3) << newCharacter->ChaBonus() << endl;

	cin.get();

	cout << "These are your attack bonuses: " << endl
		<< "STR based Attack Bonus: " << newCharacter->StrAttack() << endl
		<< "DEX based Attack Bonus: " << newCharacter->DexAttack() << endl;
	if (newCharacter->IsCaster()) {
		cout << "Your Spell attack bonus: " << newCharacter->SpellAttack() << endl
			<< "Your Spell Save DC: " << newCharacter->SpellSave() << endl;
	}
	cin.get();

	cout << endl << "Your HitPoints: " << newCharacter->HitPoints() << endl;

	cout << "Press any key to continue...";

	cin.get();
}

void Utils::PrintCharacter(Character newCharacter)
{
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
		cout << "Your Spell attack bonus: " << newCharacter.SpellAttack() << endl
			<< "Your Spell Save DC: " << newCharacter.SpellSave() << endl;
	}
	cin.get();

	cout << endl << "Your HitPoints: " << newCharacter.HitPoints() << endl;

	cout << "Press any key to continue...";

	cin.get();
}


