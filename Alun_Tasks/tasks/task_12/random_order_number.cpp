#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {

/*the below code is almost the exact same code I used for the last project that required number to be in order
the only real difference is that I used rand to generate a random number instead of asking for an input.

srand here is basically just to give the rand function an actual random seed, otherwise when ran the rand function would have the same answer every time. */
srand(time(NULL));

/*each int equals a random number between the range of 0 - 100 */
int integer_1 = (rand() % 100);
int integer_2 = (rand() % 100);
int integer_3 = (rand() % 100);

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
