#include <fstream>
#include <iostream>
#include <string>
#include <cassert> //c-assert

int main()
{
	int numerator = 123;
	int denominator{};
	
	std::cout << "Enter a denominator to divide: " << numerator << " by:\n";
	std::cin >> denominator;
	assert(denominator != 0);

	std::cout << numerator << " divided by :" << denominator << " = " << (numerator / denominator) << "\n";

	std::string filename = "sadkoasefew.txt";
	std::ifstream fin(filename);

	//later we will talking about "throwing exceptions"
	//this invlolves keywords
	//if throw catch
	
	if (!fin.is_open())
	{
		std::cout << "File not found:(\n";
		return -1; //"early return"
	}

	std::string lineInTheFile;
	std::getline(fin, lineInTheFile);

	std::cout << "The line in the file is:\n";
	std::cout << lineInTheFile << "\n";
	return 0;
}