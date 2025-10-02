#include <iostream>
#include <random>

int main()
{
	const N = 100;
	int correctNumber = generateRandomNumberBetween0AndN(N);

	int numberOfGuesses = 0;
	//std::cout << "Dirty chreater! The number is " << correctNumber << "\n";

	bool gameWon = false;
	const int MAX_GUESSES_ALLOWED = 6;
	while (!gameWon && numberOfGuesses < MAX_GUESSES__ALLOWED)
	{
		std::cout << "Guess the number:\n"
		int usersGuess{}; //brackets make int 0
		std::cin >> usersGuess;

		numberOfGuesses++;

		if (usersGuess == correctNumber)
		{
			gameWon = true;
			std::cout << "You won!\n";

		}

		else
		{
			gameWon = false;
			std::cout << "LOSER!\n";
		}

		else if (usersGuess > correctNumber)
		{
			std::cout << "That was too HGH!\n";
		}
		else //this means usersGuess is LESS THAN correctNumber
		{
			std::cout << "TOO LOW!\n";
			}
	}
	if (!gameWon)
	{
		std::cout << "You lost! The correct number was " << correctNumber << "\n";

	else
	{

	}
}