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

void Character::Print()
{
	std::cout << "these are your final scores:" << std::endl
		<< std::setw(10) << "STR:" << std::setw(3) << Str() << setw(3)
		<< "  STR Bonus: " << std::setw(3) << StrBonus() << endl

		<< setw(10) << "DEX:" << setw(3) << Dex() << setw(3)
		<< "  DEX Bonus: " << setw(3) << DexBonus() << endl

		<< setw(10) << "CON:" << setw(3) << Con() << setw(3)
		<< "  CON Bonus: " << setw(3) << ConBonus() << endl

		<< setw(10) << "INT:" << setw(3) << Intel() << setw(3)
		<< "  INT Bonus: " << setw(3) << IntelBonus() << endl

		<< setw(10) << "WIS:" << setw(3) << Wis() << setw(3)
		<< "  WIS Bonus: " << setw(3) << WisBonus() << endl

		<< setw(10) << "CHA:" << setw(3) << Cha() << setw(3)
		<< "  CHA Bonus: " << setw(3) << ChaBonus() << endl;

	std::cin.get();

	cout << "These are your attack bonuses: " << endl
		<< "STR based Attack Bonus: " << StrAttack() << endl
		<< "DEX based Attack Bonus: " << DexAttack() << endl;
	if (IsCaster()) {
		cout << "Your Spell attack bonus: " << SpellAttack() << endl
			<< "Your Spell Save DC: " << SpellSave() << endl;
	}
	cin.get();

	cout << endl << "Your HitPoints: " << HitPoints() << endl;

	cout << "Press any key to continue...";

	cin.get();
}



