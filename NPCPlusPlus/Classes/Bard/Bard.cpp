#include "Bard.h"

void Bard::DetermineBardicInpiration(int lvl)
{
	if (ChaBonus() > 0)
		mBardicInspiration = ChaBonus();
	else
		mBardicInspiration = 1;

	if (lvl < 5)
		mInspirationDie = 6;
	else if (lvl >= 5 && lvl < 10)
		mInspirationDie = 8;
	else if (lvl >= 10 && lvl < 15)
		mInspirationDie = 10;
	else
		mInspirationDie = 12;
	
}

void Bard::DetermineSpellStats()
{
	SpellSave(8 + ChaBonus() + ProfBonus());	//spell save and spell attack
	SpellAttack(ChaBonus() + ProfBonus());

	if (Lvl() < 4)
		mCantripsKnown = 2;
	else if (Lvl() >= 4 && Lvl() < 10)
		mCantripsKnown = 3;
	else
		mCantripsKnown = 4;

	Dice::DetermineSpellSlotsFull(Lvl(), mSpellSlots);

	switch (Lvl()) {
	case 1:
		mSpellsKnown = 4;
		break;
	case 2:
		mSpellsKnown = 5;
		break;
	case 3:
		mSpellsKnown = 6;
		break;
	case 4:
		mSpellsKnown = 7;
		break;
	case 5:
		mSpellsKnown = 8;
		break;
	case 6:
		mSpellsKnown = 9;
		break;
	case 7:
		mSpellsKnown = 10;
		break;
	case 8:
		mSpellsKnown = 11;
		break;
	case 9: 
		mSpellsKnown = 12;
		break;
	case 10:
		mSpellsKnown = 14;
		break;
	case 11: case 12:
		mSpellsKnown = 15;
		break;
	case 13:
		mSpellsKnown = 16;
		break;
	case 14:
		mSpellsKnown = 18;
		break;
	case 15: case 16:
		mSpellsKnown = 19;
		break;
	case 17:
		mSpellsKnown = 20;
		break;
	case 18: case 19: default:
		mSpellsKnown = 22;
		break;
	}
}



