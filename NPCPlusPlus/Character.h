#pragma once
#include <string>
#include <vector>

#include "TheDiceBag.h"

using namespace std;

class Character
{

		//character info
		string mCharacterName;

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
		int mHitDie = 0;
		//physical attack modifiers
		int mStrAttackMod = 0;
		int mDexAttackMod = 0;

		int mLvl = 0;
		//saving Throws

		bool mSaveProfCha = false;

		//default constructor
		Character() {
			mCharacterName = "Your Name Here";

			mStrength = 10;
			mDexterity = 10;
			mConstitution = 10;
			mWisdom = 10;
			mIntelligence = 10;
			mCharisma = 10;

			DetermineBonuses();

			mProfBonus = 2;

			mArmorClass = 10 + mDexBonus;
			mHitDie = 4;
			mHitPoints = Dice::RollHP(mHitDie, mLvl, mConBonus);

			mStrAttackMod = mStrBonus + mProfBonus;
			mDexAttackMod = mDexBonus + mProfBonus;
		}
		//parameter constructor

		Character(int strength,
				  int dexterity,
				  int constitution,
			      int intelligence,
				  int wisdom,
				  int charisma,
				  int profBonus) : 
				  mStrength(strength),
				  mDexterity(dexterity),
				  mConstitution(constitution),
				  mIntelligence(intelligence),
				  mWisdom(wisdom),
				  mCharisma(charisma) {

					DetermineBonuses();

					mArmorClass = 10 + mDexBonus;
					mHitDie = 4;
					mHitPoints = Dice::RollHP(mHitDie, mLvl, mConBonus);

					mStrAttackMod = mStrBonus + mProfBonus;
					mDexAttackMod = mDexBonus + mProfBonus;
		}
		int Str() const {
			return mStrength;
		}

		int Dex() const {
			return mDexterity;
		}

		int Con() const {
			return mConstitution;
		}

		int Wis() const {
			return mWisdom;
		}

		int Intel() const {
			return mIntelligence;
		}

		int Cha() const {
			return mCharisma;
		}

		int ArmorClass() const {
			return mArmorClass;
		}

		string Name() const {
			return mCharacterName;
		}

		void Str(int input) {
			mStrength = input;
		}

		void Dex(int input) {
			mDexterity = input;
		}

		void Con(int input) {
			mConstitution = input;
		}

		void Intel(int input) {
			mIntelligence = input;
		}

		void Wis(int input) {
			mWisdom = input;
		}

		void Cha(int input) {
			mCharisma = input;
		}

		void ArmorClass(int newArmorClass) {
			mArmorClass = newArmorClass;
		}

		void Name(string newName) {
			mCharacterName = newName;
		}

		void DetermineBonuses();




};

