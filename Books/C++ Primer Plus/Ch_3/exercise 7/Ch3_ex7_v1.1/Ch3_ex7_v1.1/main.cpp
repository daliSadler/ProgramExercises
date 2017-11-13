/* ----- PROJECT DETAILS START -----
// Chapter 3: exercise 7 (Prata, 2013, p. 113)
//
// "Write a program that asks you to enter an automobile gasoline
// consumption figure in the European style (liters per 100 kilo-
// meters) and converts to the U.S. style of miles per gallon.
// Note that in addition to using different units of measurement,
// the U.S. approach (distance/fuel) is the inverse of the 
// European approach (fuel/distance). Note that 100 kilometers is
// 62.14 miles, and 1 gallon is 3.875 liters. Thus, 19 mpg is 
// about 12.4 l/100km, and 27 mpg is about 8.7 l/100km."
//
// By Dali (Enith D. Sadler)
// ----- PROJECT DETAILS END -----
*/

// Add libraries
#include <iostream>

// limited access of iostream library
using std::cin; using std::cout; using std::endl;

// const values for future conversions
const double liters = 3.875;
const double kilometers = 100;
const double mile = 1.609344;

// Conversion prototypes or user-defined functions
// European to US
double Europe_to_US(double mpg);
// US to European
double US_to_Europe(double lkm);

// running the program
int main(void)
{
	// add variables for data
	double input, result;
	
	// explain program purpose
	cout << "Let's convert from European style liters per 100 "
		<< "kilometers to U.S. style miles per gallon.\n\n";

	// ask user to input data
	cout << "Please input travel amount to convert to U.S. style: ";
	cin.putback('_').get();
	
	// store data
	cin >> input;
	
	// convert data
	result = Europe_to_US(input);
	
	// output results
	cout << input << " liters/ 100 km is " << result << " mpg.\n\n";

	// keep window open until next keystroke from user
	cin.get(); cin.get();
	
	// close application
	return 0;
}

// Prototype definition
// European to US definition ***
// US convertion (distance/fuel)
double Europe_to_US(double mpg)
{	
	// https://jalopnik.com/5572355/how-to-convert-mpg-to-l100-km-in-your-head
	// 100 kilometers is 62.14 miles
	// 1 gallon is 3.875 liters
	return ((kilometers*liters) / (mile*mpg));

}

// US to European definition
double US_to_Europe(double lkm)
{	// European conversion (fuel/distance)
	return ((mile*lkm) / (kilometers*liters));
}