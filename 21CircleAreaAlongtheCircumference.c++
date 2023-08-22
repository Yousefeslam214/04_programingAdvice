#include <iostream>
#include <cmath>
#include <string>
using namespace std;

float readNum()
{
    int num1;
	cout<<"enter L of circle \n";
	cin>>num1;
    return num1;
}

float circleArea(int num1)
{
    const float PI = 3.141;
    float area = pow((num1),2)/(PI*4);
    return area;
}


void printResult(float area)
{
	cout<<"Circle Area Along the Circumference is : "<<area<<"\n";
}

int main()
{
	printResult(circleArea(readNum()));
	return 0;
}