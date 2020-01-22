#include <iostream>
#include <sstream>
using namespace std;

/*Decided to do the slightly harder version as I do know the basics of using loops */

int main () {

    /*Simple for loop. It goes through and prints 1 - 100, if the number is divisible by 3 and 5 it
    prints fizzbuzz instead of the number, if divisible by 3 then it prints fizz and if its divisible
    by 5 it prints buzz.*/
	for (int i = 1; i <= 100; ++i){

        if (i % 3 == 0 && i % 5 == 0) {

			cout << "FizzBuzz" << endl;
		}

		else if (i % 3 == 0) {

			cout << "Fizz" << endl;
		}

		else if (i % 5 == 0) {

			cout << "Buzz" << endl;
		}

		else {

			cout << i << endl;
		}

    }

    cin.get();
    cin.ignore();
}
