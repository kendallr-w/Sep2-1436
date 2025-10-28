#include <iostream>
#include <string>
#include <cctype>

static bool isPalindrome(const std::string& input_string)
{
    std::string lower_case_string = input_string;

    for (char& ch : lower_case_string) //converts string to lowercase
    {
        ch = std::tolower(ch);
    }

    std::size_t len = lower_case_string.length();
    for (std::size_t i = 0; i < len / 2; ++i)
    {
        if (lower_case_string[i] != lower_case_string[len - 1 - i])
        {
            return false; //return false if characters don't match
        }
    }
    return true; //return true if characters match
}

int main()
{
    std::string user_input;
    std::string playerOne;
    std::string userOption;

    //get users name
    std::cout << "Thank you for choosing reedwarren's Palindrome assignment! Please enter your name: ";
    std::cin >> playerOne;

   std::cin.ignore();

    //ask user if they would like to play
    while (true)
    {
        std::cout << "Would you like to participate " << playerOne <<"? (yes/no): ";
        std::getline(std::cin, userOption);

        if (userOption == "yes")
        {
            std::cout << "\nThank you " << playerOne << ", please enjoy Palindrome!" << std::endl;
            break; //exits loop to start game
        }
        else if (userOption == "no")
        {
            std::cout << "\nOkay " << playerOne << ", I never asked you to play in the first place..." << std::endl;
            return 0;  //exits if user says no
        }
        else
        {
            std::cout << "\nYou're not getting out of this! Please enter 'yes' or 'no'\n";
        }
    }

    while (true)
    {
        std::cout << "\nHello, " << playerOne << ", please enter a string to check if it's a palindrome (or type 'q' to quit): ";
        std::getline(std::cin, user_input);

        if (user_input == "q")
        {
            std::cout << "Thanks for playing, " << playerOne << "!" << std::endl;
            break; //exits if user types q
        }

        if (isPalindrome(user_input))
        {
            std::cout << "\nYes, it's a palindrome!" << std::endl;
        }
        else
        {
            std::cout << "\nNo, it's not a palindrome." << std::endl;
        }
    }

    return 0;
}
