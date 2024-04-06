#pragma once
#include "Character.h"
#include "Utils.h"
#include "Helper.h"
class Ranger :
    public Character
{
private:
    std::vector<SpellSlots> mSpellSlots;
    std::string mFavouredEnemy;
public:
    //constructor
    Ranger(int strength, int dexterity, int constitution, int intelligence, int wisdom, int charisma, int lvl, int hitDie, string name)
        : Character(strength, dexterity, constitution, intelligence, wisdom, charisma, lvl, hitDie, name)
    {
        SpellStats();
        FavouredEnemy();
        IsCaster(true);
    }
    //accessors
    std::vector<SpellSlots> SpellSlots() const { return mSpellSlots; }

    //mutators
    void SpellStats();
    void FavouredEnemy();
};

