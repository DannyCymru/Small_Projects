#include <iostream>
using namespace std;

int main () {

	int positive_or_negative;

	cout << "Hi this program will tell you whether or not a number you enter is positive, negative or if it equals zero\n\n" << "please insert an integer value: ";

	cin >> positive_or_negative;

    //Checks if the number exactly equals zero
	if (positive_or_negative == 0) {

		cout << "Your number equals to zero";
	}

    //Checks if the number is less than 0
	else if (positive_or_negative < 0) {

		cout << positive_or_negative << " is a negative number";

	}

    //Checks if the number is more than zero.
	else if ( positive_or_negative > 0) {

		cout << positive_or_negative << " is a positive number";

	}

	else {

		cout << "your answer does not compute";
	}

	cin.get();
	cin.ignore();
}
