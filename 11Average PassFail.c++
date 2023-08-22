#include <iostream>
using namespace std;
enum enPassFail {pass = 1, fail = 0 };

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

enPassFail checkavg(int avg)
{
	if (avg >= 50)
		return enPassFail::pass;
	else
		return enPassFail::fail;
}

void printResult(int avg)
{
	if (checkavg(avg) == enPassFail::pass)
		cout<<"You Pass \n";
	else 
		cout<<"You Fail \n";
}

int main()
{
	int num1, num2, num3;
	readNum(num1, num2, num3);
	
	printResult(avgNumber(num1, num2, num3));

	return 0;
}