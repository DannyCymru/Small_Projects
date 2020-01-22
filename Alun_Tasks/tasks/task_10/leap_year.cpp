#include <iostream>
using namespace std;

int main () {

	int leap_year {2100};

	cout << "Please insert a year: ";

	cin >> leap_year;

/* Modulus returns the remainder between the division of two numbers. If it is anything but zero then those two numbers
are not divisible*/
	if (leap_year % 100 == 0 && leap_year % 400 == 0) {

		cout << leap_year << " Is a leap year";

	}

    else if (leap_year % 100 != 0 && leap_year % 4 == 0) {

        cout << leap_year << " Is a leap year";
	}

	else {

        cout << "I am sorry but that is not a leap year\n";
	}

	cin.get();
	cin.ignore();

}
