#include <iostream>
using namespace std;

int main () {

int integer_1 {1};
int integer_2 {2};
int integer_3 {3};

cout << "Please input 3 whole numbers: ";

cin >> integer_1 >> integer_2 >> integer_3;

//123
if ( integer_1 >= integer_2 && integer_1 >= integer_3 && integer_2 >= integer_3) {

	cout << integer_1 << endl << integer_2 << endl << integer_3;
}
//132
else if ( integer_1 >= integer_2 && integer_1 >= integer_3 && integer_3 >= integer_2) {

	cout << integer_1 << endl << integer_3 << endl << integer_2;
}
//321
else if ( integer_3 >= integer_1 && integer_3 >= integer_2 && integer_2 >= integer_1) {

	cout << integer_3 << endl << integer_2 << endl << integer_1;
}

//231
else if ( integer_2 >= integer_1 && integer_3 >= integer_1 && integer_2 >= integer_3) {

	cout << integer_2 << endl << integer_3 << endl << integer_1;
}
//213
else if ( integer_2 >= integer_1 && integer_1 >= integer_3 && integer_2 >= integer_3) {

	cout << integer_2 << endl << integer_1 << endl << integer_3;
}

//312
else if ( integer_3 >= integer_1 && integer_1 >= integer_2 && integer_3 >= integer_1) {

	cout << integer_3 << endl << integer_1 << endl << integer_2;
}

cin.get();
cin.ignore();
}
