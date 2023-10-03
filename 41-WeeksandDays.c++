#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
	Write a program to read a
	NumberOfHours and calculates the 
	number of weeks, and days included 
	in that number.
*/

float readNumberOfHours(string Message)
{
    float hours = 0;

    cout << Message << endl;
    cin >> hours;
	if (hours <= 0)
		return readNumberOfHours("Number must be >0");
    return hours;
}

float numberOfDays(float hours)
{
	float Days;

	Days = hours / 24;
	return Days;
}

float numberOfWeeks(float Days)
{
	float weeks;

	weeks = Days / 7;
	return weeks;
}


void print(float hours, float Days, float Weeks)
{
	cout << "the total Hours is :"<< hours << endl;
	cout << "the total Days is :"<< Days << endl;
	cout << "the total Weeks is :"<< Weeks << endl;
}

int main()
{  
	float hours = readNumberOfHours("enter hours");
	print(hours, numberOfDays(hours), numberOfWeeks(numberOfDays(hours)));
	return (0);
}
