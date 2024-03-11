#include "Character.h"

void Character::DetermineBonuses()
{
	mStrBonus = Dice::ASModifier(mStrength);
	mDexBonus = Dice::ASModifier(mDexterity);
	mConBonus = Dice::ASModifier(mConstitution);
	mWisBonus = Dice::ASModifier(mWisdom);
	mIntBonus = Dice::ASModifier(mIntelligence);
	mChaBonus = Dice::ASModifier(mCharisma);
}

void Character::DetermineProfBonus()
{
	if (mLvl < 5)
		mProfBonus = 2;
	else if (mLvl >= 5 && mLvl < 9)
		mProfBonus = 3;
	else if (mLvl >= 9 && mLvl < 13)
		mProfBonus = 4;
	else if (mLvl >= 13 && mLvl < 17)
		mProfBonus = 5;
	else
		mProfBonus = 6;
}

void Character::LvlUp()
{
	mLvl++;
	mHitPoints = Dice::RollHP(mHitDie, mLvl, mConBonus);
	DetermineProfBonus();
}



