#include <iostream>
using namespace std;

//Global Variables
int end_of_course{0};

string user_grades{"FFF"};

//Function Declarations

// Function to check the length of the string to make sure it matched the number of units in this first year.
int length_check(string user_grades);

//This function is the calculation that gives the numerical value for all of your yearly results.
int end_of_calculation(string user_grades);

// Function to work out the end of course grade depending on the results of the "end_of_" function.
int predicted_grade(int end_of_course);


//Main Function

int main() {

	//In this variation of the program we start the program by asking for the results of the first 9 units.
    cout << "What grades did you get for the first year? (please enter them as single, capital letters. Only up to 9 please) ";

    cin >> user_grades;

    //With the grades we then put it through this function to make sure the right number of units and right characters were entered.
    length_check(user_grades);

    predicted_grade(end_of_course);

    cin.get();
    cin.ignore();


}

//The function "length_check" checks the size of user_grades by 9 which is the number of units in the first year.
int length_check(string user_grades){

    if (user_grades.size() > 9) {

        cout << "I am sorry, this is incorrect, there are only 9 units per year. Please try again: ";
        cin >> user_grades;
    }

    else if (user_grades.size() < 9) {

        cout << "I am sorry, this is incorrect, there are 9 units per year. Please try again: ";
        cin >> user_grades;

    }

    //As we are checking the size and possibly re-entering information to this variable we are calling this function here instead of within the main function, to avoid any bugs.
    end_of_calculation(user_grades);

}


int end_of_calculation(string user_grades) {

    //A for loop to go through every character, the usages of this is to assign value to each character
    for (int i = 0; i < user_grades.size(); ++i) {

        user_grades[i] = toupper(user_grades[i]);

    	//Pass marks are valued at 70 points per unit so we need to add on 70 points per each pass mark.
        if (user_grades[i] == 'P') {
        	end_of_course = end_of_course + 70;
        }

        else if (user_grades[i] == 'M') {
            end_of_course = end_of_course + 80;
        }

        else if (user_grades[i] == 'D') {
            end_of_course = end_of_course + 90;
        }

        //If given an fail in a unit this statement lets the user know that they have indeed failed the course and exits the program.
        else if (user_grades[i] == 'F') {
         	cout << "I am sorry but getting a fail means that you have completely failed the course and will not be able to come back next year" << endl;
         	return 0;
        }

        //if the user enters an incorrect character the program informs them and then ends.
        else {
        	cout << "I am sorry, you seem to have entered an incorrect character, it should be P, M or D" << endl;
            return 0;
        }

    }

    end_of_course = end_of_course * 2;

}

//This function takes the "end_of_course" value and then goes through multiple if statements to check it through multiple ranges to determine the end of course grade.
int predicted_grade(int end_of_course) {

    if (end_of_course >= 1260 && end_of_course <= 1299) {
        cout << "Your predicted grade at the end of the two years is PPP ";
        }

    else if (end_of_course >= 1300 && end_of_course <= 1339) {
        cout << "Your predicted grade at the end of the two years is MPP ";
    }

    else if (end_of_course >= 1340 && end_of_course <= 1379) {
        cout << "Your predicted grade at the end of the two years is MMP ";
    }

    else if (end_of_course >= 1380 && end_of_course <= 1419) {
        cout << "Your predicted grade at the end of the two years is MMM ";
    }

    else if (end_of_course >= 1420 && end_of_course <= 1459) {
        cout << "Your predicted grade at the end of the two years is DMM ";
    }

    else if (end_of_course >= 1460 && end_of_course <= 1499) {
        cout << "Your predicted grade at the end of the two years is DDM ";
    }

    else if (end_of_course >= 1500 && end_of_course <= 1529) {
        cout << "Your predicted grade at the end of the two years is DDD ";
    }

    else if (end_of_course >= 1530 && end_of_course <= 1559) {
        cout << "Your predicted grade at the end of the two years is D*DD ";
    }

    else if (end_of_course >= 1560 && end_of_course <= 1589) {
        cout << "Your predicted grade at the end of the two years is D*D*D ";
    }

    else if ( end_of_course >= 1590) {
        cout << "Your predicted grade at the end of the two years is D*D*D* ";
    }
}
