/*
Name: Divi Newton
Student ID: 2440117
Email: dnewton@chapman.edu
Class Section: CPSC-298-12
Programming Assignment #2
*/

#include <iostream>
using namespace std;

// GLobal variables for the array of names and array of phone numbers, set with max 100 values
string* names = new string[100];
unsigned long* phoneNumbers = new unsigned long[100];


// addContact function takes in a name and phone number
// if name doesn't exist, it adds a new entry to the phone book. If it does exist, it updates the phone number
bool addContact(string name, unsigned long phoneNumber){
	for (int i = 0; i < 100; i++) { // loops through all 100 values of names and if the name is found, it updates the phone number
		if (names[i] == name) {
			phoneNumbers[i] = phoneNumber; // updates phoen number at that position
			return false;
		}
	}
	for (int i = 0; i < 100; i++) { // loops through all 100 values of names and if not found, it adds the new name and number
		if (names[i] == "" && phoneNumbers[i] == 0) { // at the first empty position, adds name and number
			names[i] = name; // adds the name
			phoneNumbers[i] = phoneNumber; // adds the phone number
			return true;
		}
	}
}


// searchContact function loops through all 100 names and if the name is found, it returns that name's phoen number
unsigned long searchContact(string name){
    for (int i = 0; i < 100; i++) { // loops through each value of names
        if (names[i] == name) { // if the name matches the inputted name
            return phoneNumbers[i]; // returns the phoen number
        }
    }
    return 0; // returns 0 if the contact is not found
}


// displayContacts function prints all the contacts that have been added to the terminal
void displayContacts(){
	bool foundContact = false; // boolean to represent if the remaining contacts are empty
	for (int i = 0; i < 100; i++) { // loops through weach name in names array
		if (names[i] != "") { // if there is a name present at the location, it prints that name and phone number
			cout << names[i] << "\t" << phoneNumbers[i] << endl;
			foundContact = true;
		}
	}
	if (!foundContact) { // if there are no names, it prints not found
		cout << "No contacts found" << endl;
	}
}


// the main function uses a do while loop that prints the menu to the user after every action until the exit program option is selected
// it contains memory management as well
int main(int argc, char** argv){

	// first, the function loops through the empty names and phoneNumbers arrays and sets all names to "" and numbers to 0
	for (int i = 0; i < 100; i++) {
		names[i] = "";
		phoneNumbers[i] = 0;
	}

	// prints the menu and asks for input
	const string menu = "------------------------------\n"
	"Please select the number from the following options:\n"
	" 1) Add contact\n 2) Search contact\n"
	" 3) Display all contacts\n 4) Quit\n"
	"------------------------------\n"; // menu options

	// variable for the user's input selection
	int inputOption;
	do {
		cout << menu << endl; // printing the menu
		cin >> inputOption; // getting the user input number
		cin.ignore(); // ignore trailing input
		if (inputOption == 1){ // if the user chooses to add a contact
			string name; // variable for new name
            unsigned long phoneNumber; // variable for new phone number
            cout << "What is the new contact's name? ";
            getline(cin, name); // gets the name
            cout << "What is their phone number? ";
            cin >> phoneNumber; // gets the number
			cin.ignore(); // ignore trailing input
            bool addedContact = addContact(name, phoneNumber); // calls addContact to add the name
            if (addedContact) { // if the name was added
                cout << "Successfully added new contact!" << endl;
            } else { // if the name already existed, it updates the phone number instead of adding a new contact
                cout << "Replaced " << name << "'s phone number with " << phoneNumber << "." << endl;
            }
		} else if (inputOption == 2) { // if the user chooses to search contacts
			string userName; // vairable for the name
            cout << "What is the name of the contact you're searching for? ";
            getline(cin, userName); // gets the name to be searched
            unsigned long searchResult = searchContact(userName); // calls searchContact method to search for the name
            if (searchResult == 0) { // if the name was not found
                cout << "No contact found for \"" << userName << "\"" << endl;
            } else { // if the name was found, prints the name with its phone number
                cout << userName << "\t" << searchResult << endl;
            }
		} else if (inputOption == 3) { // if the user chooses to print the contact list
			displayContacts(); // calls displayContacts to print the entire contact list
		} else if (inputOption == 4) { // if the user chooses to exit the program
			cout << "Exiting program..." << endl;
			break; // exits the while loop, ending the program
		} else { // if the user chooses an invalid option, it tells them and asks them to try again
			cout << "Not a valid option, please try again." << endl;
		}
	} while (inputOption != 4); // the condition of the while loop is that the input is not 4

	// handles trash collection and deletes phoneNumbers and names arrays after the program is over
    delete[] phoneNumbers; // brackets indicates these objects are dynamically allocated arrays
    delete[] names;
    return 0; // returns 0, since main methods always return 0
}