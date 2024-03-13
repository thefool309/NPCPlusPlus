#include "Rogue.h"

void Rogue::DetermineSneakAttack()
{
	if (Lvl() > 0 && Lvl() < 3)
		mNumOfSneakAttackDice = 1;
	else if (Lvl() >= 3 && Lvl() < 5)
		mNumOfSneakAttackDice = 2;
	else if (Lvl() >= 5 && Lvl() < 7)
		mNumOfSneakAttackDice = 3;
	else if (Lvl() >= 7 && Lvl() < 9)
		mNumOfSneakAttackDice = 4;
	else if (Lvl() >= 9 && Lvl() < 11)
		mNumOfSneakAttackDice = 5;
	else if (Lvl() >= 11 && Lvl() < 13)
		mNumOfSneakAttackDice = 6;
	else if (Lvl() >= 13 && Lvl() < 15)
		mNumOfSneakAttackDice = 7;
	else if (Lvl() >= 15 && Lvl() < 17)
		mNumOfSneakAttackDice = 8;
	else if (Lvl() >= 17 && Lvl() < 19)
		mNumOfSneakAttackDice = 9;
	else
		mNumOfSneakAttackDice = 10;
}
