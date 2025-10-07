#include <iostream>
#include <cmath>

int main()
{
	int a, b, c;

	//for user input
	std::cout << "Enter the coeffiecients a: ";
	std::cin >> a;
	std::cout << "Enter the coeffiecients b: ";
	std::cin >> b;
	std::cout << "Enter the coeffiecients c: ";
	std::cin >> c;

	//calculate the discriminant
	int discriminant = b * b - 4 * a * c;
	std::cout << "The discriminant is: "

}