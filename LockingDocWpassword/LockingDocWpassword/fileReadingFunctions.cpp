#include "fileReadingFunctions.h"
#include <iostream>
#include <fstream>
#include <string>

std::string promptForPassword()
{
	std::cout << "Enter the password that you set earlier:\n";
	std::string passwordAttempt;
	std::getline(std::cin, passwordAttempt);
	return passwordAttempt;
}

void displayContentsOfFile(std::string filename)
{
	std::ifstream fin("secretFile.txt");

	if (!fin.is_open())
	{
		std::cout << "Unable to find file\n";

		return;
	}

	std::string currentLineInFile;
	while (std::getline(fin, currentLineInFile))
	{
		std::cout << currentLineInFile << '\n';
	}


}
	
