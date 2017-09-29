/*
Breanna Gateley - 9/25/17 Period 4
Assignment name: Take in Data 
display data, accept use response, display changed data
*/

#include <iostream>
#include <conio.h>

using namespace std;

void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

void main() {
	int eggs; // how many eggs do you consume daily?
	char firstegg; // what letter does egg start with?
	double gpa; // what is your gpa
	double mygpa = 100000000.0;
	bool you_are_not_egg_kun;


	cout << "How many eggs do you consume daily: ";
	cin >> eggs;
	cout << "What is the first letter of egg: ";
	cin >> firstegg;
	cout << "What is your GPA: ";
	cin >> gpa;
	you_are_not_egg_kun = gpa < mygpa;

	
	cout << "your egg consumption of  " << eggs << " is offensive to the egg community. \n";
	cout << "the lttr '" << firstegg << "' dos not exist in gg langaug from now on. You must di." << endl;
	cout << "Your smartnss lvl is " << gpa << " , which mans you ar not gg-kun and must be \ntrminatd." << '\n';
	if (you_are_not_egg_kun) {
	


		pause();
	}
	






}