#include <iostream>
#include "someFunctions.h"

int dozen = 12; // global variable: generally not a good idea (variable defined outside of any function)

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
	
	//std::cout << isThisClassExcitingYet() << "\n";

	if (true)
	{
		int a = 123;
	}

	return 0;
}