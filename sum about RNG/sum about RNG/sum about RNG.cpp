#include <iostream>
#include <random>

int generateRandomNumberBetween0AndN(const int N)
{
	std::mt19937 rng(std::random_device{}());

	std::uniform_int_distribution <int> randomDistribution(0, N);

	return randomDistribution(rng);
}
int main()
{
	//the "deprecated" RNG method

	int counter = 0;
	srand(time(0)); //s stands for "seed"

	const int N = 1'000'000;

	while (counter < 100)
	{
		//RAND_MAX is the limit of the rand() function (usually 32'767)
		//If we want a (number > 32767) >> int randomNumberBetween1And100 = rand();
		
		int randonNumberBetween0AndN = generateRandomNumberBetween0AndN(N);
		std::cout << randonNumberBetween0AndN << "\n";

		counter++;

		//make a rng guessing game
	}
}