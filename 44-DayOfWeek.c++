#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
	Write a program to ask the user to enter day then print the day.
*/

enum enDays {sunday = 1, monday = 2, tuesday = 3, wednesday = 4, thursday = 5, friday = 6, saturday = 7};

float readPositiveNumber(string Message)
{
    float Num = 0;

    cout << Message << endl;
    cin >> Num;
	if (Num <= 0)
		return readPositiveNumber("Number must be >0");
	else if (Num > 8)
		return readPositiveNumber("Wrong Day");
    return Num;
}

enDays readDayOfWeek()
{
	return (enDays) readPositiveNumber("Please enter day number ?");
}

string getDayOfWeek(enDays day)
{
	switch (day)
	{
	case enDays::saturday:
		return "Saturday";
	case enDays::sunday:
		return "Sunday";
	case enDays::monday:
		return "Monday";
	case enDays::tuesday:
		return "Tuesday";
	case enDays::wednesday:
		return "Wednesday";
	case enDays::thursday:
		return "Thursday";
	case enDays::friday:
		return "Friday";
	default:
		return "Not valid day";
	}
}

int main()
{  
	cout << getDayOfWeek(readDayOfWeek()) << endl;
	return (0);
}
