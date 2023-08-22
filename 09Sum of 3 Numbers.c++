#include <iostream>
using namespace std;

void readNum(int &num1,int &num2,int &num3)
{
	cout<<"enter Numbers \n";
	cin>>num1>>num2>>num3;
}

int sumNumber(int num1,int num2,int num3)
{
	int sum = num1 + num2 + num3;
	return sum;
}

void printSum(int sum)
{
	cout<<"the sum of Numbers is : "<<sum<<"\n";
}

int main() {
	int num1, num2, num3;
	readNum(num1, num2, num3);
	printSum(sumNumber(num1, num2, num3));
	return 0;
}