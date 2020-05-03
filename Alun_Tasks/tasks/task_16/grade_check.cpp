#include <iostream>
using namespace std;

int main() {

	double percentage_mark {207};

	cout << "Please enter the units percentage mark: ";

	cin >> percentage_mark;

	if (percentage_mark < 40) {

		cout << "You have failed the unit, do not pass go";
	}

	else if (percentage_mark >= 40 && percentage_mark < 60) {

		cout << "You have passed the unit";
	}

	else if (percentage_mark >= 60 && percentage_mark <= 70) {

		cout << "You have gained a merit for this unit";
	}

	else if (percentage_mark >= 70) {

		cout << "You have gained a distinction for this unit";
	}

        cin.get();
        cin.ignore();
}
