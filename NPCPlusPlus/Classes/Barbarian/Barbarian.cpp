#include "Barbarian.h"

void Barbarian::DetermineRage()
{
	if (Lvl() < 3)
		mRagePerDay = 2;
	else if (Lvl() >= 3 && Lvl() < 6)
		mRagePerDay = 3;
	else if (Lvl() >= 6 && Lvl() < 12)
		mRagePerDay = 4;
	else if (Lvl() >= 12 && Lvl() < 17)
		mRagePerDay = 5;
	else
		mRagePerDay = 6;
}
