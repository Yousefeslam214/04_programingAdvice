#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int readNumber(string message) 
{
	int number;
	cout << message << endl;
	cin >> number;
	return (number);
}

void Power2_3_4(int number)
{
    int a, b, c;
    a = number * number;
    b = number * number * number;
    c = number * number * number * number;
    cout << a << " " << b << " " << c << endl;
}

int main()
{
	Power2_3_4(readNumber("enter number ?"));
	return (0);
}
