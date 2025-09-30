#include <iostream>

int main()
{
	while (true)
	{
	}
	std::cout << "Pick one of these Menu options:\n";
	std::cout << "'F' for file\n";
	std::cout << "'E' for Edit\n";
	std::cout << "'G' for Git\n";

	char selection;

	switch (selection)
	{
	case 'F':
		std::cout << "Displaying FILE options...\n";
		break;
	case 'G':
		std::cout << "Displaying EDIT options...\n";
		break;
	default:
		std::cout << "Unsopprted choice eneter...\n";
		break;
	}
}