#include "Wizard.h"

void Wizard::DetermineSpellStats()
{
	SpellSave(8 + IntelBonus() + ProfBonus());	//spell save and spell attack
	SpellAttack(IntelBonus() + ProfBonus());

	IsCaster(true);

	Dice::DetermineSpellSlotsFull(Lvl(), mCantripsKnown, mSpellSlots);
}

void Wizard::DetermineArcaneRecovery()
{
	mArcaneRecovery = Lvl() / 2;
}
