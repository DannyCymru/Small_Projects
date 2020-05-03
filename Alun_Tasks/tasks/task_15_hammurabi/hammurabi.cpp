#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

//constant variables

constexpr int min_grain_to_survive {20};

constexpr int max_land_farmable_per_person {15};

constexpr int seed_required_per_acre {2};

//Kingdom Variables

 int k_grain {3000};
 int k_area  {1000};

 int k_year {1};
 int k_harvest {0};
 int k_peasants {100};

 int seed {-1};

 int food {0};

//this status report function simply gives the player information about what resources he/she has left and a bit more detail about his game.
void status_report() {

	cout << "The year is " << k_year <<"\nYou have " << k_peasants << " peasents, " << k_grain << " grains in your kindom, " << k_area << " area in your kingdom and your last harvest was " << k_harvest << " bushels\n\n";


}

// this function runs through the maths for the year and calculates how much the player gains for the next year
int simulate_one_year(int food, int seed) {

	// this makes k_grain equal to grain minus the used food and used seed
	k_grain = k_grain - food - seed;

 /*... Calculate new harvest
            1. How many acres can be planted with seed.
            2. The yield per acre is random 2-4, this was originally 2-6 but I found that it made the game way too easy as one harvest could yeild an extremley high amount.
            3. Harvest is yield * area planted. */
	int acresPlanted = seed / seed_required_per_acre;

	// srand is to give the random number function a real random seed.
	srand(time(NULL));

	int yeild_per_acre = (rand() % 4) + 2;

	k_harvest = yeild_per_acre * acresPlanted;

	//this makes k_grain add on the value of k_harvest and stores this new number into the k_grain variable
	k_grain += k_harvest;

	// this changes the value of k_peasants per year
	k_peasants = ((k_peasants - k_peasants) + food / min_grain_to_survive);

	/*if statement to check how much population to add each year, if given excess food the people would obviously end up populating.
	so for every 2 peasants the if statement will add another 1 peasant*/
	if ( food / min_grain_to_survive > 1 && k_year <= 2 && k_peasants >= 2) {

		k_peasants = k_peasants + k_peasants / 2;
	}

	//increments the year each time this program is ran
	++k_year;
}

/* a small function to run a few checks to end the game earlier than the end of the while loop. This is so if you user manages resources badly
the game doesn't just continue going, forcing the user to enter 0 for the rest of the game for both values. */

void gameover() {


	if (k_harvest == 0 && k_grain - food == 0 && seed == 0) {

		cout << "\n\nI am sorry exalted ruler, you have failed. Your kingdom has not produced any harvest and you have no grain.";

		/*exit is a function in c and c++ that forces a program to end, this is usually not in best practice if using objects, however as this code is just procedural
		this should work fine. Also the main negative of using exit() is usually that it doesn't deconstruct static objects, in c++ 11 onwards it does however and
		that is the standard that my compiler uses and standard I use when writing my code */
		exit(EXIT_SUCCESS);
		cin.get();
        cin.ignore();
	}

	else if ( k_grain - food == 0 && k_harvest == 0) {

        cout << "\n\nI am sorry ruler but you have failed. You may of fed your people for this year but you planted 0 seed and have no grain left. You can not gain any harvest and your people will starve next year";
        exit(EXIT_SUCCESS);
        cin.get();
        cin.ignore();
	}

	else if ( k_peasants == 0) {

        cout << "\n\nI am sorry leader, I am not sure how this has happened but everyone is dead.";
        exit(EXIT_SUCCESS);
        cin.get();
        cin.ignore();
	}

	else if (k_year == 6) {

        cout << "\n\ncongrats!! You have finished the game with: \n";
        status_report();

        cin.get();
        cin.ignore();
	}


}


int main() {

	while (k_year <= 5 && k_peasants > 0) {

		status_report();

		// quick check to know how much food you want to actually feed the peasents
		cout << "Exalted ruler, how much food should we feed the peasents? ";

		cin >> food;

		if (k_grain - food < 0) {

            cout << "I am sorry but you do not have that much grain to use please try again: ";

            cin >> food;

		}

		cout << "Exalted Ruler, how much of the remaining " << k_grain - food << " bushels should be planted? ";


		cin >> seed;


		/*the below is an if else check to make sure you actually have enough grains to seed
		this if checks to see if the grains is more than what the user inputted for seed. To do this check we do k_grain
		minus the amount we chose to put towards food this check allows the program to proceed as usual as this would be a correct input */
		if (k_grain - food >= seed) {

			simulate_one_year(food, seed);

		}

		/*this one checks if the seed inputted is higher than the amount of grain and then asks you to input it again.
		Once the user has hopefully inputted a correct amount the program runs through to the next year */
		else if (k_grain - food < seed) {

			cout << "I am sorry leader but you do not have enough grain, please try again: ";

			cin >> seed;

			simulate_one_year(food, seed);

		}

		gameover();
	}
}





