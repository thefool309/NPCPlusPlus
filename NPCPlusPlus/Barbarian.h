#pragma once
#include "Character.h"
class Barbarian :
	public Character
{
	int mRagePerDay;

	Barbarian(int strength,
		int dexterity,
		int constitution,
		int intelligence,
		int wisdom,
		int charisma,
		int lvl,
		int hitDie,
		string name) : Character(strength,
								dexterity, 
								constitution,
								intelligence,
								wisdom,
								charisma, 
								lvl, hitDie, 
								name) {
		DetermineRage();
	}

	void DetermineRage();
};

