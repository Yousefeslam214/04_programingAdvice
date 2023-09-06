#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int readNumber()
{
	int Number;
	cout << "enter your number ? \n";
	cin >> Number;
	return (Number);
}

void printRangeFromNto1(int number)
{
	for (int i = number; i >= 1; i--)
		cout << i << endl;
}

int main()
{
	printRangeFromNto1(readNumber());
	return (0);
}
