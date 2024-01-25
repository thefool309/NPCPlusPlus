#include <ctime>
#include <cmath>
#include <iostream>

using namespace std;
class Dice {
public:
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
class UI
{
public:
	static int RecieveIntegerInput(string primeText, string promptText) {
		int result;
		cout << primeText << endl;
		cout << promptText;
		cin >> result;
		cout << endl;
		return result;
	}

	static void ClearConsole() {
		cin.get();
		cout << "\x1B[2J\x1B[H"; //Special string that clears the screen and moves the cursor to the top-left
	}
private:

};
