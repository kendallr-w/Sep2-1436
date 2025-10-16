#include <cstdlib>
#include <ctime>
#include <iostream>

int rollD20()//20 side dice
{
	return (rand() % 20) + 1;
}

int rollD4()//4 side dice
{
	return (rand() % 4) + 1;
}

int main()
{
	std::srand(time(0)); //seed the random number

	int d20Roll = 0;
	int d4Roll = 0;
	int rollCount = 0;

	do
	{
		d20Roll = rollD20();
		d4Roll = rollD4();
		rollCount++;

		std::cout << "D20 Roll: " << d20Roll << ", D4 Roll: " << d4Roll << std::endl;
	}

	while (!(d20Roll == 1 && d4Roll == 1));
	{
		std::cout << "\nSnake eyes! It took " << rollCount << " rolls to get snake eyes!" << std::endl;
	}
}

