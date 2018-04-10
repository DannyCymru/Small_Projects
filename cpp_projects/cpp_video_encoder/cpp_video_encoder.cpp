#include <iostream>
#include <cstdlib>
using namespace std;

int main () {

	string in_name {"Imp"};

	string out_name {"I am not an imp"};

    //Prompt to ask the user to enter the full name of the file to transcode
	cout << "Please insert the name of the file to encode\n";

	cin >> in_name;

    //Prompt to ask the user to name the outputted file
	cout << "What do you want the name of the encoded file to be?\n";

	cin >> out_name;

    //System will run the command on the system as if you had entered it into the terminal
	system(("ffmpeg -i " + in_name + " " + out_name + ".mp4").c_str());
}
