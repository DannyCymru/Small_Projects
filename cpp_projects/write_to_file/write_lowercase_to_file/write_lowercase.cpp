#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	ofstream outfile;

	outfile.open("lowercase.txt");

	string test{"TeST"};

	cout << "Please insert a string: ";

	getline(cin,test);

	for (int i = 0; i < test.size(); ++i)
	{

		test[i] = tolower(test[i]);

	}

	outfile << test;

}
