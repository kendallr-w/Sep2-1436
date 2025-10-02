#include <iostream>

int main()
{
	int numberOfInstancesOfAroundTheWorld = 0;


	
	while (numberOfInstancesOfAroundTheWorld <= 5) //do not put a semicolon here!
	{
		std::cout << "Around the world" << std::endl;
		numberOfInstancesOfAroundTheWorld = numberOfInstancesOfAroundTheWorld + 1;
	}

	std::cout << "\nAfter EXITING the loop, the loop counter variable = "
		<< numberOfInstancesOfAroundTheWorld << "\n";
}