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

void printSumOddNumbersFrom1toN(int number)
{
	for (int i = 1; i <= number; i++)
		cout << i << endl;
}

int main()
{
	printSumOddNumbersFrom1toN(readNumber());
	return (0);
}
