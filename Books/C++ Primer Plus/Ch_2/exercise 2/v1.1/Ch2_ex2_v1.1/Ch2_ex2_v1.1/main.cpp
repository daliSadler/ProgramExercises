/*
// Chapter 2: exercise 2
//
// Instructions from page 62 (Prata, 2013).
//
// "Write a C++ program that asks for a distance in furlongs
// and converts it to yards. (One furlong is 220 yards)."
//
// Prata, Stephen. “Chapter 2 Setting Out to C++.” C++ Primer Plus, Sixth ed.,
//	Addison-Wesley, 2013, p. 62.

// BY: Dali (Enith D. Sadler)
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	// variables
	double furlong, yard;

	// acquire data from user
	cout << "Type the number of furlong to convert to yards." << endl;
	cin >> furlong;

	// convert furlong to yard
	yard = (furlong * 220);

	// display results
	cout << endl;
	cout << furlong << " furlong is " << yard << " yards." << endl;

	// keep output window open until next stroke from user
	cin.get();
	cin.get();

	// close application
	return 0;
}

