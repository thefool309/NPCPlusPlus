#include "Helper.h"

void Helper::CopyString(const char* source, char*& destination)
{
	delete[] destination;	//ok to delete null

	size_t len = strlen(source) + 1; //account for null terminator '\0'
	destination = new char[len];
	strcpy_s(destination, len, source);	//copy from input to output
}

void Helper::ClearCin() {
	std::cin.clear();
	std::cin.ignore(10000, '\n');
}

int Helper::RandNumGen(int min, int max)
{
	srand(time(NULL));
	int result = (rand() % max) + min;
	return result;
}

void Helper::Print(std::string message)
{
	std::cout << message;
}

void Helper::PrintLine(std::string message)
{
	std::cout << message << "\n";
}

void Helper::PrintList(std::vector<std::string> list) {
	int iterator = 1;
	for (auto& item : list) {
		std::cout << iterator << ": " << item << "\n";
		iterator++;
	}
}

void Helper::PrintList(std::vector<int> list) {
	int iterator = 1;
	for (auto& item : list) {
		std::cout << iterator << ": " << item << "\n";
		iterator++;
	}
}

void Helper::PrintList(std::vector<double> list) {
	int iterator = 1;
	for (auto& item : list) {
		std::cout << iterator << ": " << item << "\n";
		iterator++;
	}
}

void Helper::PrintList(std::vector<float> list) {
	int iterator = 1;
	for (auto& item : list) {
		std::cout << iterator << ": " << item << "\n";
		iterator++;
	}
}

std::string Helper::StringInput(const char* promptText)
{
	std::cout << promptText << ": ";
	std::string result;						//recieve a string from the console
	std::getline(std::cin, result);
	return result;
}

std::string Helper::StringInput(const char* primeText, const char* promptText)
{
	std::cout << primeText << "\n";
	std::cout << promptText << ": ";
	std::string result;						//recieve a string from the console
	std::getline(std::cin, result);
	return result;
}

//GetValidatedInt and it's overloads

int Helper::GetValidatedInt(const char* promptText, int nMinimumRange, int nMaximumRange) {
	int result;
	bool invalidInput = true;


	do {
		std::cout << promptText << ": ";
		if (nMinimumRange == 0 && nMaximumRange == 0) {
			std::cin >> result;			//intake int from console
			if (!std::cin >> result) {		//if error is thrown
				PrintLine("Invalid Input!");
				invalidInput = true;
				ClearCin();
			}
			else {
				invalidInput = false;
				ClearCin();
			}
		}
		else {
			std::cin >> result;	//intake int from console
			if (!std::cin >> result) {		//if error is thrown
				PrintLine("Invalid Input!");
				invalidInput = true;
				ClearCin();
			}
			else {
				if (result < nMinimumRange || result > nMaximumRange) {
					std::string message = "Please keep it between " + std::to_string(nMinimumRange) + " & " + std::to_string(nMaximumRange);
					PrintLine(message);
					invalidInput = true;				//keep it between the min and max
					ClearCin();
				}
				else {
					invalidInput = false;
					ClearCin();
				}
			}
		}
	} while (invalidInput);
	return result;
}

int Helper::GetValidatedInt(const char* primeText, const char* promptText, int nMinimumRange, int nMaximumRange) {
	int result;
	bool invalidInput = true;


	do {
		std::cout << primeText << '\n';
		std::cout << promptText << ": ";
		if (nMinimumRange == 0 && nMaximumRange == 0) {
			std::cin >> result;			//intake int from console
			if (!std::cin >> result) {		//if error is thrown
				PrintLine("Invalid Input!");
				invalidInput = true;
				ClearCin();
			}
			else {
				invalidInput = false;
				ClearCin();
			}
		}
		else {
			std::cin >> result;	//intake int from console
			if (!std::cin >> result) {		//if error is thrown
				PrintLine("Invalid Input!");
				invalidInput = true;
				ClearCin();
			}
			else {
				if (result < nMinimumRange || result > nMaximumRange) {
					std::string message = "Please keep it between " + std::to_string(nMinimumRange) + " & " + std::to_string(nMaximumRange);
					PrintLine(message);
					invalidInput = true;				//keep it between the min and max
					ClearCin();
				}
				else {
					invalidInput = false;
					ClearCin();
				}
			}
		}
	} while (invalidInput);
	return result;
}

