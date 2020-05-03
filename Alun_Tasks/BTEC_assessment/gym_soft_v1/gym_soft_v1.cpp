#include <iostream>
#include <iomanip>
using namespace std;

//As BMR changes depending on if someone is a male or female I needed to make some constant expressions just to make sure that they do not get changed at any point in the program.

//BMR constant for males
constexpr double bmr_constant_male {88.362};

//BMR constant for females
constexpr double bmr_constant_female {447.593};

//Global Variables

double weight {70};

double height {181};

int age {19};

char gender {'B'};

int exercise {8};

double bmr_calculation;

//function declarations for all of the calculations the software will have to make
int bmr(char gender, double weight, double height, int age);

int bmi(double weight, double height);

int kilocalorie_intake(double bmr_calculation, int exercise);

int main() {

	cout << "Hi, we are going to calculate your BMR, please specify your gender (lower case and in a single character, eg m), how much you weigh (in kgs), what is your height (in cms) and what is your age (in years)? " ;

	cin >> gender >> weight >> height >> age;

    //Calls the BMR function and reads in the gender, weight, height and age variables
	bmr(gender, weight,height,age);

	bmi(weight, height);

	cout << "Now lets work out your kilocalorie intake. Do you\n 1. Do little to no exercise\n 2. Light exercise (1-3 days per week)\n 3. Moderate exercise (3-5 days per week)\n 4. Heavy exercise (6-7 days per week)\n 5. Very heavy exercise (twice per day, extra heavy workouts)\n ";

	cin >> exercise;

	kilocalorie_intake(bmr_calculation, exercise);

	cin.get();
	cin.ignore();

}

// Definition for the BMR calculation using the Harris-Benedict equation
int bmr(char gender, double weight, double height, int age){

	if (gender == 'm' || gender == 'M'){

		bmr_calculation = bmr_constant_male + (13.397 * weight) + (4.799 * height) - (5.677 * age);

	}

	else if (gender == 'f' || gender == 'F') {

		bmr_calculation = bmr_constant_female + (9.247 * weight) + (3.098 * height) - (4.330 * age);
	}

	//This displays the result of the bmr calculation to two decimal places
	cout << setprecision(2) << fixed << "Your BMR is: " << bmr_calculation << endl;

}

// This is the calculation to work out a persons BMI
int bmi(double weight, double height) {

	//we have to divide height by 100 as we originally ask for it in cm, which is 100 times the height in metres
	height = height / 100;

	double bmi_calculation = weight / (height * height);

	//Displays the BMI calculation fixed to 1 decimal place.
	cout << setprecision(1) << fixed << "Your BMI is: " << bmi_calculation << endl;

	if (bmi_calculation >= 30) {

			cout << "You are currently obese, the ideal gym member would have an ideal BMI of 22." << endl;
	}

	else if (bmi_calculation >= 25 && bmi_calculation <= 29.9) {

		cout << "You are currently overweight, the ideal gym member would have a BMI of 22" << endl;
	}

	else if (bmi_calculation >= 18.5 && bmi_calculation <= 24.9) {

		cout << "You are currently at a normal weight but the ideal gym member would have a BMI of 22" << endl;
	}

	else if (bmi_calculation == 22) {

		cout << "Congrats! You have the BMI of an ideal gym member." << endl;
	}

	else if (bmi_calculation <= 18.5) {

		cout << "You are currently underweight, the ideal member should have the BMI of 22 but a person had a healthier weight should at least have a BMI at or above 18.5" << endl;
	}
}

int kilocalorie_intake (double bmr_calculation, int exercise) {

	//As this was a small multiple choice, with each option only changing a very small amount of the code it was easier to just use this switch case to check which option someone chooses.
	switch(exercise){

		case 1: exercise = bmr_calculation * 1.2;
				break;
		case 2: exercise = bmr_calculation * 1.375;
				break;
		case 3: exercise = bmr_calculation * 1.55;
				break;
		case 4: exercise = bmr_calculation * 1.725;
				break;
		case 5: exercise = bmr_calculation * 1.9;
				break;

	}

	cout << "Your kilo-calorie intake to maintain your current weight is: " << exercise;

}
