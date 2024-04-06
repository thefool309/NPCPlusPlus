#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <random>
#include <sstream>

namespace Helper {

	void CopyString(const char* source, char*& destination);
	
	void ClearCin();
	
	int RandNumGen(int min, int max);

	void Print(std::string message);

	void PrintLine(std::string message);

	void PrintList(std::vector<std::string> list);

	void PrintList(std::vector<int> list);

	void PrintList(std::vector<double> list);

	void PrintList(std::vector<float> list);

	std::string StringInput(const char* promptText);

	std::string StringInput(const char* primeText, const char* promptText);

	//GetValidatedInt and it's overloads

	int GetValidatedInt(const char* promptText, int nMinimumRange = 0, int nMaximumRange = 0);
	
	int GetValidatedInt(const char* primeText, const char* promptText, int nMinimumRange = 0, int nMaximumRange = 0);

	//GetValidatedUnsignedInt and overloads

	unsigned int GetValidatedUnInt(const char* promptText, int nMinimumRange = 0, int nMaximumRange = 0);
	
	unsigned int GetValidatedUnInt(const char* primeText, const char* promptText, int nMinimumRange = 0, int nMaximumRange = 0);

	float GetValidatedFloat(const char* primeText, const char* promptText, float nMinimumRange = 0, float nMaximumRange = 0);

	float GetValidatedFloat(const char* promptText, float nMinimumRange, float nMaximumRange);

	void DecToBinaryVector(unsigned int& numbie, std::vector<int>& binaryNum);

	void DecToBinaryString(unsigned int& numbie, std::string& binNumbie);

	void PrintBinVector(unsigned int& numbie);

	void PrintBinString(unsigned int& numbie);

	int PrintMenu(std::vector<std::string>& menuOptions);
	
	std::string DecToHex(int& numbie);

	void PrintHex(int numbie);

	void PauseConsole();

	void ClearConsole();

	bool IsPrefix(std::string prefix, std::string comp);
}