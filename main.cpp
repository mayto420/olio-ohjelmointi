#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(0)));
    int targetNumber = std::rand() % 20 + 1;
    while (true) {
        std::cout << "I've come up with a random number between 1-20, guess what it is ";
        int playerGuess;
        std::cin >> playerGuess;
        if (playerGuess == targetNumber) {
            std::cout << "Correct, the number was " << targetNumber << std::endl;
            break;
        } else if (playerGuess < targetNumber) {
            std::cout << "The number is bigger" << std::endl;
        } else {
            std::cout << "The number is smaller" << std::endl;
        }
    }

    return 0;
}
