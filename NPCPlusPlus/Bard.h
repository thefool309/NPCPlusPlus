#pragma once
#include "Character.h"
class Bard :
	public Character
{
	int mBardicInspiration;
	int mInspirationDie;

	//constructor
	Bard(int strength, int dexterity, int constitution, int intelligence, int wisdom, int charisma, int lvl, int hitDie, string name)
		: Character(strength, dexterity, constitution, intelligence, wisdom, charisma, lvl, hitDie, name) 
	{
		IsCaster(true);
		DetermineBardicInpiration(Lvl());
	}
	//accessors
	int BardicInspiration() const {
		return mBardicInspiration;
	}
	//mutators
	void BardicInspiration(int newInspiration) {
		mBardicInspiration = newInspiration;
	}

	//function for determining bardic inspiration/day
	void DetermineBardicInpiration(int lvl);
};

