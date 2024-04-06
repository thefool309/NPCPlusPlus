#include "Artificer.h"

void Artificer::DetermineInfusions()
{
	if (Lvl() < 2)
		mInfusionsKnown = 0;
	else if (Lvl() >= 2 && Lvl() < 6)
		mInfusionsKnown = 4;
	else if (Lvl() >= 6 && Lvl() < 10)
		mInfusionsKnown = 6;
	else if (Lvl() >= 10 && Lvl() < 14)
		mInfusionsKnown = 8;
	else if (Lvl() >= 14 && Lvl() < 18)
		mInfusionsKnown = 10;
	else
		mInfusionsKnown = 12;
}

void Artificer::DetermineSpellSlots()
{
	SpellSave(8 + IntelBonus() + ProfBonus());	//spell save and spell attack
	SpellAttack(IntelBonus() + ProfBonus());

	Dice::DetermineSpellSlotsHalf(Lvl(), mCantripsKnown, mSpellSlots);
}
