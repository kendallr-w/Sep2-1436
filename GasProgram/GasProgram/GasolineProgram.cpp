#include <iostream>

int main()
{
    double costPerGallon = 3.10;

    double tankCapacity;

    std::cout << "Please enter your car's fuel efficiency (in mpg (or kpl))\n";

    double fuelEfficiency = 0;//= 57.7; //.7 gets "truncated"
    //intializing ALL variables when you declare them is a good idea



    //remember what a "BREAKPOINT" is, it's useful

    std::cin >> fuelEfficiency;


    std::cout << "Enter your vehicle's fuel tank capacity (in gallons):\n";
    std::cin >> tankCapacity;

    double totalCost = tankCapacity * costPerGallon;


    double travelRange = fuelEfficiency * tankCapacity;

    ////

    std::cout << "The current cost for gas is: $" << costPerGallon << '\n';
    std::cout << "Therefore, you can go this many miles on a full tank:\n"
        << travelRange << "\n";
    std::cout << "Total cost to fill the tank: $" << totalCost;
}