#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int readAge()
{
	int age;
	cout<<"enter your age ? \n";
	cin>>age;
	return (age);
}

bool checkAgeInRange(int age, int from, int end)
{
    return (age >= from && age <= end);
}

int readUntilAgeBetween(int from, int to)
{
	int age = 0;
	do 
	{
		age = readAge();
	}
	while (!checkAgeInRange(age, from,to));
	return (age);
}

void printResult(int age)
{
	cout << "your age is "<< age << endl;
}

int main()
{
	printResult(readUntilAgeBetween(18,45));
	return (0);
}
