#include <ctime>
#include <cmath>
#include <iostream>
/// <summary>
/// This is the dicebag. 
/// Where we store our most useful tools as dungeon master.
/// Use it wisely, these are already employed through the program
/// </summary>
using namespace std;
class Dice {
public:
	static int ASModifier(int abilityScore) {
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
};

class UI
{
public:
	static int VerifyIntegerInput(int userInputMin, int userInputMax , string primeText, string promptText) {
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

	static void ClearConsole() {
		cin.get();
		cout << "\x1B[2J\x1B[H"; //Special string that clears the screen and moves the cursor to the top-left
	}
private:
	static int RecieveIntegerInput(string primeText, string promptText) {
		int result;					//declare integer result
		cout << primeText << endl;	//print primeText
		cout << promptText;			//print promptText
		cin >> result;				//intake result
		cout << endl;				//endline
		return result;				//return result
	}
};
