#include <string>
#include <vector>

#include "TheDiceBag.h"

using namespace std;
class Character {
	//character info
	string characterName;

	//ability scores
	int mStrength = 10;
	int mDexterity = 10;
	int mConstitution = 10;
	int mWisdom = 10;
	int mIntelligence = 10;
	int mCharisma = 10;

	//bonuses related to each ability score
	int mStrBonus = 0;
	int mDexBonus = 0;
	int mConBonus = 0;
	int mWisBonus = 0;
	int mIntBonus = 0;
	int mChaBonus = 0;
	//prof bonus
	int mProfBonus = 0;
	//defensive stats
	int mArmorClass = 0;
	int mHitPoints = 0;
	
	//physical attack modifiers
	int mStrAttackMod = 0;
	int mDexAttackMod = 0;
	
	//saving Throws
	int mSavingThrowStr = 0;
	int mSavingThrowDex = 0;
	int mSavingThrowCon = 0;
	int mSavingThrowWis = 0;
	int mSavingThrowInt = 0;
	int mSavingThrowCha = 0;

	//saving throw proficiency
	bool mSaveProfStr = false;
	bool mSaveProfDex = false;
	bool mSaveProfCon = false;
	bool mSaveProfWis = false;
	bool mSaveProfInt = false;
	bool mSaveProfCha = false;

	//Saving throw proficiency vector

	//skill proficiencies
	

	//default constructor
	Character() {
		mStrength = 10;
		mDexterity = 10;
		mConstitution = 10;
		mWisdom = 10;
		mIntelligence = 10;
		mCharisma = 10;

		mStrBonus = Dice::ASModifier(mStrength);
		mDexBonus = Dice::ASModifier(mDexterity);
		mConBonus = Dice::ASModifier(mConstitution);
		mWisBonus = Dice::ASModifier(mWisdom);
		mIntBonus = Dice::ASModifier(mIntelligence);
		mChaBonus = Dice::ASModifier(mCharisma);

		mProfBonus = 2;

		mArmorClass = 10 + mDexBonus;
		mHitPoints = 4;

		mSaveProfStr = false;
		mSaveProfDex = false;
		mSaveProfCon = false;
		mSaveProfWis = false;
		mSaveProfInt = false;
		mSaveProfCha = false;

		mSavingThrowStr = 0;
		mSavingThrowDex = 0;
		mSavingThrowCon = 0;
		mSavingThrowWis = 0;
		mSavingThrowInt = 0;
		mSavingThrowCha = 0;

		mStrAttackMod = mStrBonus + mProfBonus;
		mDexAttackMod = mDexBonus + mProfBonus;

	}

	int GetStr() {
		return mStrength;
	}

	int GetDex() {
		return mDexterity;
	}

	int GetCon() {
		return mConstitution;
	}

	int GetWis() {
		return mWisdom;
	}

	int GetIntel() {
		return mIntelligence;
	}

	int GetCha() {
		return mCharisma;
	}
};