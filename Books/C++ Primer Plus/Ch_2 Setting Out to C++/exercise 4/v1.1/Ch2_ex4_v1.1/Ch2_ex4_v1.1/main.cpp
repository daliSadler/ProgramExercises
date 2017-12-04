/*
// Chapter 2: exercise 4 (Prata, 2013, p. 63)
//
// "Write a program that asks the user to enter his or her
// age. The program then should display the age in months:
//		Enter your age: 29
//		Your age in months is 384."
//
// By: Dali (Enith D. Sadler)
//
// Prata, Stephen. “Chapter 2 Setting Out to C++.” C++ Primer Plus, Sixth ed.,
//	Addison-Wesley, 2013, p. 63.
*/

// add iostream to access cin, cout and endl commands
#include <iostream>

// limit access to std class to only cout, cin and endl commands
using std::cout;
using std::cin;
using std::endl;

// create main function
int main(void)
{
	// create age variables years and months
	double years, months;

	// Ask user to input age in years
	cout << "Enter your age: ";
	cin >> years;

	// convert years into months
	months = (years * 12);

	// display results to user
	cout << endl;
	cout << "Your age in months is " << months << "." << endl;

	// Keep output window open until next stroke from user
	cin.get();
	cin.get();

	// close application
	return 0;
}