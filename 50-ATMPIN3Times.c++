#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

/*
	Write a program to read the ATM PIN code from the user, then check if PIN Code =
	1234, then show the balance to user, otherwise print "Wrong PIN" and ask the user to
	enter the PIN again.

	only allow 3 times
*/
int readPinCode()
{
	int PIN;
	cout << "Please enter PIN code \n";
	cin >> PIN;
	return PIN;
}

bool login()
{
	int count = 3, PIN;

	do
	{
		count--;
		PIN = readPinCode();

		if (PIN == 1234)
			return (1);
		else
		{
			system("color 4F"); //turn screen to Red
			cout << "\n Wrong PIN, you have " << count << "more tries";
		}
	} while (PIN != 1234 && count >= 1);

	return (0);
}

void print ()
{
	cout << "your balance is : 7500" << endl;
}

int main()
{
	if (login())
	{
		system("color 2F"); //turn screen to green.
		cout << "\nYour account balance is 7500\n";
	}
	else
		cout << "\nYour card blocked call the bank for help. \n";
	return (0);
}
