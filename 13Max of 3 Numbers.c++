#include <iostream>
using namespace std;

void readNum(int &num1,int &num2, int &num3)
{
	cout<<"enter Numbers \n";
	cin>>num1>>num2>>num3;
}

int maxNumber(int num1,int num2, int num3)
{
    if (num1 >= num2 && num1 >=num3)
        return num1;
    else if (num2 >= num1 && num2 >=num3)
        return num2;
    else
        return num3;
}


void printResult(int max)
{
	cout<<"max number is : "<<max<<"\n";
}

int main()
{
	int num1, num2,num3;
	readNum(num1, num2,num3);
	
	printResult(maxNumber(num1, num2,num3));

	return 0;
}