#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
	Write a program to ask the user to enter month then print the month.
*/

enum enMonths {jan = 1, feb = 2, mar = 3, apr = 4, may = 5, june = 6, july = 7, aug = 8, sep = 9, oct = 10, nov = 11, dec = 12};

int readNumberInRange (string message)
{
	int num;

	cout << message << endl;
	cin >> num;

	if (num <= 0 || num > 13)
		return(readNumberInRange("Wrong Month"));

	return (num);
}

enMonths getMonth ()
{
	return (enMonths)readNumberInRange("enter number");
}

void printMonth (enMonths month)
{
	switch (month)
	{
	case enMonths::jan:
		cout << "january" << endl;
		break;
	case enMonths::feb:
		cout << "febraury" << endl;
		break;
	case enMonths::mar:
		cout << "march" << endl;
		break;
	case enMonths::apr:
		cout << "april" << endl;
		break;
	case enMonths::may:
		cout << "may" << endl;
		break;
	case enMonths::june:
		cout << "june" << endl;
		break;
	case enMonths::july:
		cout << "july" << endl;
		break;
	case enMonths::aug:
		cout << "august" << endl;
		break;
	case enMonths::sep:
		cout << "september" << endl;
		break;
	case enMonths::oct:
		cout << "Octaber" << endl;
		break;
	case enMonths::nov:
		cout << "novamber" << endl;
		break;
	case enMonths::dec:
		cout << "december" << endl;
		break;
	default:
		cout << "invalid number" << endl;
		break;
	}
}

int main()
{
	printMonth(getMonth());
	return (0);
}
