#include "Sorcerer.h"

void Sorcerer::DetermineSpellStats()
{
	SpellSave(8 + ChaBonus() + ProfBonus());	//spell save and spell attack
	SpellAttack(ChaBonus() + ProfBonus());

	IsCaster(true);

	Dice::DetermineSpellSlotsFull(Lvl(), mSpellSlots);
	
	switch (Lvl()) {
	case 1:
		mCantripsKnown = 4;
		mSpellsKnown = 2;
		break;
	case 2:
		mCantripsKnown = 4;
		mSpellsKnown = 3;
		break;
	case 3:
		mCantripsKnown = 4;
		mSpellsKnown = 4;
		break;
	case 4:
		mCantripsKnown = 5;
		mSpellsKnown = 5;
		break;
	case 5:
		mCantripsKnown = 5;
		mSpellsKnown = 6;
		break;
	case 6:
		mCantripsKnown = 5;
		mSpellsKnown = 7;
		break;
	case 7:
		mCantripsKnown = 5;
		mSpellsKnown = 8;
		break;
	case 8:
		mCantripsKnown = 5;
		mSpellsKnown = 9;
		break;
	case 9:
		mCantripsKnown = 5;
		mSpellsKnown = 10;
		break;
	case 10:
		mCantripsKnown = 6;
		mSpellsKnown = 11;
		break;
	case 11:
		mCantripsKnown = 6;
		mSpellsKnown = 12;
		break;
	case 12:
		mCantripsKnown = 6;
		mSpellsKnown = 12;
		break;
	case 13: case 14:
		mCantripsKnown = 6;
		mSpellsKnown = 13;
		break;
	case 15: case 16:
		mCantripsKnown = 6;
		mSpellsKnown = 14;
		break;
	case 17: case 18: case 19: default:
		mCantripsKnown = 6;
		mSpellsKnown = 15;
		break;
	}
}

void Sorcerer::DetermineSorcPnts()
{
	if (Lvl() < 2)
		mSorceryPoints = 0;
	else
		mSorceryPoints = Lvl();
}
