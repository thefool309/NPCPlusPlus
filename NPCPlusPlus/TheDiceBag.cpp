#include <ctime>
#include <cmath>

class Dice {
public:
	static int AbilityScores() {
		int abilityScore;
		int ASmaxValue = 18;
		int ASminValue = 9;
		srand(time(0));
		abilityScore = rand() % (ASmaxValue - ASminValue + 1) + ASminValue;
		return abilityScore;
	}
	
	static int Hitpoints(int maxHitDie, int numberOfDice) {
		srand(time(0));
		int minHitDie = 3;
		int hitpoints = 0;
		int hitpointsArray[30];
		for (int i = 0; i <= numberOfDice; i++) {
			hitpointsArray[i] = rand() % (maxHitDie - minHitDie + 1) + minHitDie;
			hitpoints = hitpoints + hitpointsArray[i];
		};
		return hitpoints;
		
	}
};