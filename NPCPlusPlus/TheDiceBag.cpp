#include <ctime>
#include <cmath>

class Dice {
public:
	static int Hitpoints(int maxHitDie, int numberOfDice, int conBonus) {
		srand(time(NULL));
		int minHitDie = 3;
		int hitpoints = 0;
		int hitpointsArray[30];
		for (int i = 0; i <= numberOfDice; i++) {
			hitpointsArray[i] = rand() % (maxHitDie - minHitDie + 1) + minHitDie;
			hitpoints = hitpoints + conBonus + hitpointsArray[i];
		};
		return hitpoints;
	}
	static int ASModifier(int abilityScore) {
		int ASBonus;
		if (abilityScore <= 9)
			ASBonus = -1;
		else if (abilityScore <= 11)
			ASBonus = 0;
		else if (abilityScore <= 13)
			ASBonus = 1;
		else if (abilityScore <= 15)
			ASBonus = 2;
		else if (abilityScore <= 17)
			ASBonus = 3;
		else if (abilityScore <= 19)
			ASBonus = 4;
		else
			ASBonus = 5;

		return ASBonus;
	}
};