/* This application prompts the user for their name, and their address. They are then prompted with a menu of items to select from.
After choosing the product, the program confirms the choice and also the address to send it to.
*/

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	char selection = ' ';
	string name = "";
	string address = "";

	//Ask the user to input their name
	cout << "Welcome to Oswald's Oddities! Please enter your name: ";
	std::getline(std::cin, name);

	//Repeat the users name
	cout << "Hello " + name << "!" << endl;

	//Ask the user to enter their address
	cout << "Please enter your mailing address: ";
	std::getline(std::cin, address);

	//Repeat the users address back to them
	cout << "The mailing address you entered is: " + address << "." << endl;

	do
	{
		cout << "Thank you! Now please select a menu item from below: " << endl;
		//Display the menu
		cout << "Oswald's Oddites Menu";
		cout << "=====================" << endl;
		cout << "1 - Shrunken Head" << endl;
		cout << "2 - Rabbit's Foot" << endl;
		cout << "3 - Fossilized Amber" << endl;
		cout << "4 - View my address" << endl;
		cout << "X - Exit! Get me out of here!" << endl << endl;
		cout << "Enter selection: ";

		//User inputs selection
		cin >> selection;

		switch (selection)
		{
		case '1':
			cout << "Added one Shrunken Head to the shopping cart." << endl;
			break;
		case '2':
			cout << "Added one Rabbit's Foot to the shopping cart." << endl;
			break;
		case '3':
			cout << "Added one Fossilized Amber shard to the shopping cart." << endl;
			break;
		case '4':
			cout << "Your address is: " + address + "." << endl;
			break;
		case 'X':
		case 'x':
			cout << "Hopefully we didn't scare you! Goodbye!" << endl;
			break;

		//If user input incorrect choice, inform them the choice was invalid
		default: cout << "Your selection is invalid, please try again.";
		}
		cout << endl << endl;
	} while (selection != 'X' && selection != 'x');

    return 0;
}

