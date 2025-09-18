#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	long long angstromsPerMeter = pow(10, 10);
	cout << "There are " << angstromsPerMeter << " angstroms in a meter." << endl;

	string leftNeighbor = "Xander";
	string rightNeighbor = "Zamir";

	//print the length of each name
	cout << "The length of " << leftNeighbor << " is: " << leftNeighbor.length() << endl;
	cout << "The length of " << rightNeighbor << " is: " << rightNeighbor.length() << '\n';

	//get the sum of products online
	cout << "\nImagine you're at a Whataburger or your favorite fast food place and you see two items you want to buy.\n"
		<< "Please enter your first price of the order: $";
	double price1{};
	cin >> price1;

	cout << "\nThank you!\n" << "\nPlease enter the other price of the item you would like! $";
	double price2{};
	cin >> price2;

	double totalCost = price1 + price2;

	cout << std::fixed << std::setprecision(2);
	cout << "\nThe total cost for both of the items comes out to: $"
		<< totalCost << endl;

	cout << "\nMaybe if you weren't such of a big back, you would save $"
		<< price1 << " or $" << price2 << "...\n";

	cout << "\nThank you, Have a nice night!!" << endl;

	
}