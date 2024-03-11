#pragma once
#include "Character.h"
#include <map>
class Cleric :
	public Character
{
private:
	std::map<string, int> mSpellSlots;
	int mChannelDivinity;
	int mCantripsKnown;
public:
	Cleric(int strength, int dexterity, int constitution, int intelligence, int wisdom, int charisma, int lvl, int hitDie, string name)
		: Character(strength, dexterity, constitution, intelligence, wisdom, charisma, lvl, hitDie, name)
	{
		IsCaster(true);
		SpellStats();
		ChannelDivinity();
	}
	//getters
	std::map<string, int> SpellSlots() const {
		return mSpellSlots;
	}

	int ChannelDivinity() const {
		return mChannelDivinity;
	}

	int Cantrips() const {
		return mCantripsKnown;
	}
	//method for determining spellstats
	void SpellStats();
	//method for determining ChannelDivinity
	void ChannelDivinity();
};

