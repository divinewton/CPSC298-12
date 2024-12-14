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
    double ounces; // creates double for ounces
    cout << "Input the weight of a package of breakfast cereal in ounces: " << endl; // asks user for input
    cin >> ounces; // sets ounces variable to input
    double tons = ounces / 35273.92; // converts to metric tons
    cout << "Your " << ounces << " oz cereal box is " << tons << " metric tons."; // prints result to console
    return 0; // nothing to return in this method
}