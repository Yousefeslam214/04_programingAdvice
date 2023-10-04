#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
	Write a program to read a LoanAmout and Monthly Payment and
	calculate how many monts you need to.
*/

float readPositiveNumber(string Message)
{
    float Num = 0;

    cout << Message << endl;
    cin >> Num;
	if (Num <= 0)
		return readPositiveNumber("Number must be >0");
    return Num;
}

float paymentForMonths (float loanAmount, float monthlyPayment)
{
	float totalMonths;

	totalMonths = loanAmount / monthlyPayment;

	return totalMonths;
}

void print (float totalMonths)
{
	cout << totalMonths << " Months" << endl;
}

int main()
{
	float loanAmount = readPositiveNumber("enter loanAmount ?");
	float monthlyPayment = readPositiveNumber("enter monthly payment");
	print(paymentForMonths(loanAmount, monthlyPayment));
	return (0);
}
