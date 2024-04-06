#pragma once
#include "Character.h"
#include "Structs.h"
#include <vector>
class Artificer :
	public Character
{
	
private:
	//Member fields
	int mInfusionsKnown;
	std::vector<SpellSlots> mSpellSlots;
public:
	//constructors
	Artificer(int strength, int dexterity, int constitution, int intelligence, int wisdom, int charisma, int lvl, int hitDie, string name)
		: Character(strength, dexterity, constitution, intelligence, wisdom, charisma, lvl, hitDie, name)
	{
		DetermineInfusions();
		DetermineSpellSlots();
	}
	//getters
	int Infusions() const { return mInfusionsKnown; }
	std::vector<SpellSlots> GetSpellSlots() const { return mSpellSlots; }
	//setters
	void DetermineInfusions();
	void DetermineSpellSlots();
};

