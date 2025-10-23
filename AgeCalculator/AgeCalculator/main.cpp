#include <iostream>
#include "ageRelatedFunctions.h"

using namespace std;

int main()
{
   
    int currentDay = 23;
    int currentMonth = 10;
    int currentYear = 2025;

    char choice;

    // Prompt user for birthdate
    do
    {
        int birthDay, birthMonth, birthYear;

        cout << "\nEnter your birthdate:\n";

        do
        {
            cout << "Month: ";
            cin >> birthMonth;
            cout << "Day: ";
            cin >> birthDay;
            cout << "Year: ";
            cin >> birthYear;
        }

        while (!isValidDate(birthDay, birthMonth, birthYear));

        // Calculate and display age

        int age = calculateAge(birthDay, birthMonth, birthYear, currentDay, currentMonth, currentYear);
        cout << "\nYou are " << age << " years old.\n";

        cout << "\nWould you like to enter another birthdate? (you're stuck)\n";
        cin >> choice;
    } while (choice == 'y' || 'y');

    return 0;
}
