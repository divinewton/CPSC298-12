/*
Names: Divi Newton, Ava DeCristofaro
Course: CPSC-298-12, C++
In-class practice for Error Handling
*/

#include <iostream>
#include <stdexcept>
using namespace std;

// guessing game function
void guessingGame(int input) {
    bool isFound = false;
    int userGuess;
    while (!isFound) {
        cout << "Enter a number between 1 and 10: " << endl;
        cin >> userGuess;
        if (userGuess < 1) {
            throw invalid_argument("Number under 1.");
        } else if (userGuess > 10) {
            throw invalid_argument("Number above 10.");
        }
        if (userGuess == input) {
            cout << "Correct!!" << endl;
            isFound = true;
        } else {
            cout << "Incorrect. Try again!" << endl;
        }
    }
}

// main function
int main() {
    try {
        cout << "Guessing Game" << endl;
        guessingGame(7);
    }
    catch(invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }
    catch (...) {
        cerr << "Unknown error occured" << endl;
        return 1;
    }
    return 0;
}