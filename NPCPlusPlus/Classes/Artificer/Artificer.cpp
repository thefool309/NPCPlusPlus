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

	SpellSlots Level1(1, 0);
	SpellSlots Level2(2, 0);
	SpellSlots Level3(3, 0);
	SpellSlots Level4(4, 0);
	SpellSlots Level5(5, 0);

	switch (Lvl()) {
	case 1:
		Level1.mNumberOfSlots = 2;
		mSpellSlots.push_back(Level1);
		break;
	case 2:
		Level1.mNumberOfSlots = 2;
		mSpellSlots.push_back(Level1);
		break;
	case 3:
		Level1.mNumberOfSlots = 3;
		mSpellSlots.push_back(Level1);
		break;
	case 4:
		Level1.mNumberOfSlots = 3;
		mSpellSlots.push_back(Level1);
		break;
	case 5:
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 2;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		break;
	case 6:
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 2;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		break;
	case 7:
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		break;
	case 8:
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		break;
	case 9:
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 2;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		break;
	case 10:
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 2;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		break;
	case 11:
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 3;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		break;
	case 12:
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 3;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		break;
	case 13:
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 3;
		Level4.mNumberOfSlots = 1;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		mSpellSlots.push_back(Level4);
		break;
	case 14:
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 3;
		Level4.mNumberOfSlots = 1;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		mSpellSlots.push_back(Level4);
		break;
	case 15:
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 3;
		Level4.mNumberOfSlots = 2;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		mSpellSlots.push_back(Level4);
		break;
	case 16:
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 3;
		Level4.mNumberOfSlots = 2;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		mSpellSlots.push_back(Level4);
		break;
	case 17:
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 3;
		Level4.mNumberOfSlots = 3;
		Level5.mNumberOfSlots = 1;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		mSpellSlots.push_back(Level4);
		mSpellSlots.push_back(Level5);
		break;
	case 18:
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 3;
		Level4.mNumberOfSlots = 3;
		Level5.mNumberOfSlots = 1;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		mSpellSlots.push_back(Level4);
		mSpellSlots.push_back(Level5);
		break;
	case 19:
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 3;
		Level4.mNumberOfSlots = 3;
		Level5.mNumberOfSlots = 2;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		mSpellSlots.push_back(Level4);
		mSpellSlots.push_back(Level5);
		break;
	default:
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 3;
		Level4.mNumberOfSlots = 3;
		Level5.mNumberOfSlots = 2;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		mSpellSlots.push_back(Level4);
		mSpellSlots.push_back(Level5);
		break;
	}
}
