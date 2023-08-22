#include <iostream>
using namespace std;

void readNum(int &num1,int &num2)
{
	cout<<"enter Numbers \n";
	cin>>num1>>num2;
}

int maxNumber(int num1,int num2)
{
    if (num1 >= num2)
        return num1;
    else 
        return num2;
}


void printResult(int max)
{
	cout<<"max number is : "<<max<<"\n";
}

int main()
{
	int num1, num2;
	readNum(num1, num2);
	
	printResult(maxNumber(num1, num2));

	return 0;
}