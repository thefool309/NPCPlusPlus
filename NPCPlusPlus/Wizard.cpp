#include "Wizard.h"

void Wizard::DetermineSpellStats()
{
	SpellSave(8 + IntelBonus() + ProfBonus());	//spell save and spell attack
	SpellAttack(IntelBonus() + ProfBonus());

	SpellSlots Level1(1, 0);
	SpellSlots Level2(2, 0);
	SpellSlots Level3(3, 0);
	SpellSlots Level4(4, 0);
	SpellSlots Level5(5, 0);
	SpellSlots Level6(6, 0);
	SpellSlots Level7(7, 0);
	SpellSlots Level8(8, 0);
	SpellSlots Level9(9, 0);
	switch (Lvl()) {
	case 1:
		mCantripsKnown = 2;
		Level1.mNumberOfSlots = 2;
		mSpellSlots.push_back(Level1);
		break;
	case 2:
		mCantripsKnown = 2;
		Level1.mNumberOfSlots = 3;
		mSpellSlots.push_back(Level1);
		break;
	case 3:
		mCantripsKnown = 2;
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 2;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		break;
	case 4:
		mCantripsKnown = 3;
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		break;
	case 5:
		mCantripsKnown = 3;
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 2;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		break;
	case 6:
		mCantripsKnown = 3;
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 3;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		break;
	case 7:
		mCantripsKnown = 3;
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 3;
		Level4.mNumberOfSlots = 1;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		mSpellSlots.push_back(Level4);
		break;
	case 8:
		mCantripsKnown = 3;
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 3;
		Level4.mNumberOfSlots = 2;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		mSpellSlots.push_back(Level4);
		break;
	case 9:
		mCantripsKnown = 3;
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
	case 10:
		mCantripsKnown = 4;
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
	case 11:
		mCantripsKnown = 4;
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 3;
		Level4.mNumberOfSlots = 3;
		Level5.mNumberOfSlots = 2;
		Level6.mNumberOfSlots = 1;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		mSpellSlots.push_back(Level4);
		mSpellSlots.push_back(Level5);
		mSpellSlots.push_back(Level6);
		break;
	case 12:
		mCantripsKnown = 4;
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 3;
		Level4.mNumberOfSlots = 3;
		Level5.mNumberOfSlots = 2;
		Level6.mNumberOfSlots = 1;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		mSpellSlots.push_back(Level4);
		mSpellSlots.push_back(Level5);
		mSpellSlots.push_back(Level6);
		break;
	case 13:
		mCantripsKnown = 4;
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 3;
		Level4.mNumberOfSlots = 3;
		Level5.mNumberOfSlots = 2;
		Level6.mNumberOfSlots = 1;
		Level7.mNumberOfSlots = 1;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		mSpellSlots.push_back(Level4);
		mSpellSlots.push_back(Level5);
		mSpellSlots.push_back(Level6);
		mSpellSlots.push_back(Level7);
		break;
	case 14:
		mCantripsKnown = 4;
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 3;
		Level4.mNumberOfSlots = 3;
		Level5.mNumberOfSlots = 2;
		Level6.mNumberOfSlots = 1;
		Level7.mNumberOfSlots = 1;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		mSpellSlots.push_back(Level4);
		mSpellSlots.push_back(Level5);
		mSpellSlots.push_back(Level6);
		mSpellSlots.push_back(Level7);
		break;
	case 15:
		mCantripsKnown = 4;
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 3;
		Level4.mNumberOfSlots = 3;
		Level5.mNumberOfSlots = 2;
		Level6.mNumberOfSlots = 1;
		Level7.mNumberOfSlots = 1;
		Level8.mNumberOfSlots = 1;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		mSpellSlots.push_back(Level4);
		mSpellSlots.push_back(Level5);
		mSpellSlots.push_back(Level6);
		mSpellSlots.push_back(Level7);
		mSpellSlots.push_back(Level8);
		break;
	case 16:
		mCantripsKnown = 4;
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 3;
		Level4.mNumberOfSlots = 3;
		Level5.mNumberOfSlots = 2;
		Level6.mNumberOfSlots = 1;
		Level7.mNumberOfSlots = 1;
		Level8.mNumberOfSlots = 1;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		mSpellSlots.push_back(Level4);
		mSpellSlots.push_back(Level5);
		mSpellSlots.push_back(Level6);
		mSpellSlots.push_back(Level7);
		mSpellSlots.push_back(Level8);
		break;
	case 17:
		mCantripsKnown = 4;
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 3;
		Level4.mNumberOfSlots = 3;
		Level5.mNumberOfSlots = 2;
		Level6.mNumberOfSlots = 1;
		Level7.mNumberOfSlots = 1;
		Level8.mNumberOfSlots = 1;
		Level9.mNumberOfSlots = 1;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		mSpellSlots.push_back(Level4);
		mSpellSlots.push_back(Level5);
		mSpellSlots.push_back(Level6);
		mSpellSlots.push_back(Level7);
		mSpellSlots.push_back(Level8);
		mSpellSlots.push_back(Level9);
		break;
	case 18:
		mCantripsKnown = 4;
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 3;
		Level4.mNumberOfSlots = 3;
		Level5.mNumberOfSlots = 2;
		Level6.mNumberOfSlots = 1;
		Level7.mNumberOfSlots = 1;
		Level8.mNumberOfSlots = 1;
		Level9.mNumberOfSlots = 1;;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		mSpellSlots.push_back(Level4);
		mSpellSlots.push_back(Level5);
		mSpellSlots.push_back(Level6);
		mSpellSlots.push_back(Level7);
		mSpellSlots.push_back(Level8);
		mSpellSlots.push_back(Level9);
		break;
	case 19:
		mCantripsKnown = 4;
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 3;
		Level4.mNumberOfSlots = 3;
		Level5.mNumberOfSlots = 2;
		Level6.mNumberOfSlots = 2;
		Level7.mNumberOfSlots = 1;
		Level8.mNumberOfSlots = 1;
		Level9.mNumberOfSlots = 1;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		mSpellSlots.push_back(Level4);
		mSpellSlots.push_back(Level5);
		mSpellSlots.push_back(Level6);
		mSpellSlots.push_back(Level7);
		mSpellSlots.push_back(Level8);
		mSpellSlots.push_back(Level9);
		break;
	default:
		mCantripsKnown = 4;
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 3;
		Level4.mNumberOfSlots = 3;
		Level5.mNumberOfSlots = 2;
		Level6.mNumberOfSlots = 2;
		Level7.mNumberOfSlots = 2;
		Level8.mNumberOfSlots = 1;
		Level9.mNumberOfSlots = 1;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		mSpellSlots.push_back(Level4);
		mSpellSlots.push_back(Level5);
		mSpellSlots.push_back(Level6);
		mSpellSlots.push_back(Level7);
		mSpellSlots.push_back(Level8);
		mSpellSlots.push_back(Level9);
		break;
	}
}

void Wizard::DetermineArcaneRecovery()
{
	mArcaneRecovery = Lvl() / 2;
}
