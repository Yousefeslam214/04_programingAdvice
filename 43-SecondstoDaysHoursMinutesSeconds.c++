#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
	Write a program that the numbers of seconds and changes it to days, hours, minutes, and sconds
*/

struct stTaskDuration
{
	int numberOfDays, numberOfHours, numberOfMinutes, numberOfSeconds;
};

float readPositiveNumber(string Message)
{
    float Num = 0;

    cout << Message << endl;
    cin >> Num;
	if (Num <= 0)
		return readPositiveNumber("Number must be >0");
    return Num;
}

stTaskDuration readDuration(int totalSeconds)
{
	stTaskDuration taskDuration;
	const int secondsPerDay = 24 * 60 * 60;
	const int secondsPerHour = 60 * 60;
	const int secondsPerMinute = 60;
	int reminder = 0;

	taskDuration.numberOfDays =    (int)(totalSeconds / secondsPerDay);
	reminder = totalSeconds % secondsPerDay;
	taskDuration.numberOfHours =   (int)(reminder / secondsPerHour);
	reminder = totalSeconds % secondsPerHour;
	taskDuration.numberOfMinutes = (int)(reminder / secondsPerMinute);
	reminder = totalSeconds % secondsPerMinute;
	taskDuration.numberOfSeconds = reminder;
	return taskDuration;
}

void print(stTaskDuration taskDuration)
{
	cout << taskDuration.numberOfDays<<":"<< taskDuration.numberOfHours<<":"<< taskDuration.numberOfMinutes<<":"<< taskDuration.numberOfSeconds<< endl;
}

int main()
{  
	print(readDuration(readPositiveNumber("Please Enter Total Seconds")));
	return (0);
}
