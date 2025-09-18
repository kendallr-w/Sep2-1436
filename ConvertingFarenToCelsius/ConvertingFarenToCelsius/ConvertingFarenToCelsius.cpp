#include<iostream>
using namespace std;

int main()
{
	int degreesF = {};
	
	cout << "Please enter a temperature in degrees F: ";
	cin >> degreesF;
	
	double degreesC = (degreesF - 32) * 5.0 / 9; //"5.0" makes it a floating point calculation

	cout << degreesF << " degrees F is equivalent to: " << degreesC << " degrees C\n";

	
	
	return 0;

}