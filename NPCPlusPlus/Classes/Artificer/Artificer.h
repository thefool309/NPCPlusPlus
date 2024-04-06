#pragma once
#include "Character.h"
#include "Structs.h"
#include "TheDiceBag.h"
#include <vector>
class Artificer :
	public Character
{
	
private:
	//Member fields
	int mInfusionsKnown;
	std::vector<SpellSlots> mSpellSlots;
	int mCantripsKnown;
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
	int Cantrips() const { return mCantripsKnown; }
	//setters
	void DetermineInfusions();
	void DetermineSpellSlots();
};

