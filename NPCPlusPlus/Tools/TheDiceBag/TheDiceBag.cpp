
#include "TheDiceBag.H"
/// <summary>
/// This is the dicebag. 
/// Where we store our most useful tools as dungeon master.
/// Use it wisely, these are already employed through the program.
/// The Dice class will be defined here
/// </summary>
using namespace std;

	int Dice::ASModifier(int abilityScore) {
		int ASBonus;		//this is an if else if statement to determine
		if (abilityScore <= 9)	// the Bonus related to ability scores
			ASBonus = -1;
		else if (abilityScore <= 11)
			ASBonus = 0;
		else if (abilityScore <= 13)
			ASBonus = 1;
		else if (abilityScore <= 15)
			ASBonus = 2;
		else if (abilityScore <= 17)
			ASBonus = 3;
		else if (abilityScore <= 19)
			ASBonus = 4;
		else
			ASBonus = 5;

		return ASBonus;
	}

	int Dice::RollHP(int maxHitDie, int numberOfDice, int conBonus)
	{
		int hitpoints = maxHitDie + conBonus; // define hitpoints at first level
		int hpPerLvl; //declare hpPerLvl this will be the hp increase per level
		if (maxHitDie > 0 && maxHitDie <= 6) { // to remove room for user error 
			hpPerLvl = 4;				     // these conditions are defined in a range 1-6
		}
		else if (maxHitDie > 6 && maxHitDie <= 8) { // range 6-8
			hpPerLvl = 5;
		}
		else if (maxHitDie > 8 && maxHitDie <= 10) { //range 8-10
			hpPerLvl = 6;
		}
		else {										 //anything other than these values will result
			hpPerLvl = 7;							 // in hpPerLvl at max value of 7
		}

		//generate hitpoints with this loop
		for (int i = 1; i < numberOfDice; i++) { // while i is less than the number of hitdice
			hitpoints = hitpoints += (conBonus + hpPerLvl); // add conbonus and hpPerLvl to hitpoints
		}
		return hitpoints;
	}

	void Dice::DetermineSpellSlotsFull(int lvl, std::vector<SpellSlots>& spellSlots)
	{
		SpellSlots Level1(1, 0);
		SpellSlots Level2(2, 0);
		SpellSlots Level3(3, 0);
		SpellSlots Level4(4, 0);
		SpellSlots Level5(5, 0);
		SpellSlots Level6(6, 0);
		SpellSlots Level7(7, 0);
		SpellSlots Level8(8, 0);
		SpellSlots Level9(9, 0);
		switch (lvl) {
		case 1:
			Level1.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			break;
		case 2:
			Level1.mNumberOfSlots = 3;
			spellSlots.push_back(Level1);
			break;
		case 3:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			break;
		case 4:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			break;
		case 5:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			break;
		case 6:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			break;
		case 7:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			break;
		case 8:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			break;
		case 9:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			break;
		case 10:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			break;
		case 11:
			
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			Level6.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			spellSlots.push_back(Level6);
			break;
		case 12:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			Level6.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			spellSlots.push_back(Level6);
			break;
		case 13:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			Level6.mNumberOfSlots = 1;
			Level7.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			spellSlots.push_back(Level6);
			spellSlots.push_back(Level7);
			break;
		case 14:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			Level6.mNumberOfSlots = 1;
			Level7.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			spellSlots.push_back(Level6);
			spellSlots.push_back(Level7);
			break;
		case 15:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			Level6.mNumberOfSlots = 1;
			Level7.mNumberOfSlots = 1;
			Level8.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			spellSlots.push_back(Level6);
			spellSlots.push_back(Level7);
			spellSlots.push_back(Level8);
			break;
		case 16:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			Level6.mNumberOfSlots = 1;
			Level7.mNumberOfSlots = 1;
			Level8.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			spellSlots.push_back(Level6);
			spellSlots.push_back(Level7);
			spellSlots.push_back(Level8);
			break;
		case 17:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			Level6.mNumberOfSlots = 1;
			Level7.mNumberOfSlots = 1;
			Level8.mNumberOfSlots = 1;
			Level9.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			spellSlots.push_back(Level6);
			spellSlots.push_back(Level7);
			spellSlots.push_back(Level8);
			spellSlots.push_back(Level9);
			break;
		case 18:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			Level6.mNumberOfSlots = 1;
			Level7.mNumberOfSlots = 1;
			Level8.mNumberOfSlots = 1;
			Level9.mNumberOfSlots = 1;;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			spellSlots.push_back(Level6);
			spellSlots.push_back(Level7);
			spellSlots.push_back(Level8);
			spellSlots.push_back(Level9);
			break;
		case 19:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			Level6.mNumberOfSlots = 2;
			Level7.mNumberOfSlots = 1;
			Level8.mNumberOfSlots = 1;
			Level9.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			spellSlots.push_back(Level6);
			spellSlots.push_back(Level7);
			spellSlots.push_back(Level8);
			spellSlots.push_back(Level9);
			break;
		default:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			Level6.mNumberOfSlots = 2;
			Level7.mNumberOfSlots = 2;
			Level8.mNumberOfSlots = 1;
			Level9.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			spellSlots.push_back(Level6);
			spellSlots.push_back(Level7);
			spellSlots.push_back(Level8);
			spellSlots.push_back(Level9);
			break;
		}
	}

	void Dice::DetermineSpellSlotsHalf(int lvl, std::vector<SpellSlots>& spellSlots)
	{
		SpellSlots Level1(1, 0);
		SpellSlots Level2(2, 0);
		SpellSlots Level3(3, 0);
		SpellSlots Level4(4, 0);
		SpellSlots Level5(5, 0);

		switch (lvl) {
		case 1:
			Level1.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			break;
		case 2:
			Level1.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			break;
		case 3:
			Level1.mNumberOfSlots = 3;
			spellSlots.push_back(Level1);
			break;
		case 4:
			Level1.mNumberOfSlots = 3;
			spellSlots.push_back(Level1);
			break;
		case 5:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			break;
		case 6:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			break;
		case 7:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			break;
		case 8:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			break;
		case 9:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			break;
		case 10:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			break;
		case 11:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			break;
		case 12:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			break;
		case 13:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			break;
		case 14:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			break;
		case 15:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			break;
		case 16:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			break;
		case 17:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			break;
		case 18:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			break;
		case 19:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			break;
		default:
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			break;
		}
	}

	void Dice::DetermineSpellSlotsFull(int lvl, int& cantripsKnown, std::vector<SpellSlots>& spellSlots)
	{
		SpellSlots Level1(1, 0);
		SpellSlots Level2(2, 0);
		SpellSlots Level3(3, 0);
		SpellSlots Level4(4, 0);
		SpellSlots Level5(5, 0);
		SpellSlots Level6(6, 0);
		SpellSlots Level7(7, 0);
		SpellSlots Level8(8, 0);
		SpellSlots Level9(9, 0);
		switch (lvl) {
		case 1:
			cantripsKnown = 2;
			Level1.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			break;
		case 2:
			cantripsKnown = 2;
			Level1.mNumberOfSlots = 3;
			spellSlots.push_back(Level1);
			break;
		case 3:
			cantripsKnown = 2;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			break;
		case 4:
			cantripsKnown = 3;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			break;
		case 5:
			cantripsKnown = 3;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			break;
		case 6:
			cantripsKnown = 3;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			break;
		case 7:
			cantripsKnown = 3;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			break;
		case 8:
			cantripsKnown = 3;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			break;
		case 9:
			cantripsKnown = 3;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			break;
		case 10:
			cantripsKnown = 4;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			break;
		case 11:
			cantripsKnown = 4;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			Level6.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			spellSlots.push_back(Level6);
			break;
		case 12:
			cantripsKnown = 4;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			Level6.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			spellSlots.push_back(Level6);
			break;
		case 13:
			cantripsKnown = 4;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			Level6.mNumberOfSlots = 1;
			Level7.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			spellSlots.push_back(Level6);
			spellSlots.push_back(Level7);
			break;
		case 14:
			cantripsKnown = 4;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			Level6.mNumberOfSlots = 1;
			Level7.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			spellSlots.push_back(Level6);
			spellSlots.push_back(Level7);
			break;
		case 15:
			cantripsKnown = 4;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			Level6.mNumberOfSlots = 1;
			Level7.mNumberOfSlots = 1;
			Level8.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			spellSlots.push_back(Level6);
			spellSlots.push_back(Level7);
			spellSlots.push_back(Level8);
			break;
		case 16:
			cantripsKnown = 4;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			Level6.mNumberOfSlots = 1;
			Level7.mNumberOfSlots = 1;
			Level8.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			spellSlots.push_back(Level6);
			spellSlots.push_back(Level7);
			spellSlots.push_back(Level8);
			break;
		case 17:
			cantripsKnown = 4;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			Level6.mNumberOfSlots = 1;
			Level7.mNumberOfSlots = 1;
			Level8.mNumberOfSlots = 1;
			Level9.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			spellSlots.push_back(Level6);
			spellSlots.push_back(Level7);
			spellSlots.push_back(Level8);
			spellSlots.push_back(Level9);
			break;
		case 18:
			cantripsKnown = 4;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			Level6.mNumberOfSlots = 1;
			Level7.mNumberOfSlots = 1;
			Level8.mNumberOfSlots = 1;
			Level9.mNumberOfSlots = 1;;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			spellSlots.push_back(Level6);
			spellSlots.push_back(Level7);
			spellSlots.push_back(Level8);
			spellSlots.push_back(Level9);
			break;
		case 19:
			cantripsKnown = 4;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			Level6.mNumberOfSlots = 2;
			Level7.mNumberOfSlots = 1;
			Level8.mNumberOfSlots = 1;
			Level9.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			spellSlots.push_back(Level6);
			spellSlots.push_back(Level7);
			spellSlots.push_back(Level8);
			spellSlots.push_back(Level9);
			break;
		default:
			cantripsKnown = 4;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			Level6.mNumberOfSlots = 2;
			Level7.mNumberOfSlots = 2;
			Level8.mNumberOfSlots = 1;
			Level9.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			spellSlots.push_back(Level6);
			spellSlots.push_back(Level7);
			spellSlots.push_back(Level8);
			spellSlots.push_back(Level9);
			break;
		}
	}

	void Dice::DetermineSpellSlotsHalf(int lvl, int& cantripsKnown, std::vector<SpellSlots>& spellSlots)
	{
		SpellSlots Level1(1, 0);
		SpellSlots Level2(2, 0);
		SpellSlots Level3(3, 0);
		SpellSlots Level4(4, 0);
		SpellSlots Level5(5, 0);

		switch (lvl) {
		case 1:
			cantripsKnown = 2;
			Level1.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			break;
		case 2:
			cantripsKnown = 2;
			Level1.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			break;
		case 3:
			cantripsKnown = 2;
			Level1.mNumberOfSlots = 3;
			spellSlots.push_back(Level1);
			break;
		case 4:
			cantripsKnown = 2;
			Level1.mNumberOfSlots = 3;
			spellSlots.push_back(Level1);
			break;
		case 5:
			cantripsKnown = 2;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			break;
		case 6:
			cantripsKnown = 2;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			break;
		case 7:
			cantripsKnown = 2;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			break;
		case 8:
			cantripsKnown = 2;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			break;
		case 9:
			cantripsKnown = 2;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			break;
		case 10:
			cantripsKnown = 3;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			break;
		case 11:
			cantripsKnown = 3;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			break;
		case 12:
			cantripsKnown = 3;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			break;
		case 13:
			cantripsKnown = 3;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			break;
		case 14:
			cantripsKnown = 4;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			break;
		case 15:
			cantripsKnown = 4;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			break;
		case 16:
			cantripsKnown = 4;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			break;
		case 17:
			cantripsKnown = 4;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			break;
		case 18:
			cantripsKnown = 4;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 1;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			break;
		case 19:
			cantripsKnown = 4;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			break;
		default:
			cantripsKnown = 4;
			Level1.mNumberOfSlots = 4;
			Level2.mNumberOfSlots = 3;
			Level3.mNumberOfSlots = 3;
			Level4.mNumberOfSlots = 3;
			Level5.mNumberOfSlots = 2;
			spellSlots.push_back(Level1);
			spellSlots.push_back(Level2);
			spellSlots.push_back(Level3);
			spellSlots.push_back(Level4);
			spellSlots.push_back(Level5);
			break;
		}
	}

	std::vector<int> Dice::RollAS() {

		std::cout << "Rolling your ability scores..." << endl;
		vector<int> result;
		const int ASmaxValue = 18; // ability score max value
		const int ASminValue = 8; //ability score min value
		for (int i = 0; i < 6; i++) {
			srand(time(NULL)); // seed for rand
			int ASroll = rand() % (ASmaxValue - ASminValue + 1) + ASminValue; //roll a score
			result.push_back(ASroll); //add the score to the result vector
			chrono::seconds duration(1); //duration of pause is for one second to ensure a new seed
			this_thread::sleep_for(duration); //sleep for duration
			if (i == 0) {
				cout << "rolling your " << (i + 1) << "st score" << endl; //print the ability score that's being rolled
			}
			else if (i == 1) {
				cout << "rolling your " << (i + 1) << "nd score" << endl;
			}
			else if (i == 2) {
				cout << "rolling your " << (i + 1) << "rd score" << endl;
			}
			else if (i == 5) {
				cout << "rolling your " << (i + 1) << "th score" << endl;
				chrono::seconds duration(1); //duration of pause is for one second 
				this_thread::sleep_for(duration); //sleep for duration
				cout << "\x1B[2J\x1B[H"; //special string for clearing the console
			}
			else {
				cout << "rolling your " << (i + 1) << "th score" << endl;
			}
		}
		return result;
	}