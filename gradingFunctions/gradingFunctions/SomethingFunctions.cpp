#include "someFunctions.h"
#include <iostream>
#include <string>

void doSomething();
{
	std::cout << "Doing something!" << std::endl;
	void doSomethingElse();
}

void doSomethingElse();
{
	std::cout << "Doing something else!" << std::endl;
}

bool isThisClassExcitingYet()
{
	int dozen = 12;

	std::cout << "Well is it?\n";

	std::string userResponse;

	std::getline(std::cin, userResponse);

	if (userResponse == "yes")
	{
		return true;
	}

	else
	{
		return false;
	}
}