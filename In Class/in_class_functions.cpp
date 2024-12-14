/*
Names: Divi Newton, Ava DeCristofaro
Course: CPSC-298-12, C++
In Class Function Implementations
*/

#include <string>
#include <iostream>
using namespace std;

// This function rounds a double to an int. If the decimal part is < 0.5, round down. Else, round up. 
int roundDouble(double d){
    double decimal = d * 100;
    int wholeNum = static_cast<int>(decimal);
    int result;
    if (wholeNum % 100 < 50){
        result = wholeNum - (wholeNum % 100);
    }else{
        result = wholeNum + (1 - (wholeNum % 100));
    }
}

// fibonacci(0) = 1, fibonacci(1) = 1, fibonacci(n) = fibonacci(n - 1) + fibonacci(n - 2) 
// Sequence would look like: fib(0)=1, fib(1)=1, fib(2)=2, fib(3)=3, fib(4)=5, fib(5)=8, fib(6)=13, fib(7)=21, fib(8)=34, ... 
int fibonacci(int num) {
    
}

// a word that's the exact same forwards and backwards 
bool checkPalindrome(const string& s) {
    string reverseString;
    for (int i = s.length() - 1; i >= 0; --i) {
        reverseString += i;
    }
    if (reverseString == s) {
        return true;
    } else {
        return false;
    }
}

// modify DNA 'A' <---> 'T' and 'C' <---> 'G' in place (no returning), regardless of upper or lower case.  
// If it's an unrecognized letter, put '?' 
void DNAcomplement(string& dna) {
    for (int i = 0; i < dna.length(); ++i) {
        if (i == 'A') {
            dna[i] = 'T';
        } else if (i == 'C') {
            dna[i] = 'G';
        } else if (i == 'T') {
            dna[i] = 'A';
        } else if (i == 'G') {
            dna[i] = 'C';
        } else if (i == 'a') {
            dna[i] = 't';
        } else if (i == 'c') {
            dna[i] = 'g';
        } else if (i == 't') {
            dna[i] = 'a';
        } else if (i == 'g') {
            dna[i] = 'c';
        }
    }
}

int main(int argc, char** argv) {
    return 0;
}