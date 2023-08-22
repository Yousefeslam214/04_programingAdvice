#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void readNum(int &num1,int &num2)
{
	cout<<"enter  A \n";
	cin>>num1;
    cout<<"enter H \n";
	cin>>num2;
}

float triangleArea(int num1,int num2)
{
    float area = (num1 * num2)/2 ;
    return area;
}


void printResult(float area)
{
	cout<<"Triangle Area is : "<<area<<"\n";
}

int main()
{
	int num1, num2;
	readNum(num1, num2);
	
	printResult(triangleArea(num1, num2));
	return 0;
}