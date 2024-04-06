#pragma once
#include "Character.h"
class Paladin :
	public Character
{
	//member fields
	std::vector<SpellSlots> mSpellSlots;
	int mLayOnHands;
		//constructors

		//accessors
	std::vector<SpellSlots> SpellSlots() const { return mSpellSlots; }
	int LayOnHands() const { return mLayOnHands; }
		//mutators

		void DetermineSpellStats();

};

