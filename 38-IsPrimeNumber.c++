#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
	Write a program to read a number 
	and check if it is a prime number 
	or not 
*/

enum enPrimeNotPrime {Prime = 1, NotPrime = 2};

float readPositiveNumber(string Message)
{
    float Num = 0;

    cout << Message << endl;
    cin >> Num;
	if (Num <= 0)
		return readPositiveNumber("Number must be >0");
    return Num;
}

enPrimeNotPrime checkPrime(int num)
{
	int M = round(num / 2);

	for (int count = 2; count <= M; count++)
	{
		if (num % count == 0)
			return enPrimeNotPrime::NotPrime;
	}
	return enPrimeNotPrime::Prime;
}

void printNumberType(int num)
{
	switch (checkPrime(num))
	{
	case enPrimeNotPrime::Prime:
		cout << "The number is Prime\n";
		break;
	case enPrimeNotPrime::NotPrime:
		cout << "The Number is Not Prime\n";
		break;
	}
}

int main()
{  
	printNumberType(readPositiveNumber("enter number")); 
	return (0);
}
