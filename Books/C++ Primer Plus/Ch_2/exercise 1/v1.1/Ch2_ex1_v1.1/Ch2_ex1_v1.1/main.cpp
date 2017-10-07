/* Prata, Stephen. “Chapter 2 Setting Out to C++.” 
// C++ Primer Plus, Sixth ed., Addison-Wesley, 2013, 
// p. 62.
//
// "Write a C++ program that displays your name and
// address (or if you value your privacy, a fictitious
// name and address)."*/

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	cout << endl << "Here is my message in English." << endl 
		<< endl << "My name is Enith Dalí Sadler, but I prefer to go by "
		<< endl << "Dalí, Dolly in English. Other nicknames I have used "
		<< endl << "at work are 'eds' or 'edsadler'. Online you may also"
		<< endl << "know me as 'Dealica', 'Deelia' or even 'Dorika'."
		<< endl << "Other usernames I have used before  "
		<< endl << "are 'Dali08', 'BoricuaDali' and 'BoricuaDali08'." << endl
		<< endl << "I currently reside in Southwestern NY, but "
		<< endl << "I lived in PR for about 12 years. I can fluently "
		<< endl << "communicate in Spanish and English." << endl << endl;

	cout << "-----------------------------------------------------------"
		<< endl << endl;

	cout << "Aqui esta mi mensage en español." << endl
		<< endl << "Me llamó Enith Dalí Sadler, pero prefiero ir por Dalí"
		<< endl << "o Dolly en inglés. Otros apodos que e usado en el trabajo"
		<< endl << "son 'eds' o 'edsadler'. Por la internet me podrias" 
		<< endl << "conocer como 'Dealica', 'Deelia' o hasta 'Dorika'."
		<< endl << "Otros nombres de usuarios que e usado anteriormente "
		<< endl << "son 'Dali08', BoricuaDali' y 'BoricuaDali08'." << endl 
		<< endl << "Presentemente vivo en el Suroeste de NY, pero vivi"
		<< endl << "en PR por casi 12 años. Me puedo comunicar fluentemente"
		<< endl << "en Español e Inglés. " << endl;

	cin.get();
	cin.get();	// Maintain the output window open 
	return 0;
}