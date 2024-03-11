#pragma once
#include "Character.h"
class Fighter :
	public Character
{
private:
	int mActionSurge;
	int mIndominatable;
	int mExtraAttack;

public:
	Fighter(int strength, int dexterity, int constitution, int intelligence, int wisdom, int charisma, int lvl, int hitDie, string name)
		: Character(strength, dexterity, constitution, intelligence, wisdom, charisma, lvl, hitDie, name)
	{
		DetermineFighterFeatures();
	}
	//getters
	int ActionSurge() const {
		return mActionSurge;
	}

	int Indominatable() const {
		return mIndominatable;
	}

	int ExtraAttack() const {
		return mExtraAttack;
	}

	//determine indominatable, action surge, and Extra Attack
	void DetermineFighterFeatures();

};

