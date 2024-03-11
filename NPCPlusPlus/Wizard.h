#pragma once
#include "Character.h"
#include "Structs.h"
#include <map>

class Wizard :
	public Character
{
private:
	vector<SpellSlots> mSpellSlots;
	int mCantripsKnown;
	int mSpellbook;
	int mArcaneRecovery;
public:
	//constructor
	Wizard(int strength, int dexterity, int constitution, int intelligence, int wisdom, int charisma, int lvl, int hitDie, string name)
		: Character(strength, dexterity, constitution, intelligence, wisdom, charisma, lvl, hitDie, name)
	{
		DetermineSpellStats();
		DetermineArcaneRecovery();
	}

	//getters
	int Cantrips() const {
		return mCantripsKnown;
	}

	int Spellbook() const {
		return mSpellbook;
	}

	vector<SpellSlots> GetSpellslots() const {
		return mSpellSlots;
	}

	int ArcaneRevocery() const {
		return mArcaneRecovery;
	}

	//function for spell stats
	void DetermineSpellStats();
	void DetermineArcaneRecovery();

};

