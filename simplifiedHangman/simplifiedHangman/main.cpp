#include <iostream>
#include <string>
//EDIT DIALOGUE AND CHANGE CODE SO USER CAN ONLY ENTER ONE LETTER NOT A WORD

int main()
{
    //get player's names and explain roles
    std::cout << "Greetings player one, please enter the primary name on your birth certificate:" << std::endl;
    std::string playerOne;
    std::cin >> playerOne;

    std::cout << "\nThank you so much " << playerOne << "!" << std::endl << "\nNow player two, please enter your government: " << std::endl;
    std::string playerTwo;
    std::cin >> playerTwo;

    std::cout << "\n" << playerOne << " will assign the word, while " << playerTwo << " attempts to guess the word." << std::endl;


    //ask for player one's mystery word
    std::cout << "\n" << playerOne << ", please enter a word for " << playerTwo << " to guess, then press any key to hide the word and officially begin the game: ";
    std::string answer;
    std::cin >> answer;
    std::cout << "\n";

    std::system("pause");
    std::system("cls");

    //introduce the answer
    std::string guessedAnswer;

    //build asterisks the same length as the answer
    for (int i = 0; i < answer.length(); i++)
    {
        guessedAnswer += ('*');
    }

    //loops until playerTwo guesses the answer
    while (guessedAnswer != answer)
    {
        std::cout << "\nCurrent word: " << guessedAnswer << std::endl;

        //playerTwo guesses a letter
        std::cout << "Guess a letter: ";
        std::string guessedLetter;
        std::cin >> guessedLetter;

        if (answer.find(guessedLetter) != std::string::npos)
        {
            std::cout << "You guessed a correct letter!" << std::endl;

            //find first occurrence of a guessed letter
            size_t position = answer.find(guessedLetter);

            //continue to find more and more occurrences until none remain
            while (position != std::string::npos)
            {
                guessedAnswer.replace(position, 1, guessedLetter);
                position = answer.find(guessedLetter, position + 1);
            }
        }
        else
        {
            //if the guess is incorrect:
            std::cout << "Incorrect guess!" << std::endl;
        }
    }

    //once the word is completely guessed:
    std::cout << "\nCongratulations! You guessed the word: " << answer << std::endl;

    return 0;
}
