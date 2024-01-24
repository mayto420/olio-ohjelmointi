#include <main.cpp>
#include <game.h>



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
