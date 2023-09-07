#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int readPositiveNumber(string message) 
{
	int number;
	do
	{
		cout << message << endl;
		cin >> number;
	} 
	while (number < 0);
		;
	return (number);
}

int factorial(int number)
{
	int f = 1;
	for (int i = number; i >= 1; i--)
		f *= i;
	return f;
}

void printFactorial(int number, int f)
{
	cout << "factorial of "<<number<<" is "<<f<<endl;
}

int main()
{
	int num = readPositiveNumber("enter number to factorial");
	printFactorial(num, factorial(num));
	return (0);
}
