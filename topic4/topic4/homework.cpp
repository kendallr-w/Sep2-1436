#include <iostream>
#include <iomanip>

int main()
{
    //always show 2 decimal places
    std::cout << std::fixed << std::setprecision(2);

    //table headers
    std::cout << std::setw(10) << "Item" <<
        std::setw(20) << "Quantity"
        << std::setw(10) << "Price" << std::setw(22) << "      Short Description" << std::endl;

    //first row of data
    std::cout << std::setw(12) << "Lil Tony tickets" <<
        std::setw(14) << "2,300" << std::setw(10) << " $25.99" << std::setw(30) <<
        "   Tickets for a Lil Tony concert!" << std::endl;

    //second row!
    std::cout << std::setw(12) << "NBA Youngboy tickets" <<
        std::setw(10) << "20,000" << std::setw(10) << "$52.99" << std::setw(48) <<
        "   Tickets for an overrated NBA Youngboy concert!" << std::endl;


}