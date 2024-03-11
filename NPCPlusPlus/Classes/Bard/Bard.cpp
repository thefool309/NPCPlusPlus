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
		mSpellsKnown = 4;
		mSpellSlots["Level 1"] = 2;
		Level1.mNumberOfSlots = 2;
		mSpellSlots.push_back(Level1);
		break;
	case 2:
		mCantripsKnown = 2;
		mSpellsKnown = 5;
		mSpellSlots["Level 1"] = 3;
		Level1.mNumberOfSlots = 3;
		mSpellSlots.push_back(Level1);
		break;
	case 3:
		mCantripsKnown = 2;
		mSpellsKnown = 6;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 2;
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 2;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		break;
	case 4:
		mCantripsKnown = 3;
		mSpellsKnown = 7;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 3;
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		break;
	case 5:
		mCantripsKnown = 3;
		mSpellsKnown = 8;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 3;
		mSpellSlots["Level 3"] = 2;
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 2;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		break;
	case 6:
		mCantripsKnown = 3;
		mSpellsKnown = 9;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 3;
		mSpellSlots["Level 3"] = 3;
		Level1.mNumberOfSlots = 4;
		Level2.mNumberOfSlots = 3;
		Level3.mNumberOfSlots = 3;
		mSpellSlots.push_back(Level1);
		mSpellSlots.push_back(Level2);
		mSpellSlots.push_back(Level3);
		break;
	case 7:
		mCantripsKnown = 3;
		mSpellsKnown = 10;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 3;
		mSpellSlots["Level 3"] = 3;
		mSpellSlots["Level 4"] = 1;
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
		mSpellsKnown = 11;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 3;
		mSpellSlots["Level 3"] = 3;
		mSpellSlots["Level 4"] = 2;
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
		mSpellsKnown = 12;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 3;
		mSpellSlots["Level 3"] = 3;
		mSpellSlots["Level 4"] = 3;
		mSpellSlots["Level 5"] = 1;
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
		mSpellsKnown = 14;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 3;
		mSpellSlots["Level 3"] = 3;
		mSpellSlots["Level 4"] = 3;
		mSpellSlots["Level 5"] = 2;
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
		mSpellsKnown = 15;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 3;
		mSpellSlots["Level 3"] = 3;
		mSpellSlots["Level 4"] = 3;
		mSpellSlots["Level 5"] = 2;
		mSpellSlots["Level 6"] = 1;
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
		mSpellsKnown = 15;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 3;
		mSpellSlots["Level 3"] = 3;
		mSpellSlots["Level 4"] = 3;
		mSpellSlots["Level 5"] = 2;
		mSpellSlots["Level 6"] = 1;
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
		mSpellsKnown = 16;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 3;
		mSpellSlots["Level 3"] = 3;
		mSpellSlots["Level 4"] = 3;
		mSpellSlots["Level 5"] = 2;
		mSpellSlots["Level 6"] = 1;
		mSpellSlots["Level 7"] = 1;
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
		mSpellsKnown = 18;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 3;
		mSpellSlots["Level 3"] = 3;
		mSpellSlots["Level 4"] = 3;
		mSpellSlots["Level 5"] = 2;
		mSpellSlots["Level 6"] = 1;
		mSpellSlots["Level 7"] = 1;
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
		mSpellsKnown = 19;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 3;
		mSpellSlots["Level 3"] = 3;
		mSpellSlots["Level 4"] = 3;
		mSpellSlots["Level 5"] = 2;
		mSpellSlots["Level 6"] = 1;
		mSpellSlots["Level 7"] = 1;
		mSpellSlots["Level 8"] = 1;
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
		mSpellsKnown = 19;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 3;
		mSpellSlots["Level 3"] = 3;
		mSpellSlots["Level 4"] = 3;
		mSpellSlots["Level 5"] = 2;
		mSpellSlots["Level 6"] = 1;
		mSpellSlots["Level 7"] = 1;
		mSpellSlots["Level 8"] = 1;
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
		mSpellsKnown = 20;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 3;
		mSpellSlots["Level 3"] = 3;
		mSpellSlots["Level 4"] = 3;
		mSpellSlots["Level 5"] = 2;
		mSpellSlots["Level 6"] = 1;
		mSpellSlots["Level 7"] = 1;
		mSpellSlots["Level 8"] = 1;
		mSpellSlots["Level 9"] = 1;
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
		mSpellsKnown = 22;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 3;
		mSpellSlots["Level 3"] = 3;
		mSpellSlots["Level 4"] = 3;
		mSpellSlots["Level 5"] = 2;
		mSpellSlots["Level 6"] = 1;
		mSpellSlots["Level 7"] = 1;
		mSpellSlots["Level 8"] = 1;
		mSpellSlots["Level 9"] = 1;
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
		mSpellsKnown = 22;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 3;
		mSpellSlots["Level 3"] = 3;
		mSpellSlots["Level 4"] = 3;
		mSpellSlots["Level 5"] = 2;
		mSpellSlots["Level 6"] = 2;
		mSpellSlots["Level 7"] = 1;
		mSpellSlots["Level 8"] = 1;
		mSpellSlots["Level 9"] = 1;
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
		mSpellsKnown = 22;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 3;
		mSpellSlots["Level 3"] = 3;
		mSpellSlots["Level 4"] = 3;
		mSpellSlots["Level 5"] = 2;
		mSpellSlots["Level 6"] = 2;
		mSpellSlots["Level 7"] = 2;
		mSpellSlots["Level 8"] = 1;
		mSpellSlots["Level 9"] = 1;
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