//GetValidatedUnsignedInt and overloads

unsigned int Helper::GetValidatedUnInt(const char* promptText, int nMinimumRange, int nMaximumRange) {
	unsigned int result;
	bool invalidInput = true;


	do {
		std::string input = StringInput(promptText);			//recieve the users input
		if (nMinimumRange == 0 && nMaximumRange == 0) {
			try
			{
				result = std::stoul(input);				//try to convert to integer
				invalidInput = false;
			}
			catch (...)
			{
				PrintLine("Invalid Input");		//catch with an invalid input message
			}
		}
		else {
			try
			{
				result = std::stoul(input);				//try to convert to integer
				if (result < nMinimumRange || result > nMaximumRange) {
					std::string message = "Please keep it between " + std::to_string(nMinimumRange) + " & " + std::to_string(nMaximumRange);
					PrintLine(message);
					invalidInput = true;				//keep it between the min and max
				}
				else {
					invalidInput = false;
				}
			}
			catch (...)
			{
				PrintLine("Invalid Input");		//catch with an invalid input message
			}
		}
	} while (invalidInput);
	return result;
}

unsigned int Helper::GetValidatedUnInt(const char* primeText, const char* promptText, int nMinimumRange, int nMaximumRange) {
	unsigned int result;
	bool invalidInput = true;


	do {
		std::string input = StringInput(primeText, promptText);			//recieve the users input
		if (nMinimumRange == 0 && nMaximumRange == 0) {
			try
			{
				result = std::stoul(input);				//try to convert to integer
				invalidInput = false;
			}
			catch (...)
			{
				PrintLine("Invalid Input");		//catch with an invalid input message
			}
		}
		else {
			try
			{
				result = std::stoul(input);				//try to convert to integer
				if (result < nMinimumRange || result > nMaximumRange) {
					std::string message = "Please keep it between " + std::to_string(nMinimumRange) + " & " + std::to_string(nMaximumRange);
					PrintLine(message);
					invalidInput = true;				//keep it between the min and max
				}
				else {
					invalidInput = false;
				}
			}
			catch (...)
			{
				PrintLine("Invalid Input");		//catch with an invalid input message
			}
		}
	} while (invalidInput);
	return result;
}

float Helper::GetValidatedFloat(const char* primeText, const char* promptText, float nMinimumRange, float nMaximumRange)
{
	float result;
	bool invalidInput = true;
	do {
		std::string input = StringInput(primeText, promptText);			//recieve the users input
		if (nMinimumRange == 0 && nMaximumRange == 0) {
			try
			{
				result = std::stof(input);				//try to convert to integer
				invalidInput = false;
			}
			catch (...)
			{
				PrintLine("Invalid Input");		//catch with an invalid input message
			}
		}
		else {
			try
			{
				result = std::stof(input);				//try to convert to integer
				if (result < nMinimumRange || result > nMaximumRange) {
					std::string message = "Please keep it between " + std::to_string(nMinimumRange) + " & " + std::to_string(nMaximumRange);
					PrintLine(message);
					invalidInput = true;				//keep it between the min and max
				}
				else {
					invalidInput = false;
				}
			}
			catch (...)
			{
				PrintLine("Invalid Input");		//catch with an invalid input message
			}
		}
	} while (invalidInput);
	return result;
}

