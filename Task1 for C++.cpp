#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

int main() {
    // Seed the random number generator
    std::srand(std::time(0));

    // Generate a random number between 1 and 100
    int randomNumber = std::rand() % 100 + 1;

    int guess = 0;
    std::cout << "Guess a number between 1 and 100: ";

    // Loop until the user guesses the correct number
    while (guess != randomNumber) {
        std::cin >> guess;

        if (guess < randomNumber) {
            std::cout << "Too low! Try again: ";
        } else if (guess > randomNumber) {
            std::cout << "Too high! Try again: ";
        } else {
            std::cout << "Congratulations! You guessed the correct number.\n";
        }
    }

    return 0;
}

