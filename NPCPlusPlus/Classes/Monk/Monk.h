#pragma once
#include "Character.h"
class Monk :
    public Character
{
private:
	int mChiPnts;
	int mMartialArtsDie;
	int mUnarmoredMovement;
public:
	Monk(int strength, int dexterity, int constitution, int intelligence, int wisdom, int charisma, int lvl, int hitDie, string name)
		: Character(strength, dexterity, constitution, intelligence, wisdom, charisma, lvl, hitDie, name)
	{
		DetermineChiPnts();
		DetermineMartialArtsDie();
		DetermineUnarmoredMovement();
	}

	int ChiPnts() const {
		return mChiPnts;
	}

	int MartialArts() const {
		return mMartialArtsDie;
	}

	int UnarmoredMove() const {
		return mUnarmoredMovement;
	}

	void DetermineChiPnts();
	void DetermineMartialArtsDie();
	void DetermineUnarmoredMovement();
};