float Helper::GetValidatedFloat(const char* promptText, float nMinimumRange, float nMaximumRange) {
	float result;
	bool invalidInput = true;
	do {
		std::string input = StringInput(promptText);			//recieve the users input
		if (nMinimumRange == 0 && nMaximumRange == 0) {
			try
			{
				result = std::stof(input);				//try to convert to integer
				invalidInput = false;
			}
			catch (...)
			{
				PrintLine("Invalid Input");		//catch with an invalid input message
			}
		}
		else {
			try
			{
				result = std::stof(input);				//try to convert to integer
				if (result < nMinimumRange || result > nMaximumRange) {
					std::string message = "Please keep it between " + std::to_string(nMinimumRange) + " & " + std::to_string(nMaximumRange);
					PrintLine(message);
					invalidInput = true;				//keep it between the min and max
				}
				else {
					invalidInput = false;
				}
			}
			catch (...)
			{
				PrintLine("Invalid Input");		//catch with an invalid input message
			}
		}
	} while (invalidInput);
	return result;
}


void Helper::DecToBinaryVector(unsigned int& numbie, std::vector<int>& binaryNum)
{
	for (int i = 31; i >= 0; i--) {
		int powResult = (int)std::pow(2, i);
		if ((numbie & powResult) != 0) {		//and the two numbers together
			binaryNum.push_back(1);			//if it doesnt equal 0 result is 1
		}
		else {
			binaryNum.push_back(0);		//else result is 0
		}
	}
}

void Helper::DecToBinaryString(unsigned int& numbie, std::string& binNumbie) {
	for (int i = 31; i >= 0; i--) {
		int powResult = (int)std::pow(2, i);
		if ((numbie & powResult) != 0) {		//and the two numbers together
			binNumbie.append("1");				 //if it doesnt equal 0 result is 1
		}
		else {
			binNumbie.append("0");						//else result is 0
		}
	}
}

void Helper::PrintBinVector(unsigned int& numbie)
{
	std::vector<int> binaryNum;	//storage for the binaryNum
	DecToBinaryVector(numbie, binaryNum);	//convert num
	int iterator = 1;
	for (int i = 0; i < binaryNum.size(); i++) {

		std::cout << binaryNum[i];	//print num
		if (iterator % 4 == 0) {
			std::cout << " ";
		}
		iterator++;
	}
}

void Helper::PrintBinString(unsigned int& numbie) {
	std::string binNumbie;
	int iterator = 1;
	DecToBinaryString(numbie, binNumbie);
	for (int i = 0; i < binNumbie.length(); i++) {

		std::cout << binNumbie[i];	//print num
		if (iterator % 4 == 0) {
			std::cout << " ";
		}
		iterator++;
	}
}

int Helper::PrintMenu(std::vector<std::string>& menuOptions) {
	for (int i = 0; i < menuOptions.size(); i++) {							//print a menu with a vector of menu options
		std::cout << "[" << i + 1 << "]" << "\t" << menuOptions.at(i) << '\n';
	}
	int result = GetValidatedInt("Choice", 1, menuOptions.size());
	return result;
}

std::string Helper::DecToHex(int& numbie) {
	std::ostringstream hexStream;	//string stream
	hexStream << "0x" << std::setfill('0') << std::setw(8) << std::hex << numbie;	//convert number to hex and add fill characters
	std::string result = hexStream.str();		//convert to string
	return result;
}

void Helper::PrintHex(int numbie) {
	std::string result = DecToHex(numbie);		//print int as hex
	std::cout << result;
}

void Helper::PauseConsole()
{
	Print("Press any key to continue...");		//pauses our console for a moment
	ClearCin();
}

void Helper::ClearConsole()
{
	PauseConsole();
	std::cout << "\x1b[H\x1b[2J"; //special string to clear the console
}

bool Helper::IsPrefix(std::string prefix, std::string comp)
{
	bool prefixIs = false;
	std::transform(prefix.begin(), prefix.end(), prefix.begin(), ::tolower); //transform all to lower for case insensitivity
	std::transform(comp.begin(), comp.end(), comp.begin(), ::tolower);
	int found = comp.find(prefix); //returns position of prefix in comp (if found==0) than it is prefix else not. 
	if (found == 0) {
		prefixIs = true;
	}
	return prefixIs;
}