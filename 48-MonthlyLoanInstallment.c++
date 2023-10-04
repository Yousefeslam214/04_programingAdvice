#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
	Write a program to read a LoanAmout and ask you how many
	months you need to settle the loan, then calculate the
	monthly installment amount.
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

float monthlyPayment (float loanAmount, float months)
{
	float monthlyPayment;

	monthlyPayment = loanAmount / months;

	return monthlyPayment;
}

void print (float monthlyPayment)
{
	cout << monthlyPayment << endl;
}

int main()
{
	float loanAmount = readPositiveNumber("enter loanAmount ?");
	float months = readPositiveNumber("enter how many months you need?");
	print(monthlyPayment(loanAmount, months));
	return (0);
}
