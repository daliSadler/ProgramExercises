/*
// Chapter 3: exercise 1: v1.1 (Prata, 2013, p. 111)
//
// "Write a short program that asks for your height in integer
// inches and then converts your height to feet and inches. Have
// the program use the underscore character to indicate where to 
// type the response. Also use a "const" symbolic constant to 
// represent the conversion factor."
//
// By: Dali (Enith D. Sadler)
// 
// Prata, Stephen. "Chapter 3 Dealing with Data." C++ Primer Plus,
//		Sixth ed., Addison-Wesley, 2013, p. 111.
*/

// library access
#include <iostream>

// limiting acess to iostream library
using std::cout; using std::cin; using std::endl;

// create main function
int main(void)
{
	// variables
	int heightIN;
	
	// Ask use to input their height in inches
	cout << "Height convertion from inches to feet and inches." <<
		endl << endl << "Input your height in inches: ";
	// display underscore without closing application prematurely
	cin.putback('_');
	cin.get();
	// acquire data from user
	cin >> heightIN;
			
	// constant variable declaration - formula conversions
	const int heightFT = heightIN / 12;
	const int remIN = heightIN%heightFT;

	cout << endl << "The height in inches inputed is " << 
		heightIN << " is converted to " << heightFT << 
		" feet and " << remIN << " inches." << endl;
	
	// keep window open until next keystroke
	cin.get();
	cin.get();

	// close application
	return 0;
}