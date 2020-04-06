#include <iostream>
#include <string>
using namespace std;

// sample functions
string GetUsername();
void AddMoney(int& r_cash);

int main()
{
	// Welcome User
	cout << "\n\n\t\t*** Welcome to RedRiver  Mobile Banking ***\n\n"; 

	// get the Users name as a string for the account
	cout << "\n\nWho is opening this account?\n\n" << endl;

	// Original String
	string Name;
	Name = GetUsername();

	// Welcome the user by name to their account
	cout << "\n\nWelcome " << Name << " to your Cash Mobile Account." << endl;

	// If you have a ref, you have something to refer to
	// Here we create something
	// Original int
	int cash = 1000;

	// Display the Users amount in their account
	cout << "\n\nYou currently have $" << cash << " in your account." << endl;

	// A ref will never be different than what it is referencing
	// Reference
	// *********************** Create a ref ***********************************
	int& r_cash = cash;
	string& r_Name = Name;

	// Then add to their account as though they are depostiing money
	AddMoney(r_cash);

	// Then show total balance
	cout << "\n\nYour new balance is: $" << cash << "." << endl;

	// *********************** Pointer Land Below *************************************
	// Memory address is the only thing a pointer can ever hold!!!!!!!!
	// Pointer
	string* p_Name = &Name;
	int* p_cash = &cash;

	// Then display the pointers as the username and password for the account
	cout << "\n\nAs a new security measure, here is your new Username and Password for this account:" << endl;
	cout << "Username: " << p_Name << endl;
	cout << "Password: " << p_cash << endl;

	// ends the function
	// Which since we are in main will end the program
	return 0;
}

string GetUsername()
{
	string Name;
	getline(cin, Name);

	return Name;
}

void AddMoney(int& r_cash)
{
	cout << "\n\nDepositing Money into account..." << endl;
	r_cash = 3000;

	return;
}