#include "UI.h"

using namespace std;

std::string UI::GetString(std::string primeText, std::string promptText)
{
	string result;
	cout << primeText << "\n"
		<< promptText;
	getline(cin, result);
	return result;
}

int UI::VerifyIntegerInput(int userInputMin, int userInputMax, string primeText, string promptText)
{
	int result = 0;
	while (result < userInputMin || result > userInputMax) //while result is less than or equal to min or greater than max
	{										//recieve input from the user
		result = UI::RecieveIntegerInput(primeText, promptText);
		if (result < userInputMin || result > userInputMax) {	//if condition is still true 
			cout << "Try again! \n";   //inform the user to try again
		}
		else {	//otherwise Inform the user to move forward
			cout << "Please move forward to the next step \n";
		}
	}
	return result;
}

void UI::ClearConsole()
{
	cout << "Press any key to continue...";
	cin.get();
	cout << "\x1B[2J\x1B[H"; //Special string that clears the screen and moves the cursor to the top-left
}

void UI::IntakeAbilityScore(int abilityScoreMin, int abilityScoreMax, int& ability, std::string asPrimeText, std::string asPromptText)
{
	ability = UI::VerifyIntegerInput(abilityScoreMin, abilityScoreMax, asPrimeText, asPromptText); // strength
}

void UI::TakeAllAbilityScores(int& str, int& dex, int& con, int& wis, int& intel, int& cha)
{
	string asPrimeText = "please assign this score";
	string strPromptText = "          STR: ";
	string dexPromptText = "          DEX: ";
	string conPromptText = "          CON: ";
	string intPromptText = "          INT: ";
	string wisPromptText = "          WIS: ";
	string chaPromptText = "          CHA: ";
	IntakeAbilityScore(AS_MIN_INPUT, AS_MAX_INPUT, str, asPrimeText, strPromptText);
	IntakeAbilityScore(AS_MIN_INPUT, AS_MAX_INPUT, dex, asPrimeText, dexPromptText);
	IntakeAbilityScore(AS_MIN_INPUT, AS_MAX_INPUT, con, asPrimeText, conPromptText);
	IntakeAbilityScore(AS_MIN_INPUT, AS_MAX_INPUT, intel, asPrimeText, intPromptText);
	IntakeAbilityScore(AS_MIN_INPUT, AS_MAX_INPUT, wis, asPrimeText, wisPromptText);
	IntakeAbilityScore(AS_MIN_INPUT, AS_MAX_INPUT, cha, asPrimeText, chaPromptText);
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