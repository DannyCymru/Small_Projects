#include <iostream>
using namespace std;

int main () {

	cout << "Please enter the care engine size [in cubic cm]: ";

	int cubic_cm {19000};

	cin >> cubic_cm;

	cout << "\n\nIf it is diesel please enter 1 if not enter 2: ";

	int fuel {1};

	cin >> fuel;

	if (cubic_cm < 1900 && fuel == 1) {

		cout << "The running cost is \x9C" << "30";

	}

	else if (cubic_cm > 1900 && cubic_cm <= 2100 && fuel == 1) {

		cout << "The running cost is \x9C" << "40 ";

	}

	else if (cubic_cm > 2100 && fuel == 1) {

		cout << "The running cost is \x9C" << "50 ";

	}

	if (cubic_cm < 1900 && fuel == 2) {

		cout << "The running cost is \x9C" << "35";

	}

	else if (cubic_cm > 1900 && cubic_cm <= 2100 && fuel == 2) {

		cout << "The running cost is \x9C" << "45";

	}

	else if (cubic_cm > 2100 && fuel == 2) {

		cout << "The running cost is \x9C" << "55";

	}

    cin.get();
    cin.ignore();

}
