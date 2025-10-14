#include <iostream>

int main()
{
	char userInput{};
	int counter = 0;

	std::cout << "Let's play a game for a prize! Please enter letters until you quit (q to quit): \n";
	std::cin >> userInput;

	while (userInput != 'q')
	{
		counter++;
		std::cout << "You started the game now... might as well keep going (q to quit): \n";
		std::cin >> userInput;
	}

	if (counter < 5)
	{
		std::cout << "\nYou didn't even try 5 times...\n";
	}

	else if (counter < 10)
	{
		std::cout << "\nYou didn't even try 10 times...\n";
	}

	else if (counter < 15)
	{
		std::cout << "\nYou didn't even try 15 times...\n";
	}

	else
	{
		std::cout << "\nNo way you entered more than 15 letters just to see this message!";
	}

	std::cout << "\nCongratulations!!! You've won your prize:\n" << std::endl; 
	std::cout << "The 26 letters of the English Alphabet in lowercase:\n" << std::endl;
	
	int ascii = 97;
	for (int i = 0; i < 26; ++i)
	{
		char letter = ascii + i;
		std::cout << letter;
		std::cout << " ";
	}
	std::cout << "\nThank you for playing! Please be a pleb and attempt to play again." << std::endl;
}