#include "ageRelatedFunctions.h"

// Function to validate a date
bool isValidDate(int day, int month, int year)
{
    if (month < 1 || month > 12)
    {
        cout << "Invalid month: must be between 1 and 12.\n";
        return false;
    }

    if (day < 1 || day > 31)
    {
        cout << "Invalid day: must be between 1 and 31.\n";
        return false;
    }

    // Handle months with fewer days
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
    {
        cout << "Invalid day: that month only has 30 days.\n";
        return false;
    }

    if (year < 1900 || year > 2025)
    {
        cout << "Invalid year: must be between 1900 and 2025.\n";
        return false;
    }

    return true;
}

// Function to calculate age

int calculateAge(int birthDay, int birthMonth, int birthYear, int currentDay, int currentMonth, int currentYear)

{
    int age = currentYear - birthYear;

    // If birthday hasn't passed yet this year
    if ((currentMonth < birthMonth) || (currentMonth == birthMonth && currentDay < birthDay))
    {
        age--;
    }

    return age;
}
