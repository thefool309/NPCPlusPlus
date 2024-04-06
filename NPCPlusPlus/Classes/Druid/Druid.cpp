#include "Druid.h"

void Druid::SpellStats()
{
	SpellSave(8 + WisBonus() + ProfBonus());	//spell save and spell attack
	SpellAttack(WisBonus() + ProfBonus());
	IsCaster(true);
	Dice::DetermineSpellSlotsFull(Lvl(), mCantripsKnown, mSpellSlots);
}

void Druid::WildShape()
{
	if (Lvl() < 2) {
		mWildshape = 0;
		mWildshapeLvl = "N/A";
	}
	else if (Lvl() > 2 && Lvl() < 4) {
		mWildshape = 2;
		mWildshapeLvl = "1/4";
	}
	else if (Lvl() > 4 && Lvl() < 8) {
		mWildshape = 2;
		mWildshapeLvl = "1/2";
	}
	else {
		mWildshape = 2;
		mWildshapeLvl = "1";
	}
}
