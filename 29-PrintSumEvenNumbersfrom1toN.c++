#include <iostream>
#include <cmath>
#include <string>
using namespace std;

enum enOddorEven {odd = 1, even = 2};

int readNumber() 
{
	int Number;
	cout << "enter your number ? \n";
	cin >> Number;
	return (Number);
}

enOddorEven checkOddOrEven(int number)
{
	if (number % 2 != 0)
		return enOddorEven::odd;
	else
		return enOddorEven::even;
}

void printSumEvenNumbersFrom1toN(int number)
{
	int sum = 0;
	for (int i = 1; i <= number; i++)
		if (checkOddOrEven(i) == enOddorEven::even)
			sum += i;
	cout << sum << endl;
}

int main()
{
	printSumEvenNumbersFrom1toN(readNumber());
	return (0);
}
