#include "Cleric.h"
#include "Structs.h"

void Cleric::SpellStats()
{
	SpellSave(8 + WisBonus() + ProfBonus());	//spell save and spell attack
	SpellAttack(WisBonus() + ProfBonus());

	Dice::DetermineSpellSlotsFull(Lvl(), mCantripsKnown, mSpellSlots);
}

void Cleric::ChannelDivinity()
{
	if (Lvl() < 2) {
		mChannelDivinity = 0;
	}
	else if (Lvl() >= 2 && Lvl() < 6)
		mChannelDivinity = 1;
	else if (Lvl() >= 6 && Lvl() < 18)
		mChannelDivinity = 2;
	else
		mChannelDivinity = 3;
}
