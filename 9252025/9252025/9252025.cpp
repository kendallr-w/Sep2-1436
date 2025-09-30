#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter the image you want to see:\n";

	std::cout << "Your options are:\n";
	std::cout << "NM (AKA: lovely New Mexico State Park (Sugarite))\n";
	std::cout << "Cat ... A sleepy something\n";

	std::string theThingYouWantToSee;
	std::getline(std::cin, theThingYouWantToSee);

	//confirm input
	std::cout << "You entered: " << theThingYouWantToSee << "\n";
	std::cout << "Now we will display:\n";

	if (theThingYouWantToSee == "Cat")
	{
		std::system("tkey.png");

	}

	else if (theThingYouWantToSee == "NM")
	{
		std::system("stlarch.png");
	}
	else
	{
		std::cout << "We don't know how to handle that input\n";
	}

	std::cout << "End of program reached\n";
}