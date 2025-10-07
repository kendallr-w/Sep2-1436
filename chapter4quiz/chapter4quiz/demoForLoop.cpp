#include <iostream>
#include <string>
#include "Windows.h"
#include <array>

void firstSimpleForLoopDemo()
{
	for (int loopCounter = 5; loopCounter >= 0; loopCounter = loopCounter + 1)
	{
		//the body of the loop
		std::cout << loopCounter << "..."; //prints the updated of the counter variable on every loop

		Sleep(1000);
	}
	std::cout << "It's the Final Countdown!\n";

	std::system("finalCountdown.wav");
}

void demoVariousForLoopThings() {
	const std::string myName = "Kendall Reed-Warren";

	for (char currentLetter : myName)
	{
		std::cout << currentLetter << "\n";
	}

	std::array<int, 3> listOfNumber = { 1, 2, 3 };

	for (int currentNumber : listOfNumber)
	{
		std::cout << currentNumber * 2 << "\n";
	}
	for (long long int i = 0); i < 10'000'000'000; ++i)
	{
		if (i > 9'900'000'000)

			//std::cout << i << "\n";
	}
}

int main()
{
	for (int outerLoopCounter = 0; outerLoopCounter < 5; ++outerLoopCounter)
	{
		for (int innerLoopCounter = 1; innerLoopCounter < 4; ++innerLoopCounter)
		{
			std::cout << "Outer loop counter value is: " << outerLoopCounter
				<< "\tAND the INNER loop counter is: " << innerLoopCounter << "\n";
		}
		std::cout << "\n";
	}

}