#include <iostream>
using namespace std;

int main()
{
	int currentZuluHour = {};

	cout << "Current UTC time in 24 hout format is: " << currentZuluHour << "\n";

	while (true) // infinite loop for testing easily
	{
		cout << "Enter a NEW hour in 24 hour format: \n";
		cin >> currentZuluHour;
		cout << "You entered this: " << currentZuluHour << "\n";


		cout << "Using the TWELVE hour clock: " << currentZuluHour % 12;
		if (currentZuluHour >= 12)
		{
			cout << " PM\n";
		}
		else
		{
			cout << " AM\n";
		}
		//we read the % symbol as a mod

	}
}
