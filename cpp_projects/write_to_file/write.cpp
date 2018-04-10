#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ofstream outfile;

	outfile.open("test.txt");

	string test {"Hello_world"};

	cout << "Please inset a multiple word string: ";
	cin >> test;

	getline(cin,test);

	outfile << test;

	outfile.close();

}
