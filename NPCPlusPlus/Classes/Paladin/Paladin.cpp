#include "Paladin.h"

void Paladin::DetermineSpellStats()
{
	mLayOnHands = Lvl() * 5;
	IsCaster(true);
	SpellSave(8 + ChaBonus() + ProfBonus());	//spell save and spell attack
	SpellAttack(ChaBonus() + ProfBonus());

	if (Lvl() < 2)
		mSpellSlots = {};
	else
		Dice::DetermineSpellSlotsHalf(Lvl(), mSpellSlots);
}
