#include <iostream>

int main()
{
    std::cout << "Enter your car's fuel efficiency (in mpg (or kpl))\n";

    int fuelEfficiency = 0;//= 57.7; //.7 gets "truncated"
    //intializing ALL variables when you declare them is a good idea

    //remember what a "BREAKPOINT" is, it's useful

    std::cin >> fuelEfficiency;

    std::cout << "You entered fuel efficiency = " << fuelEfficiency << " miles per gallon\n";

    int tankCapacity = 13;// gallons"
    int travelRange = fuelEfficiency * tankCapacity;

    std::cout << "You can go this many miles on a full tank:\n"
        << travelRange << "\n";
}

