#pragma once
#include "Character.h"
#include <map>

class Wizard :
	public Character
{
private:
	std::map<std::string, int> mSpellSlots;
	int mCantripsKnown;
	int mSpellbook;
	int mArcaneRecovery;
public:
	//constructor
	Wizard(int strength, int dexterity, int constitution, int intelligence, int wisdom, int charisma, int lvl, int hitDie, string name)
		: Character(strength, dexterity, constitution, intelligence, wisdom, charisma, lvl, hitDie, name)
	{
		DetermineSpellStats();
	}

	//getters
	int Cantrips() const {
		return mCantripsKnown;
	}

	int Spellbook() const {
		return mSpellbook;
	}

	std::map<std::string, int> Spellslots() const {
		return mSpellSlots;
	}

	int ArcaneRevocery() const {
		return mArcaneRecovery;
	}

	//function for spell stats
	void DetermineSpellStats();
	void DetermineArcaneRecovery();

};

