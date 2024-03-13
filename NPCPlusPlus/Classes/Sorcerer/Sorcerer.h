#pragma once
#include "Character.h"
#include "Structs.h"
class Sorcerer :
    public Character
{
private:
    int mSorceryPoints;
    vector<SpellSlots> mSpellSlots;
    int mSpellsKnown;
    int mCantripsKnown;
public:

    Sorcerer(int strength, int dexterity, int constitution, int intelligence, int wisdom, int charisma, int lvl, int hitDie, string name)
        : Character(strength, dexterity, constitution, intelligence, wisdom, charisma, lvl, hitDie, name)
    {
        DetermineSpellStats();
        DetermineSorcPnts();
    }

    int SorceryPoints() const {
        return mSorceryPoints;
    }

    vector<SpellSlots> GetSpellSlots() {
        return mSpellSlots;
    }

    int SpellsKnown() const {
        return mSpellsKnown;
    }

    int Cantrips() const {
        return mCantripsKnown;
    }

    void DetermineSpellStats();
    void DetermineSorcPnts();


};

