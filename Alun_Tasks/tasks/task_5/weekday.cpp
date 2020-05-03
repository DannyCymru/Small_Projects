#include <iostream>
#include <string>
using namespace std;

int main () {

	string weekday {"BoringDay"};

	cout << "Hi, what day of the week is it?\n";

	cin >> weekday;
/*this program is technically meant to have been made without loops like the one below but adding this loop for tolower
makes it so much easier to create if statements as I don't need to worry about a string being entered exactly as I expect it.
Allows me to add less ors to my if conditions.

Now this loop takes an int that is equal to zero, compares it to the size of the string and then runs the code. Incrementing
it up 1 till i is the same size of the weekday string.
*/
	for (int i = 0; i < weekday.size(); ++i)
	{

/* The below code takes weekday and places it into the char i, this is because tolower only works with characters and not
strings, then tolower changes the case of the char. It does this as the loop runs through every character in the
string. If we were to add a cout at the end of this code it would output the whole string in lower case, we could also
add a new line to this to make it more apparent that it loops through and does each character on its own  */

		weekday[i] = tolower(weekday[i]);
	}


	if (weekday == "monday" || weekday == "tuesday" || weekday == "thursday" || weekday == "friday") {

		cout << "Need to go to lectures today";
	}

    else if (weekday == "wednesday") {

        cout << "No lectures today, I am going to revise";

	}

	else if (weekday == "saturday" || weekday == "sunday") {

        cout << "Not sure I am going to get up today";
	}

    else {

        cout << "Never heard of " << weekday;
    }

    cin.get();
    cin.ignore();
}


