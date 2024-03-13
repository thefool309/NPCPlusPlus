#pragma once
#include "Character.h"
class Rogue :
    public Character
{
private:
	int mNumOfSneakAttackDice;
public:
	Rogue(int strength, int dexterity, int constitution, int intelligence, int wisdom, int charisma, int lvl, int hitDie, string name)
		: Character(strength, dexterity, constitution, intelligence, wisdom, charisma, lvl, hitDie, name)
	{
		DetermineSneakAttack();
	}

	void DetermineSneakAttack();
};

