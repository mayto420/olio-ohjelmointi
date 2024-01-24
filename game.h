#ifndef GAME_H
#define GAME_H
#include <iostream>

class Game {
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
public:
    Game();
    Game gameObject   () {
        maxNumber = 10;
        std::srand(static_cast<unsigned int>(time(0)));
        randomNumber = std::rand() % maxNumber + 1;
        numOfGuesses = 0;
        std::cout << "CONSTRUCTOR Game object created with 10 as max value";
    }


    ~Game () {
        std::cout << "DESTRUCTOR Object cleared from stack memory";
    }
    void play() {
        while (true) {
            std::cout << "Give your guess between 1 and 10 ";

            std::cin >> playerGuess;
            numOfGuesses++;

            if (playerGuess == randomNumber) {
                std::cout << "Correct the number was " << randomNumber << ". With " << numOfGuesses << " guesses.\n";
                break;
            } else if (playerGuess < randomNumber) {
                std::cout << "The number is bigger" << std::endl;
            } else {
                std::cout << "The number is smaller" << std::endl;
            }
        }
    }
};



#endif // GAME_H
