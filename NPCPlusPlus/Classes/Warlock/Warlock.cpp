#include "Warlock.h"

void Warlock::DetermineInvocations()
{
	if (Lvl() < 2)
		mInvocations = 0;
	else if (Lvl() >= 2 && Lvl() < 5)
		mInvocations = 2;
	else if (Lvl() >= 5 && Lvl() < 7)
		mInvocations = 3;
	else if (Lvl() >= 7 && Lvl() < 9)
		mInvocations = 4;
	else if (Lvl() >= 9 && Lvl() < 12)
		mInvocations = 5;
	else if (Lvl() >= 12 && Lvl() < 15)
		mInvocations = 6;
	else if (Lvl() >= 15 && Lvl() < 17)
		mInvocations = 7;
	else
		mInvocations = 8;
}

void Warlock::DetermineSpellStats()
{
	SpellSave(8 + ChaBonus() + ProfBonus());	//spell save and spell attack
	SpellAttack(ChaBonus() + ProfBonus());

	switch (Lvl()) {
	case 1:
		mCantripsKnown = 2;
		mSpellSlots.mLevel = 1;
		mSpellSlots.mNumberOfSlots = 1;
		mSpellsKnown = 2;
		break;
	case 2:
		mCantripsKnown = 2;
		mSpellSlots.mLevel = 1;
		mSpellSlots.mNumberOfSlots = 2;
		mSpellsKnown = 3;
		break;
	case 3:
		mCantripsKnown = 2;
		mSpellSlots.mLevel = 2;
		mSpellSlots.mNumberOfSlots = 2;
		mSpellsKnown = 4;
		break;
	case 4:
		mCantripsKnown = 3;
		mSpellSlots.mLevel = 2;
		mSpellSlots.mNumberOfSlots = 2;
		mSpellsKnown = 5;
		break;
	case 5:
		mCantripsKnown = 3;
		mSpellSlots.mLevel = 3;
		mSpellSlots.mNumberOfSlots = 2;
		mSpellsKnown = 6;
		break;
	case 6:
		mCantripsKnown = 3;
		mSpellSlots.mLevel = 3;
		mSpellSlots.mNumberOfSlots = 2;
		mSpellsKnown = 7;
		break;
	case 7:
		mCantripsKnown = 3;
		mSpellSlots.mLevel = 4;
		mSpellSlots.mNumberOfSlots = 2;
		mSpellsKnown = 8;
		break;
	case 8:
		mCantripsKnown = 3;
		mSpellSlots.mLevel = 4;
		mSpellSlots.mNumberOfSlots = 2;
		mSpellsKnown = 9;
		break;
	case 9:
		mCantripsKnown = 3;
		mSpellSlots.mLevel = 5;
		mSpellSlots.mNumberOfSlots = 2;
		mSpellsKnown = 10;
		break;
	case 10:
		mCantripsKnown = 4;
		mSpellSlots.mLevel = 5;
		mSpellSlots.mNumberOfSlots = 2;
		mSpellsKnown = 10;
		break;
	case 11:
		mCantripsKnown = 4;
		mSpellSlots.mLevel = 5;
		mSpellSlots.mNumberOfSlots = 3;
		mSpellsKnown = 11;
		break;
	case 12:
		mCantripsKnown = 4;
		mSpellSlots.mLevel = 5;
		mSpellSlots.mNumberOfSlots = 3;
		mSpellsKnown = 11;
		break;
	case 13:
		mCantripsKnown = 4;
		mSpellSlots.mLevel = 5;
		mSpellSlots.mNumberOfSlots = 3;
		mSpellsKnown = 12;
		break;
	case 14:
		mCantripsKnown = 4;
		mSpellSlots.mLevel = 5;
		mSpellSlots.mNumberOfSlots = 3;
		mSpellsKnown = 12;
		break;
	case 15:
		mCantripsKnown = 4;
		mSpellSlots.mLevel = 5;
		mSpellSlots.mNumberOfSlots = 3;
		mSpellsKnown = 13;
		break;
	case 16:
		mCantripsKnown = 4;
		mSpellSlots.mLevel = 5;
		mSpellSlots.mNumberOfSlots = 3;
		mSpellsKnown = 13;
		break;
	case 17:
		mCantripsKnown = 4;
		mSpellSlots.mLevel = 5;
		mSpellSlots.mNumberOfSlots = 4;
		mSpellsKnown = 14;
		break;
	case 18:
		mCantripsKnown = 4;
		mSpellSlots.mLevel = 5;
		mSpellSlots.mNumberOfSlots = 4;
		mSpellsKnown = 14;
		break;
	case 19:
		mCantripsKnown = 4;
		mSpellSlots.mLevel = 5;
		mSpellSlots.mNumberOfSlots = 4;
		mSpellsKnown = 15;
		break;
	default:
		mCantripsKnown = 4;
		mSpellSlots.mLevel = 5;
		mSpellSlots.mNumberOfSlots = 4;
		mSpellsKnown = 15;
		break;
	}
}
