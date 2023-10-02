#include <iostream>
#include <cmath>
#include <string>
using namespace std;
/*int f = 1;
	for (int i = number; i >= 1; i--)
		f *= i;
	return f;*/

int readNumber(string message) 
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
	if (number == 0)
		return 1;
	return number * factorial(number - 1);
}

void printFactorial(int number, int f)
{
	cout << "factorial of "<<number<<" is "<<f<<endl;
}

int main()
{
	int num = readNumber("enter number to factorial");
	printFactorial(num, factorial(num));
	return (0);
}
