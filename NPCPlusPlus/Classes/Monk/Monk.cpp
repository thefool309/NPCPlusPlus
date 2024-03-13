#include "Monk.h"

void Monk::DetermineChiPnts()
{
	if (Lvl() < 2)
		mChiPnts = 0;
	else
		mChiPnts = Lvl();
}

void Monk::DetermineMartialArtsDie()
{
	if (Lvl() < 5)
		mMartialArtsDie = 4;
	else if (Lvl() >= 5 && Lvl() < 11)
		mMartialArtsDie = 6;
	else if (Lvl() >= 11 && Lvl() < 17)
		mMartialArtsDie = 8;
	else
		mMartialArtsDie = 10;
}

void Monk::DetermineUnarmoredMovement()
{
	if (Lvl() < 2)
		mUnarmoredMovement = 0;
	else if (Lvl() >= 2 && Lvl() < 6)
		mUnarmoredMovement = 10;
	else if (Lvl() >= 6 && Lvl() < 10)
		mUnarmoredMovement = 15;
	else if (Lvl() >= 10 && Lvl() < 14)
		mUnarmoredMovement = 20;
	else if (Lvl() >= 14 && Lvl() < 18)
		mUnarmoredMovement = 25;
	else
		mUnarmoredMovement = 30;
}
