#include <iostream>
using namespace std;

enum enPassFail {pass = 1, fail = 0 };

int readMark()
{
	int mark;
	cout<<"enter your mark ? \n";
	cin>>mark;
	return mark;
}

enPassFail checkMark(int mark)
{
	if (mark >= 50)
		return enPassFail::pass;
	else
		return enPassFail::fail;
}

void printResult(int mark)
{
	if (checkMark(mark) == enPassFail::pass)
		cout<<"You Pass \n";
	else 
		cout<<"You Fail \n";
}

int main() {
	printResult(readMark());
	return 0;
}