/*
// Chapter 2: exercise 5 (Prata, 2013, p. 63)
//
// "Write a program that has main() call a user-defined function that takes
// a Celsius temperature value as an argument and then returns the equivalent
// Fahrenheit value. The program should request the Celsius value as input
// from the user and display the result, as shown in the following code;
//
//		Please enter a Celsius value: 20
//		20 degrees Celsius is 68 degress Fahrenheit.
//
// For reference, here is the formula for making the conversion:
//		Fahrenheit = 1.8 * degrees Celsius + 32.0"
// 
// By: Dali (Enith D. Sadler)
//
// Prata, Stephen. “Chapter 2 Setting Out to C++.” C++ Primer Plus, Sixth ed.,
	Addison-Wesley, 2013, p. 63.
*/

// addint iostream file for access to std class
#include <iostream>

// limiting access of std class to only cout, cin and endl
using std::cout;
using std::cin;
using std::endl;

// prototype declaration
double celsiusToFahrenheit(double a);

// creating main function
int main(void)
{
	// create variables
	double celsius, fahrenheit;

	// ask user for celsius data to convert to fahrenheit
	cout << "Please enter a Celsius value: ";
	cin >> celsius;
	cout << endl;

	// convert celsius to fahrenheit
	fahrenheit = celsiusToFahrenheit(celsius);

	// display results
	cout << celsius << " degrees Celsius is " << fahrenheit
		<< " degrees Fahrenheit." << endl;

	// keep output window open
	cin.get();
	cin.get();

	// close application
	return 0;
}

double celsiusToFahrenheit(double a)
{
	// create second variable to hold conversion data
	double b;

	// create conversion
	b = (1.8*a + 32.0);

	// return results
	return b;
}
