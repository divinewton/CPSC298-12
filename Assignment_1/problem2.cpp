/* 
Name: Divi Newton
Student ID: 2440117
Email: dnewton@chapman.edu
Course: CPSC-298-12, C++
Assignment: 1
*/

#include <iostream> // enables input and output
using namespace std; // enables types like strings

// main method
int main(int argc, char** argv) {
    string sentence; // creates string for sentence
    cout << "Enter a sentence: " << endl; // asks user for input
    getline(cin, sentence); // sets sentence variable to inputted text

    if (sentence == "") { // if the input is empty
        cout << "No data to corrupt. Try again!" << endl; // tells user to try again
    } else { // if the input is not empty
        sentence[0] = '?'; // sets first character of sentence to '?'
        cout << "You inputted: \"" << sentence << "\"" << endl; // prints edited sentence to console
        cout << "Successfully read " << (sentence.length() - 1) << " out of " << sentence.length() << " characters." << endl; // tells user it was a success
        return 0; // this method doesn't return anything
    }
}