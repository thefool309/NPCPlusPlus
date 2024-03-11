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

	switch (Lvl()) {
	case 1:
		mCantripsKnown = 2;
		mSpellsKnown = 4;
		mSpellSlots["Level 1"] = 2;
		break;
	case 2:
		mCantripsKnown = 2;
		mSpellsKnown = 5;
		mSpellSlots["Level 1"] = 3;
		break;
	case 3:
		mCantripsKnown = 2;
		mSpellsKnown = 6;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 2;
		break;
	case 4:
		mCantripsKnown = 3;
		mSpellsKnown = 7;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 3;
		break;
	case 5:
		mCantripsKnown = 3;
		mSpellsKnown = 8;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 3;
		mSpellSlots["Level 3"] = 2;
		break;
	case 6:
		mCantripsKnown = 3;
		mSpellsKnown = 9;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 3;
		mSpellSlots["Level 3"] = 3;
		break;
	case 7:
		mCantripsKnown = 3;
		mSpellsKnown = 10;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 3;
		mSpellSlots["Level 3"] = 3;
		mSpellSlots["Level 4"] = 1;
		break;
	case 8:
		mCantripsKnown = 3;
		mSpellsKnown = 11;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 3;
		mSpellSlots["Level 3"] = 3;
		mSpellSlots["Level 4"] = 2;
		break;
	case 9: 
		mCantripsKnown = 3;
		mSpellsKnown = 12;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 3;
		mSpellSlots["Level 3"] = 3;
		mSpellSlots["Level 4"] = 3;
		mSpellSlots["Level 5"] = 1;
		break;
	case 10:
		mCantripsKnown = 4;
		mSpellsKnown = 14;
		mSpellSlots["Level 1"] = 4;
		mSpellSlots["Level 2"] = 3;
		mSpellSlots["Level 3"] = 3;
		mSpellSlots["Level 4"] = 3;
		mSpellSlots["Level 5"] = 2;
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
		break;
	}
	
	
		


}



