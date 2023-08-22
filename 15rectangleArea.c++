#include <iostream>
using namespace std;

void readNum(int &num1,int &num2)
{
	cout<<"enter Numbers \n";
	cin>>num1>>num2;
}

int rectangleNumber(int num1,int num2)
{
    int rectangle = num1 * num2;
    return rectangle;
}


void printResult(int rectangle)
{
	cout<<"Rectangle Area is : "<<rectangle<<"\n";
}

int main()
{
	int num1, num2;
	readNum(num1, num2);
	
	printResult(rectangleNumber(num1, num2));

	return 0;
}