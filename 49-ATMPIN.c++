#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
	Write a program to read the ATM PIN code from the user, then check if PIN Code =
	1234, then show the balance to user, otherwise print "Wrong PIN" and ask the user to
	enter the PIN again.
*/

void readPositiveNumber(string Message)
{
    float Num = 0;

    cout << Message << endl;
    cin >> Num;
	if (Num != 1234)
		return readPositiveNumber("Wrong PIN");
}

void print()
{
	cout << "your balance is : 7500" << endl;
}

int main()
{
	readPositiveNumber("enter your pin");
	print();
	return (0);
}
