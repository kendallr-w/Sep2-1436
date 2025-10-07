#include <iostream>
#include "Windows.h"

int main()
{
	for (int loopCounter = 5; loopCounter >= 0; loopCounter = loopCounter - 1)
	{
		std::cout << loopCounter << "..."; //prints the updated of the counter variable on every loop
		
		Sleep(1000);
	}
	std::cout << "It's the Final Countdown!\n";

	std::system(finalCountdown)
}