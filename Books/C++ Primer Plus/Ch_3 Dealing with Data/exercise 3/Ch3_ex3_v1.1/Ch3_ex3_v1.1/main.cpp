/*
// ------ PROJECT DETAILS BEGIN ------
// Chapter 3: exercise 3: v1.1 (Prata, 2013, p. 112)
//
// "Write a program that asks the user to enter a latitude
// in degrres, minutes, and seconds and that then displays
// the latitude in decimal format. There are 60 seconds of
// arc to a minute and 60 minutes of arc to a degree; 
// represent these values with symbolic constants. You should
// use a separate variable for each input value. A sample run
// should look like this:
//
//		Enter a latitude in degrees, minutes, and seconds:
//			First, enter the degrees: 37
//			Next, enter the minutes of arc: 51
//			Finally, enter the seconds of arc: 19
//			37 degrees, 51 minutes, 19 seconds = 37.8553 degrees"
//
// By Dali (Enith D. Sadler)
// ------ PROJECT DETAILS END ------
*/ 

// accesing iostream library
#include <iostream>
// limiting access of iostream library to only cin, cout 
// and endl commands
using std::cin; using std::cout; using std::endl;

// creating main function to run program
int main(void)
{
	// initializing variables
	float degrees, arcMin, arcSec;
	const int divider = 60;

	// acquire degree data from user
	cout << "Latitude conversion to decimal format.\n\n" <<
		"First, enter the degrees: ";
	cin.putback('_').get();
	cin >> degrees;

	// acquire arc minute data from user
	cout << "Next, enter the minutes of arc: ";
	cin.putback('_').get();
	cin >> arcMin;

	// acquire arc second data from user
	cout << "Finally, enter the seconds of arc: ";
	cin.putback('_').get();
	cin >> arcSec;

	// conversion formula initialization for faster results in the future
	const float latitudeConversion = (((arcSec / 60) + arcMin) / 60) + degrees;

	// ouput data to user
	cout << degrees << " degrees, " << arcMin << " minutes, " << arcSec <<
		" seconds = " << latitudeConversion << " degrees" << endl;

	// keep window open until next keystroke
	cin.get();
	cin.get();

	//close application
	return 0;
}