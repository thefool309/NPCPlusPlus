#include "Fighter.h"

void Fighter::DetermineFighterFeatures()
{	
	//action surge
	if (Lvl() < 2) {
		mActionSurge = 0;
	}
	else if (Lvl() >= 2 && Lvl() < 17) {
		mActionSurge = 1;
	}
	else if (Lvl() >= 17 && Lvl() < 20) {
		mActionSurge = 2;
	}
	else {
		mActionSurge = 3;
	}
	//extra attack
	if (Lvl() < 5) {
		mExtraAttack = 0;
	}
	else if (Lvl() >= 5 && Lvl() < 11) {
		mExtraAttack = 1;
	}
	else if (Lvl() >= 11 && Lvl() < 20) {
		mExtraAttack = 2;
	}
	else {
		mExtraAttack = 3;
	}
	//Indominatable
	if (Lvl() < 9) {
		mIndominatable = 0;
	}
	else if (Lvl() >= 9 && Lvl() < 13) {
		mIndominatable = 1;
	}
	else if (Lvl() >= 13 && Lvl() < 17) {
		mIndominatable = 2;
	}
	else {
		mIndominatable = 3;
	}

}
