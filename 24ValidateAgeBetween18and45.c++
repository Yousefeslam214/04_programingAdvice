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

void printtResult(int age)
{
	if (checkAgeInRange(age, 18, 45))
		cout << age << " age is valid\n";
	else
		cout << age << " age is invalid\n";
}

int main()
{
	printtResult(readAge());
	return (0);
}