#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
	Write a program to read a
	BillValue and add service fee and
	sales tax to it, and print the
	TotalBill on the screen.
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

float totalBills(float billValue)
{
	float totalBill;

	totalBill = billValue * 1.1;
	totalBill *= 1.16;
	return totalBill;
}

void print(float num)
{
	cout << "the total bill is :"<<num << endl;
}

int main()
{  
	print(totalBills(readPositiveNumber("enter cash paid")));
	return (0);
}
