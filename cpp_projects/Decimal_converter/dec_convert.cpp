#include <iostream>
#include <string>
#include <bitset>
using namespace std;

//FUNCTION DECLERATIONS

int binary ();

int octal();

int hex ();

//GLOBAL VARIABLE
int num_to_conv {2700};

int main() {

    string options {"0.To exit the program\n1.Binary\n2.Octal\n3.Hex\n4.Gives you the options list again\n"};

    //User prompt to decide which number system the program will be converting to
    cout << "What number system would you like to convert to?\n" << endl << options;

    //Variable to contain this answer
    int number_choice {22};

    /*for loop to keep the program running.
      This loop basically keeps running while i=0 and number_choice does not equal 0.*/
    for (int i = 0; cin >> number_choice && number_choice != 0;)
    {
        //Simple switch statement, depending on the user input will decide which function the program will use
        switch (number_choice) {

            case 1: binary();
                    break;

            case 2: octal();
                    break;

            case 3: hex();
                    break;

            case 4: cout << options;
                    break;

            default: cout << "This number is not recognised.";
                    break;
        }
    }

    
    cin.get();
    cin.ignore();
}

//FUNCTION DEFINITIONS

int binary() {

    //User Prompt for number to convert
    cout << "\nWhat number would you like to convert to binary? ";

    cin >> num_to_conv;

    /*The below string is a variable to turn the user inputted number into binary.
    bitset<12> means that we are going up to 12 binary digits */
    string dec_to_bin = bitset<12>(num_to_conv).to_string();

    cout << endl << dec_to_bin << endl;

}

int octal() {

    cout << "\nWhat number would you like to convert to octal? ";

    cin >> num_to_conv;

    cout << endl << oct << num_to_conv << endl;

}

int hex() {

    cout << "\nWhat number would you like to convert to hex? ";

    cin >> num_to_conv;

    cout << endl << hex << num_to_conv << endl;

}


