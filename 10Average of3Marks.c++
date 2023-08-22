#include <iostream>
using namespace std;

void readNum(int &num1,int &num2,int &num3)
{
	cout<<"enter Numbers \n";
	cin>>num1>>num2>>num3;
}

int avgNumber(int num1,int num2,int num3)
{
	int avg = (num1 + num2 + num3)/3;
	return avg;
}

void printavg(int avg)
{
	cout<<"the avg of Numbers is : "<<avg<<"\n";
}

int main() {
	int num1, num2, num3;
	readNum(num1, num2, num3);
	printavg(avgNumber(num1, num2, num3));
	return 0;
}