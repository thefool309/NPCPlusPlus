#pragma once
struct SpellSlots {
	int mLevel;
	int mNumberOfSlots;

	SpellSlots() : mLevel(1), mNumberOfSlots(2) 
	{
	}

	SpellSlots(int level, int numberOfSlots) : mLevel(level), mNumberOfSlots(numberOfSlots) 
	{
	}
};
