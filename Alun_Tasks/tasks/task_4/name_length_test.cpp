#include <iostream>
#include <string>
using namespace std;

int main () {

	cout << "Hi this program will tell you whether or not your first name is bigger than you second name and vice versa.\n\n" << "please insert a string value: ";

	string first_name {"Dan"};

	string surname {"Ro"};

	cin >> first_name >> surname;

	/*.size() is a function that will take a string and return its size or in other words length.
	the below int takes the size value and stores it, we can then call these variables directly into the if statements */
	int surname_length = surname.size();

    int first_length = first_name.size();

	if (first_length < surname_length) {

		cout << "Surname is longer than you first name";
	}

    else if (surname_length < first_length) {

        cout << "Your surname is shorter than your first name";

	}

	else if (first_length == surname_length) {

        cout << "Your first name and last name are equal to each other";
	}

    else {

        cout << "Your answer does not compute";
    }

    cin.get();
    cin.ignore();
}


