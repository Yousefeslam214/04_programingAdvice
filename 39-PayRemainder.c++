#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
	Write a program to read a 
	TotalBill and cashPaid and 
	calculate the remainder to be
	paid back
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

float totalBill (float cashPaid, float totalBill)
{
	float remainder;
	return remainder = cashPaid - totalBill;
}

void print(float num)
{
	cout << "the remainder is :"<<num << endl;
}

int main()
{  
	print(totalBill(readPositiveNumber("enter cash paid"), readPositiveNumber("enter total bill")));
	return (0);
}
