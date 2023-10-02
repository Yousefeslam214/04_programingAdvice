#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int read(string message) 
{
	int number;
	cout << message << endl;
	cin >> number;
	return (number);
}

int getGradeLetter(int number, int M)
{
    int counter = 1;
	if (M == 0)
        return (1);
    for (int i =0;i < M; i++ )
        counter *= number;
    return (counter);
}

void output (int counter)
{
    cout << counter << endl;
}

int main()
{
	output(getGradeLetter(read("enter number ?"), read("enter power ?")));
	return (0);
}
