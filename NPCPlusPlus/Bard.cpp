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
