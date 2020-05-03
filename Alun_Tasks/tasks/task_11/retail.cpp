#include <iostream>
using namespace std;

int main () {

	int quantity {100000};

	int price {25};

    int discounted_price {222222222};


	cout << "Please insert quantity purchased: ";

	cin >> quantity;

	if (quantity >= 10 && quantity < 20 ) {

 	cout << "\x9C" << price;

 	cout << "\nYou will receive a 20% discount";

 	cout << "\nYou will be charged " << quantity * price - quantity * price * .20 ;

 }


	if (quantity >= 20 && quantity < 49 ) {

 	cout << "\x9C" << price;

 	cout << "\nYou will receive a 30% discount";

 	cout << "\nYou will be charged " << quantity * price - quantity * price * .30 ;

 }


	if (quantity >= 50 && quantity <= 99 ) {

 	cout << "\x9C" << price;

 	cout << "\nYou will receive a 40% discount";

 	cout << "\nYou will be charged " << quantity * price - quantity * price * .40 ;

 }


	if (quantity >= 100 ) {

 	cout << "\x9C" << price;

 	cout << "\nYou will receive a 50% discount";

 	cout << "\nYou will be charged " << quantity * price - quantity * price * .50 ;

 }

 cin.get();
 cin.ignore();
}
