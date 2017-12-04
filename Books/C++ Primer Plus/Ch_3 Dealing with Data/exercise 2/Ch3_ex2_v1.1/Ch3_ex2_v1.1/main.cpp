/*
// Chapter 3: exercise 2: v1.1 (Prata, 2013, p. 112)
// 
// "Write a short program that asks for your height in feet and
// inches and your weight in pounds. (Use three variables to store
// the information.) Have the program report your body mass index
// (BMI).
//
// To calculate the BMI, first convert your height in feet and 
// inches to your height in inches (1 foot = 12 inches). Then 
// convert your height in inches to your height in meters by
// multiplying by 0.0254. Then convert your weight in pounds into
// your mass in kilograms by dividing by 2.2. Finally, compute
// your BMI by dividing your mass in kilograms by the square of 
// your height in meters. Use symbolic constants to represent the
// various convertion factors."
//
// By Dali (Enith D. Sadler)
*/

// accessing cin, cout and endl to input and output data
#include <iostream>
// accessing square root
#include <math.h>
// limit access of iostream to only cin, cout, and endl
using std::cin; using std::cout; using std::endl;

// create main function to perform actions
int main(void)
{
	// variable create to hold data
	double feet, inches, weight;
	
	// Intro message
	cout << "Welcome to Chapter 3, exercise 2." << endl
		<< "In this program you will be able to convert your "
		<< "height in feet and inches, " << endl <<
		"and weight in pounds into your BMI." << endl << endl;

	// Acquire users data of height in feet
	cout << "Please input your height in feet: ";
	cin.putback('_').get();
	cin >> feet;

	// Acquire users data of height in inches
	cout << "Please input your height in inches, not including " <<
		"the feet you input above: ";
	cin.putback('_').get();
	cin >> inches;

	// convert users input from feet into inches
	inches += feet * 12;

	// Acquire user data of weight in pounds
	cout << "Please input your weight in pounds (lbs): ";
	cin.putback('_').get(); 
	cin >> weight;
	
	// variables to perform conversions
	const double meters = inches*0.0254;
	const double kg = weight / 2.2;
	const double BMI = kg / (meters*meters);

	// print out the BMI results based on user input
	cout << "Your BMI or body mass index is " << BMI;

	// keep window open until next keystroke from user
	cin.get();
	cin.get();

	// close the application
	return 0;
}