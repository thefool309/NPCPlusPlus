#pragma once
#include <string>
#include <vector>

#include "TheDiceBag.h"

using namespace std;

class Character
{
private:
		//character info
		string mCharacterName;

		//ability scores
		int mStrength;
		int mDexterity;
		int mConstitution;
		int mWisdom;
		int mIntelligence;
		int mCharisma;

		//bonuses related to each ability score
		int mStrBonus;
		int mDexBonus;
		int mConBonus;
		int mWisBonus;
		int mIntBonus;
		int mChaBonus;
		//prof bonus
		int mProfBonus;
		//defensive stats
		int mArmorClass;
		int mHitPoints;
		int mHitDie;
		//physical attack modifiers
		int mStrAttackMod;
		int mDexAttackMod;

		int mSpellSaveDc;
		int mSpellAttack;

		int mLvl;

		bool mIsCaster;
public:
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
			mLvl = 1;

			mArmorClass = 10 + mDexBonus;
			mHitDie = 4;
			mHitPoints = Dice::RollHP(mHitDie, mLvl, mConBonus);

			mStrAttackMod = mStrBonus + mProfBonus;
			mDexAttackMod = mDexBonus + mProfBonus;
			mSpellSaveDc = 8 + mWisBonus + mProfBonus;
			mSpellAttack = mWisBonus + mProfBonus;
			mIsCaster = false;
		}
		//parameter constructor

		Character(int strength, int dexterity, int constitution, int intelligence, int wisdom, int charisma, int lvl, int hitDie, string name) :
				  mStrength(strength), mDexterity(dexterity), mConstitution(constitution), mIntelligence(intelligence), mWisdom(wisdom), mCharisma(charisma), mLvl(lvl), mHitDie(hitDie), mCharacterName(name)
		{

			DetermineBonuses();
			DetermineProfBonus();
			mArmorClass = 10 + mDexBonus;
			mHitPoints = Dice::RollHP(mHitDie, mLvl, mConBonus);

			mStrAttackMod = mStrBonus + mProfBonus;
			mDexAttackMod = mDexBonus + mProfBonus;
			mSpellSaveDc = 8 + mWisBonus + mProfBonus;
			mSpellAttack = mWisBonus + mProfBonus;
			mIsCaster = false;
		}
		//getters
		int Str() const {
			return mStrength;
		}

		int StrBonus() const {
			return mStrBonus;
		}

		int Dex() const {
			return mDexterity;
		}
		
		int DexBonus() const {
			return mDexBonus;
		}

		int Con() const {
			return mConstitution;
		}

		int ConBonus() const {
			return mConBonus;
		}

		int Wis() const {
			return mWisdom;
		}

		int WisBonus() const {
			return mWisBonus;
		}

		int Intel() const {
			return mIntelligence;
		}

		int IntelBonus() const {
			return mIntBonus;
		}

		int Cha() const {
			return mCharisma;
		}

		int ChaBonus() const {
			return mChaBonus;
		}

		int Lvl() const {
			return mLvl;
		}

		int ArmorClass() const {
			return mArmorClass;
		}

		int HitDie() const {
			return mHitDie;
		}

		int HitPoints() const {
			return mHitPoints;
		}
		
		int StrAttack() const {
			return mStrAttackMod;
		}

		int DexAttack() const {
			return mDexAttackMod;
		}

		bool IsCaster() const {
			return mIsCaster;
		}

		string Name() const {
			return mCharacterName;
		}

		

		//setters
		void Str(int newStrength) {
			mStrength = newStrength;
		}

		void Dex(int newDexterity) {
			mDexterity = newDexterity;
		}

		void Con(int newConstitution) {
			mConstitution = newConstitution;
		}

		void Intel(int newIntelligence) {
			mIntelligence = newIntelligence;
		}

		void Wis(int newWisdom) {
			mWisdom = newWisdom;
		}

		void Cha(int newCharisma) {
			mCharisma = newCharisma;
		}

		void ArmorClass(int newArmorClass) {
			mArmorClass = newArmorClass;
		}

		void HitDie(int newHitDie) {
			mHitDie = newHitDie;
		}

		void HitPoints(int newHitPoints) {
			mHitPoints = newHitPoints;
		}

		void Name(string newName) {
			mCharacterName = newName;
		}


		//various behaviors for the character object
		void DetermineBonuses();
		void DetermineProfBonus();
		void LvlUp();




};

