/*
// Chapter 2: exercise 3 (Prata, 2013, p. 63)
//
// Instructions:
// "Write a C++ program that uses three user-defined functions
// (counting main() as one) and produces the following output:
//
//		Three blind mice
//		Three blind mice
//		See how they run
//		See how they run
//
// One function, called two times, should produce the first two
// lines, and the remaining function, also called twice, should
// produce the remaining output."
//
//  By: Dali (Enith D. Sadler)
*/

#include <iostream>

// limiting access to std commands
using std::cout;
using std::cin;
using std::endl;

// Prototypes
void blindMice(void);
void howTheyRun(void);

int main(void)
{
	// call the functions to print their data
	blindMice();
	blindMice();
	howTheyRun();
	howTheyRun();

	// keep the output window open
	cin.get();
	cin.get();

	// close application
	return 0;
}

// Prototype Definition
void blindMice(void)
{
	cout << "Three blind mice" << endl;
}

void howTheyRun(void)
{
	cout << "See how they run" << endl;
}