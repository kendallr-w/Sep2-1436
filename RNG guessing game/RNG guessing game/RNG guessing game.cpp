#include <iostream>
#include <random>

int generateRandomNumberBetween0AndN(const int N)
{
	std::mt19937 rng(std::random_device{}());

	std::uniform_int_distribution<int> randomDistribution(0, N);

	return randomDistribution(rng);
}

void demoSimpleRNG()
{
	//the "deprecated" method of RNG: 

	int counter = 0;
	srand(time(0)); //time(0) -> what do it do???
	//s stands for "seed" (whatever that means), let's just abstract away the detail and use the result


	const int N = 1'000'000; //' apostrophes became supported for "large" numbers in 2011 in C++ 

	while (counter < 100)
	{
		//RAND_MAX is the LIMIT of rand() -> what if we want a random number > 32,767?
		/*int randomNumberBetween1And100 = rand(); */

		int randomNumberBetween0AndN = generateRandomNumberBetween0AndN(N);
		std::cout << randomNumberBetween0AndN << "\n";

		counter++;
	}
}

int main()
{
	const int N = 100;
	int correctNumber = generateRandomNumberBetween0AndN(N);

	int numberOfGuesses = 0;
	//std::cout << "Dirty chreater! The number is " << correctNumber << "\n";

	bool gameWon = false;
	const int MAX_GUESSES_ALLOWED = 6;
	
	//for() //next time
	
	while (!gameWon && numberOfGuesses < MAX_GUESSES_ALLOWED)
	{
		std::cout << "Guess the number:\n";
		int usersGuess{}; //brackets make int 0
		std::cin >> usersGuess;

		numberOfGuesses++;

		if (usersGuess == correctNumber)
		{
			gameWon = true;
			std::cout << "You won!\n";

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
		std::cout << "Too many guess - fat L\n";
	}

	else
	{
		std::cout << "Huzzah!\n";
	}
}