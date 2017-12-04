/*
// ------ PROJECT DETAILS START -----
// Chapter 3: exercise 6: version 1.1 (Prata, 2013, p.112)
//
// "Write a program that asks how many miles you have driven and
// how many gallons of gasoline you have used and then reports the
// miles per gallon your car has gotten. Or, if you prefer, the
// program can request distance in kilometers and petrol in liters
// and then report the result European style, in liters per 100
// kilometers."
//
// By Dali (Enith D. Sadler)
// ----- PROJECT DETAILS END -----
*/

// library access
#include <iostream>

// limiting access to cin, cout and endl
using std::cin; using std::cout; using std::endl;

// int main(void) to run program
int main(void)
{
	// create variables
	int distance, gallons, result;

	// ask user input
	cout << "Determine how many miles you have driven and " <<
		"how many gallons have been used.\n\n";

	cout << "Input the number of miles driven: ";
	cin.putback('_').get();
	cin >> distance;

	cout << "Input the number of gallons used: ";
	cin.putback('_').get();
	cin >> gallons;

	// convert data
	result = distance / gallons;

	// output results to user
	cout << "\nYou have driven " << distance << " miles and used " <<
		gallons << " gallons. \nYour average mileage per gallon your " <<
		"current vehicles uses is " << result << "." << endl;

	cout << "\nThank you for using my application." << endl;
	
	// maintain window open until next keystroke
	cin.get(); cin.get();

	// close application
	return 0;
}