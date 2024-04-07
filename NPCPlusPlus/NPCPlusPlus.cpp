// NPCPlusPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
///<summary>
///Welcome to NPC++, A Dungeons and Dragons 5e NPC stat generator
///this is licensed under the Unlicense
///You have full permission to download, change, and redistribute this code 
///I have no affiliations with any repos or forks of NPC aside from 
///thefool309/NPCplusplus and it's original repo on my deadname github
///Happy Adventures and Happy Coding!
/// </summary>

#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <limits>

#include "Barbarian.h"
#include "Bard.h"
#include "Character.h"
#include "Cleric.h"
#include "Druid.h"
#include "Fighter.h"
#include "Warlock.h"
#include "Wizard.h"
#include "Utils.h"
#include "UI.h"
#include "Helper.h"
#include "enums.h"
#include "Structs.h"

using namespace std;

int main()
{
	Utils::GenerateNPC();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file