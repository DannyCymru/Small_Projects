#include <iostream>
#include <ctime>
using namespace std;

int main() {

    /* over complicated this task as well, as I would not trust the user to give the correct years if they knew it was about a job as people always lie about this where possible.
    I have accessed the ctime library to give me access to the tm structure. The tm structure is a public object that gets details from the system to display
    the date. */

    /*time_t is an arithmetic representation of the time, it is the time since jan 1 in 1970 in seconds.
     time(0) is the same, it gives the actual time now in seconds. So this first part means
     time since 1970, variable t = the time right now in seconds.*/
	time_t t = time(0);

	/* struct creates the object structure tm which is used to hold time. So tm times now basically represents that
	we are going to be storing time in the now object, the now object then equals the local time which uses the time t
	variable we created to get all of the number values for the current time. */
	struct tm * now = localtime(& t);

	/* I then created a new integer to hold the time so that it would be easier for me to call.
	We push the now object into tm_year structure which is used to hold the date in year format, we have to then add 1900
	to this value as the previous objects, variables etc only takes the time in seconds from certain dates and would give
	us an incorrect year if we left it as it was.

	for example at the current year, if we removed the "+ 1900" all we would be left with is 117, this is because the
	previous only worked out how much time had passed since the year 1900. So we need to add those previous unaccounted years
    to the integer to get the year, which is currently 2017 */
	int year {now ->tm_year + 1900};

    cout << "Please enter your year of birth: ";

    int year_of_birth {1896};

    cin >> year_of_birth;

    if ( year - year_of_birth >= 18 && year - year_of_birth <= 28) {

    	cout << "Hi there, you are eligible to apply to this job";
    }

    else if (year - year_of_birth <= 18) {

    	cout << "I am sorry, you seem to be too young to apply here, you are only " << year - year_of_birth;
    }

    else if (year - year_of_birth >= 28) {

    	cout << "I am sorry but you are not eligible to apply, we are currently only trying to fill junior roles in our company.";

    }

    cin.get();
    cin.ignore();

}
