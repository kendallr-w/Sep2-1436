#include <iostream>
#include <cmath>

void chapterFourQuiz()
{
    int a, b, c;

    // User input
    std::cout << "Enter the coefficient a: ";
    std::cin >> a;
    std::cout << "Enter the coefficient b: ";
    std::cin >> b;
    std::cout << "Enter the coefficient c: ";
    std::cin >> c;

    // Calculate the discriminant
    int discriminant = b * b - 4 * a * c;
    std::cout << "The discriminant is: " << discriminant << std::endl;

    // Check discriminant
    if (discriminant > 0)
    {
        double root1 = (-b + std::sqrt(discriminant)) / (2.0 * a);
        double root2 = (-b - std::sqrt(discriminant)) / (2.0 * a);
        std::cout << "The equation has two real solutions: "
            << root1 << " and " << root2 << std::endl;
    }
    else if (discriminant == 0)
    {
        double root = -b / (2.0 * a);
        std::cout << "The equation has one real solution: " << root << std::endl;
    }
    else
    {
        std::cout << "The equation has no real solutions." << std::endl;
    }
}

int main()
{
	int num1, num2;
    int theSmallerInteger;

	std::cout << "Enter the first integer: ";
    std::cin >> num1;

	std::cout << "Enter the second integer: ";
	std::cin >> num2;

    if (num1 < num2)
    {
		theSmallerInteger = num1;
    }
    else
    {
        theSmallerInteger = num2;
    }

    double result = pow(theSmallerInteger, 4);

    std::cout << "The smaller integer raised to the "
}
