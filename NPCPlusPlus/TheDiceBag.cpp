#include <ctime>
#include <cmath>
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include "TheDiceBag.H"


/// <summary>
/// This is the dicebag. 
/// Where we store our most useful tools as dungeon master.
/// Use it wisely, these are already employed through the program
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



	int UI::VerifyIntegerInput(int userInputMin, int userInputMax, string primeText, string promptText)
	{
		int result = 0;
		while (result <= userInputMin || result > userInputMax) //while result is less than or equal to min or greater than max
		{										//recieve input from the user
			result = UI::RecieveIntegerInput(primeText, promptText);
			if (result <= userInputMin || result > userInputMax) {	//if condition is still true 
				cout << "Try again! \n";   //inform the user to try again
			}
			else {	//otherwise Inform the user to move forward
				cout << "Good Job! Please move forward to the next step \n";
			}
		}
		return result;
	}

	void UI::ClearConsole()
	{
		cin.get();
		cout << "\x1B[2J\x1B[H"; //Special string that clears the screen and moves the cursor to the top-left
	}

	void UI::IntakeAbilityScore(int abilityScoreMin, int abilityScoreMax, int& ability, int& bonus, std::string asPrimeText, std::string asPromptText)
	{
		ability = UI::VerifyIntegerInput(abilityScoreMin, abilityScoreMax, asPrimeText, asPromptText); // strength
		bonus = Dice::ASModifier(ability);
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
			return std::vector<int>();
		}
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

		void UI::TakeAllAbilityScores(int& str, int& dex, int& con, int& wis, int& intel, int& cha, int& strBonus, int& dexBonus, int& conBonus, int& intBonus, int& wisBonus, int& chaBonus)
		{
			string asPrimeText = "please assign this score";
			string strPromptText = "          STR: ";
			string dexPromptText = "          DEX: ";
			string conPromptText = "          CON: ";
			string intPromptText = "          INT: ";
			string wisPromptText = "          WIS: ";
			string chaPromptText = "          CHA: ";
			IntakeAbilityScore(AS_MIN_INPUT, AS_MAX_INPUT, str, strBonus, asPrimeText, strPromptText);
			IntakeAbilityScore(AS_MIN_INPUT, AS_MAX_INPUT, dex, dexBonus, asPrimeText, dexPromptText);
			IntakeAbilityScore(AS_MIN_INPUT, AS_MAX_INPUT, con, conBonus, asPrimeText, conPromptText);
			IntakeAbilityScore(AS_MIN_INPUT, AS_MAX_INPUT, intel, intBonus, asPrimeText, intPromptText);
			IntakeAbilityScore(AS_MIN_INPUT, AS_MAX_INPUT, wis, wisBonus, asPrimeText, wisPromptText);
			IntakeAbilityScore(AS_MIN_INPUT, AS_MAX_INPUT, cha, chaBonus, asPrimeText, chaPromptText);
		}
	}

	int UI::RecieveIntegerInput(string primeText, string promptText)
	{
		int result;					//declare integer result
		string input;

		bool inputIsInt = false;
		while (!inputIsInt) {
			cout << primeText << endl;	//print primeText
			cout << promptText;			//print promptText
			getline(cin, input);				//intake result
			cout << endl;		//endline
			try {
				result = stoi(input);
				inputIsInt = true;
			}
			}
		}
		return result;				//return result
	}
