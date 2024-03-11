#pragma once
#include "Character.h"
#include "Structs.h"
#include <vector>
class Bard :
	public Character
{
	int mBardicInspiration;
	int mInspirationDie;
	vector<SpellSlots> mSpellSlots;
	int mSpellsKnown;
	int mCantripsKnown;

	//constructor
	Bard(int strength, int dexterity, int constitution, int intelligence, int wisdom, int charisma, int lvl, int hitDie, string name)
		: Character(strength, dexterity, constitution, intelligence, wisdom, charisma, lvl, hitDie, name) 
	{
		IsCaster(true);
		DetermineBardicInpiration(Lvl());
		DetermineSpellStats();
	}
	//accessors
	int BardicInspiration() const {
		return mBardicInspiration;
	}

	int CantripsKnown() const {
		return mCantripsKnown;
	}

	int SpellsKnown() const {
		return mSpellsKnown;
	}

	vector<SpellSlots> GetSpellSlots() const {
		return mSpellSlots;
	}
	//mutators
	void BardicInspiration(int newInspiration) {
		mBardicInspiration = newInspiration;
	}

	//function for determining bardic inspiration/day
	void DetermineBardicInpiration(int lvl);
	//function for determining spell slots
	void DetermineSpellStats();
};

