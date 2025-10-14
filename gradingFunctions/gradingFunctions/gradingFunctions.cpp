#include <iostream>
#include "someFunctions.h"

int main()
{
	bool isTheClassExciting = isThisClassExcitingYet();

	if (isTheClassExciting == true)
	{
		std::cout << "Hooray, I am doing a decent job\n";
	}
	else
	{
		std::cout << " :(\n";
	}
	std::cout << isThisClassExcitingYet() << "\n";

	return 0;
}