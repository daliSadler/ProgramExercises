/*
// Chapter 3: exercise 4: v1.1
//
// "Write a program that asks the user to enter the number of
// seconds as an integer value (use type long, or, if available, 
// long long) and that then displays the equivalent time in days,
// hours, minutes, and seconds. Use symbolic constants to represent
// the number of hours in the day, the number of minutes in an hour,
// and the number of seconds in a minute. The output should look
// like this:
//
//		Enter the number of seconds: 31600000
//		31600000 = 365 days, 17 hours, 46 minutes, 40 seconds"
//
// By Dali (Enith D. Sadler)
*/

// add access to iostream library for input and display
#include <iostream>

// limit access of iostream library to only cin, cout and endl
using std::cin; using std::cout; using std::endl;

// create main function to run program
int main(void)
{
	// create variables long (or long long if possible)
	long long input, totalD, totalH, totalM, totalS;

	// constant max values
	const long long days(365); 
	const long long hours(24);
	const long long minutes(60);
	const long long seconds(60);

	// explain application purpose
	cout << "Input a value below in seconds to convert to days, " <<
		"hours, minutes, and seconds.\n\n";

	// ask user for data
	cout << "\tEnter the number of seconds: ";
	cin.putback('_').get();
	cin >> input;

	// converter formula
	// total days
	totalD = (((input / hours) / minutes) / seconds);
	// total hours
	totalH = ((input / minutes) / seconds) % minutes;
	// total minutes
	totalM = (input / seconds) % seconds;
	// total seconds
	totalS = input % seconds;
	
	// output results to user
	cout << "\t" << input << " seconds = " << totalD << " days, " <<
		totalH << " hours, " << totalM << " minutes, " <<
		totalS << " seconds\n";

	// maintain window open until next keystroke
	cin.get(); cin.get();

	// close application
	return 0;
}