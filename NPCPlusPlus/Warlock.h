#pragma once
#include "Character.h"
#include "Structs.h"

class Warlock :
	public Character
{
	int mSpellsKnown;
	int mCantripsKnown;
	int mInvocations;
	SpellSlots mSpellSlots;

	Warlock(int strength, int dexterity, int constitution, int intelligence, int wisdom, int charisma, int lvl, int hitDie, string name)
		: Character(strength, dexterity, constitution, intelligence, wisdom, charisma, lvl, hitDie, name) 
	{
		DetermineInvocations();
		DetermineSpellStats();
	}

	void DetermineInvocations();
	void DetermineSpellStats();
};

