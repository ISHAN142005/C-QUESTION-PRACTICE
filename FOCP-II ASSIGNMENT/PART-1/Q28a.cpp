#include <iostream>

using namespace std;

int main() {
    int secretNumber = 42;
    int guess;
    int attempts = 7;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have picked a number between 1 and 100." << endl;
    cout << "You have " << attempts << " attempts to guess it." << endl;

    while (attempts > 0) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number." << endl;
            return 0;
        } else if (guess > secretNumber) {
            cout << "Too high!" << endl;
        } else {
            cout << "Too low!" << endl;
        }

        attempts = attempts - 1;

        if (attempts > 0) {
            cout << "Attempts left: " << attempts << endl;
        }
    }

    cout << "Game Over! You ran out of attempts." << endl;
    cout << "The correct number was: " << secretNumber << endl;

    return 0;
}
