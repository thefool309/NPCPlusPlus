#pragma once
#include <string>
#include <vector>

#include "TheDiceBag.h"

using namespace std;

class Character
{

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
		int mHitDie = 0;
		//physical attack modifiers
		int mStrAttackMod = 0;
		int mDexAttackMod = 0;

		int mLvl = 0;
		//saving Throws

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
			mHitDie = 4;
			mHitPoints = Dice::RollHP(mHitDie, mLvl, mConBonus);

			mStrAttackMod = mStrBonus + mProfBonus;
			mDexAttackMod = mDexBonus + mProfBonus;

		}
		//parameter constructor

		Character(int strength,
			int dexterity,
			int constitution,
			int wisdom,
			int intelligence,
			int charisma,
			int profBonus) : mStrength(strength),
			mDexterity(dexterity),
			mConstitution(constitution),
			mIntelligence(intelligence),
			mWisdom(wisdom),
			mCharisma(charisma) {
			mStrBonus = Dice::ASModifier(mStrength);
			mDexBonus = Dice::ASModifier(mDexterity);
			mConBonus = Dice::ASModifier(mConstitution);
			mWisBonus = Dice::ASModifier(mWisdom);
			mIntBonus = Dice::ASModifier(mIntelligence);
			mChaBonus = Dice::ASModifier(mCharisma);

			mArmorClass = 10 + mDexBonus;
			mHitDie = 4;
			mHitPoints = Dice::RollHP(mHitDie, mLvl, mConBonus);

			mStrAttackMod = mStrBonus + mProfBonus;
			mDexAttackMod = mDexBonus + mProfBonus;
		}
		int GetStr() const {
			return mStrength;
		}

		int GetDex() const {
			return mDexterity;
		}

		int GetCon() const {
			return mConstitution;
		}

		int GetWis() const {
			return mWisdom;
		}

		int GetIntel() const {
			return mIntelligence;
		}

		int GetCha() const {
			return mCharisma;
		}

		int GetArmorClass() const {

		}

		void SetStr(int input) {
			mStrength = input;
		}

		void SetDex(int input) {
			mDexterity = input;
		}

		void SetCon(int input) {
			mConstitution = input;
		}

		void SetIntel(int input) {
			mIntelligence = input;
		}

		void SetWis(int input) {
			mWisdom = input;
		}

		void SetCha(int input) {
			mCharisma = input;
		}

		void DetermineBonuses() {
			mStrBonus = Dice::ASModifier(mStrength);
			mDexBonus = Dice::ASModifier(mDexterity);
			mConBonus = Dice::ASModifier(mConstitution);
			mWisBonus = Dice::ASModifier(mWisdom);
			mIntBonus = Dice::ASModifier(mIntelligence);
			mChaBonus = Dice::ASModifier(mCharisma);
		}




};

