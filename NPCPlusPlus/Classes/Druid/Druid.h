#pragma once
#include "Character.h"
#include<vector>
class Druid :
    public Character
{
private:
	std::vector<SpellSlots> mSpellSlots;
	int mWildshape;
	std::string mWildshapeLvl;
	int mCantripsKnown;
public:
	Druid(int strength, int dexterity, int constitution, int intelligence, int wisdom, int charisma, int lvl, int hitDie, string name)
		: Character(strength, dexterity, constitution, intelligence, wisdom, charisma, lvl, hitDie, name)
	{
		IsCaster(true);
		SpellStats();
		WildShape();
	}
	//getters
	std::vector<SpellSlots> SpellSlots() const {
		return mSpellSlots;
	}

	int Wildshape() const {
		return mWildshape;
	}

	std::string WildshapeLvl() const {
		return mWildshapeLvl;
	}

	int Cantrips() const {
		return mCantripsKnown;
	}
	//method for determining spellstats
	void SpellStats();
	//method for determining wildshape
	void WildShape();
};

