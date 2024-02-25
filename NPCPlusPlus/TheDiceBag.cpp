#include <ctime>
#include <cmath>
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include "TheDiceBag.H"
/// <summary>
/// This is the dicebag. 
/// Where we store our most useful tools as dungeon master.
/// Use it wisely, these are already employed through the program.
/// The UI and Dice class will be defined here
/// </summary>
using namespace std;

	int Dice::ASModifier(int abilityScore) {
		int ASBonus;		//this is an if else if statement to determine
		if (abilityScore <= 9)	// the Bonus related to ability scores
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

	int Dice::RollHP(int maxHitDie, int numberOfDice, int conBonus)
	{
		int hitpoints = maxHitDie + conBonus; // define hitpoints at first level
		int hpPerLvl; //declare hpPerLvl this will be the hp increase per level
		if (maxHitDie > 0 && maxHitDie <= 6) { // to remove room for user error 
			hpPerLvl = 4;				     // these conditions are defined in a range 1-6
		}
		else if (maxHitDie > 6 && maxHitDie <= 8) { // range 6-8
			hpPerLvl = 5;
		}
		else if (maxHitDie > 8 && maxHitDie <= 10) { //range 8-10
			hpPerLvl = 6;
		}
		else {										 //anything other than these values will result
			hpPerLvl = 7;							 // in hpPerLvl at max value of 7
		}

		//generate hitpoints with this loop
		for (int i = 1; i < numberOfDice; i++) { // while i is less than the number of hitdice
			hitpoints = hitpoints += (conBonus + hpPerLvl); // add conbonus and hpPerLvl to hitpoints
		}
		return hitpoints;
	}

	std::vector<int> Dice::RollAS() {

		std::cout << "Rolling your ability scores..." << endl;
		vector<int> result;
		const int ASmaxValue = 18; // ability score max value
		const int ASminValue = 8; //ability score min value
		for (int i = 0; i < 6; i++) {
			srand(time(NULL)); // seed for rand
			int ASroll = rand() % (ASmaxValue - ASminValue + 1) + ASminValue; //roll a score
			result.push_back(ASroll); //add the score to the result vector
			chrono::seconds duration(1); //duration of pause is for one second to ensure a new seed
			this_thread::sleep_for(duration); //sleep for duration
			if (i == 0) {
				cout << "rolling your " << (i + 1) << "st score" << endl; //print the ability score that's being rolled
			}
			else if (i == 1) {
				cout << "rolling your " << (i + 1) << "nd score" << endl;
			}
			else if (i == 2) {
				cout << "rolling your " << (i + 1) << "rd score" << endl;
			}
			else if (i == 5) {
				cout << "rolling your " << (i + 1) << "th score" << endl;
				chrono::seconds duration(1); //duration of pause is for one second 
				this_thread::sleep_for(duration); //sleep for duration
				cout << "\x1B[2J\x1B[H"; //special string for clearing the console
			}
			else {
				cout << "rolling your " << (i + 1) << "th score" << endl;
			}
		}
		return result;
	}

	
