#include <iostream>
#include <string>
using namespace std;


int main() {

string colour_1 {"TeAl"};
string colour_2 {"OrAnGe"};

cout << "Please insert two primary colours: ";

cin >> colour_1 >> colour_2;

for (int c = 0; c < colour_1.size(); ++c) {

	colour_1[c] = tolower(colour_1[c]);
}

for (int i = 0; i < colour_2.size(); ++i)
{
	colour_2[i] = tolower(colour_2[i]);
}

if (colour_1 == "red" && colour_2 == "blue" || colour_1 == "blue" && colour_2 == "red" ) {

	cout << "You get the secondary colour Purple";

	return 0;
}

else if (colour_1 == "red" && colour_2 == "yellow" || colour_1 == "yellow" && colour_2 == "red" ) {

	cout << "You get the secondary colour Orange";

	return 0;
}

else if (colour_1 == "blue" && colour_2 == "yellow" || colour_1 == "yellow" && colour_2 == "blue" ) {

	cout << "You get the secondary colour Green";

	return 0;
}

cin.get();
cin.ignore();

}
