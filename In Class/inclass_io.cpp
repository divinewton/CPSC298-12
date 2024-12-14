#include <iostream>

using namespace std;

int main(int argc, char ** argv) {
    cout << "My favorite number is: " << 1.0 << endl;
    cout << "title" << endl << "things" << endl << "test" << endl;

    int num;
    cout << "Enter a number: " << flush;
    cin >> num;

    // only gets first word of the string
    string word;
    cout << "Enter a word: " << flush;
    cin >> word;

    cin.ignore();

    string whole_line_input;
    cout << "Enter a sentence: " << endl;
    getline(cin, whole_line_input);

    return 0;
}