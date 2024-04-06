#include "Ranger.h"
void Ranger::SpellStats()
{

	SpellSave(8 + ChaBonus() + ProfBonus());	//spell save and spell attack
	SpellAttack(ChaBonus() + ProfBonus());

	if (Lvl() < 2)
		mSpellSlots = {};
	else
		Dice::DetermineSpellSlotsHalf(Lvl(), mSpellSlots);
}

void Ranger::FavouredEnemy()
{
	mFavouredEnemy = Helper::StringInput("Favoured Enemy");
	Helper::PauseConsole();
}
