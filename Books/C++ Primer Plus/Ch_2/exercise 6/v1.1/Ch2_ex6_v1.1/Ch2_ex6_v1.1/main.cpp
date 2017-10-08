/*
// Chapter 2: exercise 6: v1.1 (Prata, 2013, p. 63)
//
// "Write a program that has main() call a user-defined function
// that takes a distance in light years as an argument and then
// returns the distance in astronomical units. The program should
// request the light year value as input from the user and display
// the result, as shown in the following code:
//
//		Enter the number of light years: 4.2
//		4.2 light years = 265608 astronomical units.
// 
// An astronomical unit is the average distance from the earth to
// the sun (about 150,000,000 km or 93,000,000 miles), and a light
// year is the distance light travels in a year (about 10 trillion
// kilometers or 6 trillion miles). (The nearest start after the
// sun is about 4.2 light years away.) Use type 'double' (as in 
// Listing 2.4) and this conversion factor:
//
//		1 light years = 63,240 astronomical units"
//
// By: Dali (Enith D. Sadler)
//
// Prata, Stephen. “Chapter 2 Setting Out to C++.” C++ Primer Plus, Sixth ed.,
//	Addison-Wesley, 2013, p. 63.
*/

// gain access to cin, cout and endl
#include <iostream>

// limiting std class access to only cin,
// cout and endl
using std::cin;
using std::cout;
using std::endl;

// PROTOTYPE
double LYconvAU(double a);

// main call
int main(void)
{
	// variable create
	double LY, AU;

	// Ask user for LY number to convert to AU
	cout << "Enter the number of light years: ";
	cin >> LY;

	// call user-defined function
	AU = LYconvAU(LY);

	// print results
	cout << LY << " light years = " << AU << " astronomical units"
		<< endl;

	// keep output window open until next key stroke from user
	cin.get();
	cin.get();

	// close application
	return 0;
}

// PROTOTYPE DEFINITION
double LYconvAU(double a)
{
	return (a * 63240);
}