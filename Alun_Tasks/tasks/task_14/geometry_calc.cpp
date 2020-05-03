#include <iostream>
using namespace std;

int function_choice {9};

double input_1 {2};

double input_2 {4};

constexpr double pi {3.14};

int main () {

	cout << "1.Calculate the area of a circle" << endl << "2.Calculate the area of a rectangle" << endl << "3.Calculate the area of a triangle" << endl << "4.Quit" << endl <<"This is a geometry calculator, which function would you like to do?: ";

	cin >> function_choice;

	switch(function_choice) {

        case 1:		cout << "Please insert the radius of the circle: ";

                    cin >> input_1;

                    cout << "The area of the circle is: " << pi*input_1*input_1;
                    break;


        case 2:		cout << "Please inset the length and the width of the rectangle: ";

				cin >> input_1 >> input_2;

				cout << endl << "The area of the rectangle is: " <<  input_1 * input_2;
				break;


        case 3:		cout << "Please insert the base and then height of the triangle: " ;

                    cin >> input_1 >> input_2;

                    cout << endl << "The area of the triangle is: " << (input_1 * input_2) / 2;
                    break;


        default:	cout << "The program is quitting";
                    break;

    }

        cin.get();
        cin.ignore();
}
