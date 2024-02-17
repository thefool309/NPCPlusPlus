#include <ctime>
#include <cmath>
#include <iostream>
#include <string>
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
			catch (...) {
				cout << "Try again! \n";
			}
		}
		return result;				//return result
	}
