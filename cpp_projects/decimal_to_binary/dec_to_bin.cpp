#include <iostream>
#include <string>
using namespace std;

/* All of the needed variables for all the functions, all initialised to give a different value incase it fails,
 it will give me a better idea for where it failed if I keep these values different 

Overs will be where we store the variable that we will be putting through all the functions.
I am calling it "overs" because once it actually passes through a function it will
store what is left over from the subtraction. */
int overs {-80};
int subtraction {5};
int decimal {1};

/* This is the first function to change the number to binary. 
We start with the highest number as this will affect what other functions will run */

int first_sub() {

			/*To change a number to binary you need to subtract it from various numbers in the binary sequence
			512 being the first one we need to subtract our number by */
            
            subtraction = 512;

            /* this takes the numbers that the user first gives and then takes it through this functions
                personalised subtraction and leaves the result in our overs variable */
            
            overs -= subtraction;
}

//There is probably a better way to do this but we will create a function for every number in the sequence.


int second_sub() {

    subtraction = 256;

    overs -= subtraction;
    
    /* we set this variable to 1 because if the previous function had failed the stored value of "decimal" would still be 0.
     If we did not change the value here it would make all of the functions incorrect */
    
    decimal =1;
}

int third_sub() {

    subtraction = 128;

    overs-= subtraction;

    decimal = 1;

}

int fouth_sub() {

    subtraction = 64;

    overs -= subtraction;

    decimal = 1;


}

int fifth_sub() {

    subtraction = 32;

    overs -= subtraction;

    decimal = 1;


}

int sixth_sub() {

    subtraction = 16;

    overs -= subtraction;

    decimal = 1;


}

int seventh_sub() {

    subtraction = 8;

    overs -= subtraction;

    decimal = 1;


}

int eigth_sub() {

    subtraction = 4;

    overs -= subtraction;

    decimal = 1;


}

int ninth_sub() {

    subtraction = 2;

    overs -= subtraction;

    decimal = 1;


}

int tenth_sub() {

    subtraction = 1;

    overs -= subtraction;

    decimal = 1;


}

/*This failure function is simply so that if a number can not subtract the decimal that is printed becomes 0 */

int fail() {

    decimal = 0;
    cout << decimal;

}

// Now this is the "main" function, where we actually run and call most of the code.

int main()
{
	cout << "Please input the decimal number you would like to turn to binary: ";

	cin >> overs;


		/* This if and all others after it will be calling the different subtractions based on 
			if the number is equal to a certain range. This one will be testing if Overs is bigger
			or equals to 512 and smaller than 1024. The way this code works however is if you were
			to input 1024 or above it wont actually run anything and will just display full 0s*/
		
		if (overs >=512 && overs < 1024){

    		first_sub();

    		cout << decimal;
    	}

			else {

    			fail();
			}



		if (overs >=256 && overs < 512){

    		second_sub();

    		cout << decimal;

		}

			else {

    			fail();
			}



		if (overs >= 128 && overs < 256){

    		third_sub();

    		cout << decimal;
		}


			else {

    			fail();
			}



		if(overs >= 64 && overs < 128) {

    		fouth_sub();

    		cout << decimal;
		}

			else {

    			fail();
			}



		if (overs >= 32 && overs < 64) {

    		fifth_sub();

   			cout << decimal;
		}

			else {

    			fail();
			}



		if (overs >= 16 && overs < 32) {

    		sixth_sub();

    		cout << decimal;
		}

			else {

    			fail();
			}



		if (overs >= 8 && overs < 16) {

    		seventh_sub();

    		cout << decimal;
		}

			else {

    			fail();
			}



		if (overs >= 4 && overs < 8) {

    		eigth_sub();

    		cout << decimal ;
		}

			else {

    			fail();
			}



		if (overs >= 2 && overs < 4) {

    		ninth_sub();

    		cout << decimal ;
		}

			else {

    			fail();
			}



		if (overs >= 1 && overs < 2) {

    		tenth_sub();

    		cout << decimal;
		}

			else {

    			fail();
			}
/*these two cins are simply to keep the console window open when running the
 .exe file on its own instead of running it through the compiler */
cin.get();
cin.ignore();

return 0;
}
