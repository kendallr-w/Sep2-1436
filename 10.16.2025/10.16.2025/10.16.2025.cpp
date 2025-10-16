#include <iostream>

int main()
{
	int userInput;
	std::cout << "Please enter a positive integer: ";
	std::cin >> userInput;

	unsigned long long factorialResult = 1; //unsigned long long to handle larger results
	for (int i = 1; i <= userInput; i++) 
	{
		factorialResult = factorialResult * i;
	}

	std::cout << "The factorial of " << userInput << " is " << factorialResult << std::endl;

	return 0;
}