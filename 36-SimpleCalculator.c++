#include <iostream>
#include <cmath>
#include <string>
#include "main.h"
using namespace std;

enum enOperationTypes {Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

enOperationTypes ReadOpTypes()
{
	char OT = '+';

	cout << "Please enter Operation Type (+, -, *, /)?\n";
	cin >> OT;
	return (enOperationTypes)OT; 
}
float ReadNumber(string Message)
{
    float Num = 0;
    cout << Message << endl;
    cin >> Num;
    return Num;
}

float calculate(float num1, float num2, enOperationTypes opType)
{
	switch (opType)
	{
	case enOperationTypes::Add:
		return (num1 + num2);
	case enOperationTypes::Subtract:
		return (num1 - num2);
	case enOperationTypes::Multiply:
		return (num1 * num2);
	case enOperationTypes::Divide:
		return (num1 / num2);
	default:
		return (num1 + num2);
	}
}

int main()
{  
	float num1 = ReadNumber("please enter first number ?");
	float num2 = ReadNumber("please enter second number ?");

	cout << endl << "Result = " << calculate(num1, num2, ReadOpTypes()) << endl;
	return (0);
}
