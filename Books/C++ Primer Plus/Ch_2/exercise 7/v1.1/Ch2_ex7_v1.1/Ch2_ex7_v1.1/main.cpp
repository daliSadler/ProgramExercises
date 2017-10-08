/*
// Chapter 2: exercise 7: v1.1 (Prata, 2013, p. 63)
//
// "Write a program that asks the user to enter an hours value
// and a minute value. The main() function should then pass two
// values to a type 'void' function that displays the two values
// in the format shown in the following sample run:
//
//		Enter the number of hours: 9
//		Enter the number of minutes: 28
//		Time: 9:28"
//
// By: Dali (Enith D. Sadler)
//
// Prata, Stephen. “Chapter 2 Setting Out to C++.” C++ Primer Plus, Sixth ed.,
//	Addison-Wesley, 2013, p. 63.
*/

// gain access to cin, cout and endl
#include <iostream>

// limit access of std class to only cin, cout and endl
using std::cin;
using std::cout;
using std::endl;

// PROTOTYPE
void printTime(double HR, double MIN);

// call main function
int main(void)
{
	// create two variables to hold data
	double userHR, userMIN;

	// ask user for data
	cout << "Enter the number of hours: ";
	cin >> userHR;
	cout << "Enter the number of minutes: ";
	cin >> userMIN;

	// pass data to user-defined function
	printTime(userHR, userMIN);

	// keep output window open
	cin.get();
	cin.get();

	// close application
	return 0;
}

// PROTOTYPE DEFINITION
void printTime(double HR, double MIN)
{
	cout << "Time: " << HR << ":" << MIN << endl;
}