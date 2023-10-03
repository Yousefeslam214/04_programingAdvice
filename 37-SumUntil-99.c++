#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
	Write a program to sum all numbers until you enter -99.
*/
float readNumber(string Message)
{
    float Num = 0;

    cout << Message << endl;
    cin >> Num;

    return Num;
}

float sumNumbers()
{
	int sum = 0, num = 0, count =1;

	do
	{
		num = readNumber("please enter number " + to_string(count));

		if (num != -99)
		{
			sum += num;
			count++;
		}	
		else
			break;
		
	} while (num != -99);
	
	return sum;
}

int main()
{  
	cout << sumNumbers() << endl;

	return (0);
}
