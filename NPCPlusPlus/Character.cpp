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
