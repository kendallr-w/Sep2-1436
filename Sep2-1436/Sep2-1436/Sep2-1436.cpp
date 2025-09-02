#include <iostream> 
#include <string>

int main()
{	


	const float PI = 3.14; //the decimal point can "float"
	auto someNumber = 12; //the single equal sign is an assignment operator
	auto someLetter = 'z'; //zed

	std::cout << "Enter your username:\n";
	//std::string userName; //this is a variable //this is a variable DECLARATION
	std::string userName = ""; //this is an empty string
	

	//std::cin >> userName; means character input
	//cin >> is ONE wat to get user inpur from keyboard whilst program is still running
	std::getline(std::cin, userName);
	//std::getline (filename, userName); //this gets input from a file

	std::cout << "You entered: " << userName << "/n";

	std::cout << "Art thou happy with this?\n";
	std::string happyResponse;
	std::getline(std::cin, happyResponse);

	if (happyResponse == "no") //NOTE double == sign (means "equality" operator)
	{
		std::cout << "RE - enter username\n";
		//overwrite the contenets of the userName variable
		std::getline(std::cin, userName);

		std::cout << "UPDATED user name to : " << userName << "\n";
	}
}
