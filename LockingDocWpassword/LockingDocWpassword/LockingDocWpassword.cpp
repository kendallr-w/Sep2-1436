#include <iostream>
#include <fstream>
#include <string>

#include "fileReadingFunctions.h"

int main()
{
	std::string filename = "secretFile.txt";

	std::cout << "Enter a password (for locking a file)\n";
	std::string correctPassword;
	std::getline(std::cin, correctPassword);

	std::cout << "Does thou wish to view thy document(yes/no)\n";
	std::string yesOrNo;
	std::getline(std::cin, yesOrNo);

	if (yesOrNo == "yes")
	{
		std::string passwordAttempt = promptForPassword();

		if (passwordAttempt == correctPassword)

		{
			displayContentsOfFile(filename);
		}
	}
}
		

