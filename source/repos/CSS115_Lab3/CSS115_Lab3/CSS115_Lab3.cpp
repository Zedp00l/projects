// CSS115_Lab3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class Customer
{
public: //access specifier - makes functions inside class usable OUTSIDE class

	string customerName;
	string customerAddress;
	void setCustomerName(string);
	string getCustomerName();
	void setCustomerAddress(string);
	string getCustomerAddress();

	//CONSTRUCTOR
	Customer();
};

//definition of set/get Employee information functions
void Customer::setCustomerName(string name)
{
	customerName = name;
}

//function to set/get Customer Address
void Customer::setCustomerAddress(string address)
{
	customerAddress = address;
}


//initialization
string Customer::getCustomerName() { return customerName; }
string Customer::getCustomerAddress() { return customerAddress; } 

Customer::Customer()
{
	customerName = "";
	customerAddress = "";
}

//function to display the menu of items
void displayMenu(Customer *cust)
{
	cout << cust->getCustomerName() << ", please selection an item from the menu below... \n" << endl;

	cout << "Oswald's Oddities Menu" << endl;
	cout << "========================" << endl;
	cout << "1 - Shrunken Head - $899.99" << endl;
	cout << "2 - Rabbit's Foot - $19.99" << endl;
	cout << "3 - Fossilized Amber - $99.99" << endl;
	cout << "4 - View My Shopping Cart" << endl;
	cout << "5 - View My Mailing Address" << endl;
	cout << "X - EXIT! Get me out of here!" << endl;
	cout << "Enter selection: " << endl;
}

//View address
void viewAddress(Customer *cust)
{
	cout << cust->getCustomerName() << ", the address we have on file is: \n" << cust->getCustomerAddress() << endl;
}

//main(), main portion of the program, uses a do/while loop with switch statements for user selections
int main()
{
	//Usage variables. one for user selection, the other creates instance of customer class named "customer1"
	char selection = ' ';
	Customer customer1;

	//Stores the total $$ of items in the shopping cart
	double cartTotal = 0;

	// Vector declaration section
	vector <string> products;

	//I need to find a way to ask the user to enter specific quantities to add to the shopping cart and manipulate the total
	//vector <double> quantities;

	//Initialize customer members
	cout << "Hello, welcome to Oswald's Oddites! Home to everything you can't find at your local Walmart! Please enter your name: " << endl;
	getline(cin, customer1.customerName);

	cout << "Before we continue, " << customer1.getCustomerName() << ", please enter the mailing address we will be shipping your items to: " << endl;
	getline(cin, customer1.customerAddress);

	do
	{
		//display the menu
		displayMenu(&customer1);

		//accept user selection
		cin >> selection;

		switch (selection)
		{
		case '1':
			cout << "Add one Shrunken Head to my shopping cart.\n" << endl;
			products.push_back("Shrunken Head\t$899.99\n");
			cartTotal += 899.99;
			break;
		case '2':
			cout << "Add one Rabbit's Foot to my shopping cart.\n" << endl;
			products.push_back("Rabbit's Foot\t$19.99\n");
			cartTotal += 19.99;
			break;
		case '3':
			cout << "Add one Fossilized Amber to my shopping cart.\n" << endl;
			products.push_back("Fossilized Amber\t$99.99\n");
			cartTotal += 99.99;
			break;
		case '4':
			cout << "View my shopping cart.\n" << endl;

			for (int i = 0; i < products.size(); ++i)
			{
				cout << "Product# " << i + 1 << '\t' << products[i];
			}

			cout << "The total cost of your items is: $" << cartTotal;

			break;

		case '5':
			cout << "Your mailing address on file is: \n" << endl;
			cout << customer1.getCustomerAddress();
			break;
		
		case 'X':
		case 'x':
			cout << "Hopefully we didn't scare you! Goodbye!\n" << endl;
			break;
		
		// default case - if user input is invalid
		default: cout << "Invalid selection, please try again.\n" << endl;
		}
		cout << endl << endl;
	} while (selection != 'X' && selection != 'x');


	system("pause");
    return 0;
}

