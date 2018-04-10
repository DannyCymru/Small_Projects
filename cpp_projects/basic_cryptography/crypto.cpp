#include <iostream>
#include <string>
using namespace std;

int main () {

    //Pre-initiated variable. User input will be stored in this variable
    string encrypt{"a"};

	cout << "Please insert a piece of text you want encrypted: ";

    /*This below code allows me to store multiple pieces of text into the variable, including the spaces*/
	getline(cin, encrypt);

    //This for loop runs till it has "encrypted" each character stored in the variable.
	for(int i = 0; i < encrypt.size(); ++i) {

        //As this is just a test to see how its done I simply decided to move every character up three in the ASCII table.
		encrypt[i] = encrypt[i] + 3;

        /*As I decided to go with a plus 3, I wanted to make sure that the words were still separated out
          so I changed it so that instead of spaces being represented as '#' that they would stay as spaces*/
		if (encrypt[i] == char(35)) {

            encrypt[i] = char(32);
		}

	}

	cout << encrypt;

}
