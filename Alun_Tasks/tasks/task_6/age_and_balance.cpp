#include <iostream>
#include <string>
using namespace std;

int main () {

	int age{10000};

	double balance{-0.2};

	cout << "Please insert your age and then your bank balance, please refrain from using a\n"
        << "sign for currency. Just input a number for both, age first, balance second: ";

	cin >> age >> balance;

	if (age >= 18 && balance >= 0) {

		cout << "Go to the pub, mate";
	}

	else if (balance > 0 && age < 18) {

		cout << "Go to the cinema";
	}

	else if (balance < 0 ) {

		cout << "Go for a walk";
	}

	else {

		cout << "Your answer does not compute";
	}

    cin.get();
    cin.ignore();
}
