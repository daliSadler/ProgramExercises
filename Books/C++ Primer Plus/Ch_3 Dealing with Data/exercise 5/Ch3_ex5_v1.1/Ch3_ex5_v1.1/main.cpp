/* 
// ------ PROJECT DETAILS START -----
// Chapter 3: exercise 5 (Prata, 2013, p. 112)
//
// "Write a program that requests the user to enter the current
// world population and the current population of the U.S. (or of
// some other nation of your choice). Store the information in 
// variables that the U.S. (or other nation's) population is of
// the world's population. The output should look something like this:
//		
//		Enter the world's population: 6898758899
//		Enter the population of the U.S.: 310783781
//		The population of the US is 4.50492% of the world population.
//
// You can use the Internet to get more recent figures."
//
// By Dali (Enith D. Sadler)
// ----- PROJECT DETAILS END -----
*/

// including iostream library for print to user and acquire user input
#include <iostream>

// limiting access of iostream library to only cin, cout and endl
using std::cin; using std::cout; using std::endl;

// creating int main function to run application
int main(void)
{
	// creating variables for future use
	long long world, US;

	// Summary of program goal
	cout << "Input world and US population to acquire the percentage.\n\n";

	// ask user for world population
	cout << "Enter the world's population: ";
	cin.putback('_').get(); 
	cin >> world;

	// ask user for US population
	cout << "Enter the population of the U.S.: ";
	cin.putback('_').get();
	cin >> US;

	// calculate percentage of nation population against world
	const long long populationPercentage = ((US*100)/world);
	const long long populationReminder = world%US;

	// output results
	cout << "The population of the U.S. is " << populationPercentage <<
		"." << populationReminder << "% of the world population.\n";

	// keep the window open until next keystroke
	cin.get(); cin.get();

	// close application
	return 0;
}