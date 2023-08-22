#include <iostream>
using namespace std;

void readNum(int &num1,int &num2)
{
	cout<<"enter Numbers \n";
	cin>>num1>>num2;
}

void swapNumber(int &num1,int &num2)
{
    int tmp;
    tmp = num1;
    num1 = num2;
    num2 = tmp;
}


void printNumber(int num1,int num2)
{
	cout<<num1<<"\n"<<num2<<"\n";
}

int main()
{
	int num1, num2;
	readNum(num1, num2);
	
	swapNumber(num1, num2);
    printNumber(num1,num2);
	return 0;
}