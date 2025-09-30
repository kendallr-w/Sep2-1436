#include <iostream>

int main()
{
	while (true)
	{

		std::cout << "Pick one of these Menu options:\n";
		std::cout << "'F' for file\n";
		std::cout << "'E' for Edit\n";
		std::cout << "'G' for Git\n";
	}

	char selection{}; //the braces initializes the character to the empty chracter

	std::cin >> selection; //not using getline becuase getline stores a string

	switch (selection)
	{
		case 'F':
			std::cout << "Displaying FILE options...\n";
			break;
		case 'E':
			std::cout << "Displaying EDIT options...\n";
			break;
		case 'G':
			std::cout << "Displaying GIT options...\n";
			break;
		default:
			std::cout << "Unsopprted choice eneter...\n";
			break;
	}
}