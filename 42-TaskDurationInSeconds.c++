#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
	Write a program to calculate the
	task duration in seconds and print
	it on screen.
*/

struct stTaskDuration
{
	float daysToSeconds, hoursToSeconds, minutesToSeconds, seconds;
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
stTaskDuration readDuration()
{
	stTaskDuration durationInSeconds;
	durationInSeconds.daysToSeconds = readPositiveNumber("please enter days");
	durationInSeconds.hoursToSeconds = readPositiveNumber("please enter hours");
	durationInSeconds.minutesToSeconds = readPositiveNumber("please enter minutes");
	durationInSeconds.seconds = readPositiveNumber("please enter seconds");
	return durationInSeconds;
}

float TaskDurationInSeconds(stTaskDuration durationInSeconds)
{
	int sum = 0;

	sum = durationInSeconds.daysToSeconds * 24 * 60 * 60;
	sum += durationInSeconds.hoursToSeconds * 60 * 60;
	sum += durationInSeconds.minutesToSeconds * 60;
	sum += durationInSeconds.seconds;

	return sum;
} 

void print(float num)
{
	cout << "task duration in seconds : "<<num << endl;
}

int main()
{  
	print(TaskDurationInSeconds(readDuration()));
	return (0);
}
