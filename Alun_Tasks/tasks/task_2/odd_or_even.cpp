#include <iostream>
using namespace std;

int main () {

	int odd_or_even;

	cout << "Hi this program will tell you whether or not a number is odd or even\n\n" << "please insert an integer value: ";

	cin >> odd_or_even;

    //This if statement checks whether or not the number is divisible by two.
    if (odd_or_even % 2) {

        //If the number isn't perfectly divisible by two it prints "odd"
        cout << "This number is odd";
    }

    else {
            //if it is perfectly divisible by two then the program prints "even"
            cout << "This number is even";
    }

    cin.get();
    cin.ignore();
}
