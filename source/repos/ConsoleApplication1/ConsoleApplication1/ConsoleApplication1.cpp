// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

// This code prompts a user to enter their name
#include <iostream>
#include <string>
#include "stdafx.h"
using namespace std;

int main(void)
{
	char selection = ' ';
	string name = "";

	//Ask user for her/his name
	cout << "Please enter your name ==> ";
	cin >> name;

	//display user name
	cout << "Hello " + name << endl;

	do
	{
		cout << "Please select an action from the menu below" << endl;
		// display menu
		cout << "My Menu";
		cout << "========" << endl;
		cout << "1 - View My Address" << endl;
		cout << "2 - View My Email Address" << endl;
		cout << "3 - View Vacation Days Taken" << endl;
		cout << "X - Exit " << endl << endl;
		cout << "Enter selection: ";
		// read user selection
		cin >> selection;

		switch (selection)
		{
		case '1':
			cout << "View My Address is selected" << endl;
			break;
		case '2':
			cout << "View My Email Address is selected" << endl;
			break;
		case '3':
			cout << "View Vacation Days Taken is selected" << endl;
			break;
		case 'X':
		case 'x':
			cout << "Thank you!!!" << endl;
			break;
			// other than 1, 2, 3 and X...
		default: cout << "Invalid selection. Please try again";
			// no break in the default case
		}
		cout << endl << endl;
	} while (selection != 'X' && selection != 'x');

	return 0;
}
