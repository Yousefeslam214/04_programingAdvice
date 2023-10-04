#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
	Write a program to print all letters form A to Z.
*/

void printLettersFromAToZ ()
{
	for (int i = 65; i <= 90; i++)
	{
		cout << char(i) << endl;
	}
}

int main()
{
	printLettersFromAToZ();
	return (0);
}
