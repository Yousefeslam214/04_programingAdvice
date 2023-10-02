#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int read(int from, int to) 
{
	int Grade;
	do 
	{
	cout << "enter number ?" << endl;
	cin >> Grade;
	} while (Grade < from || Grade > to);
	
	return (Grade);
}

char getGradeLetter(int Grade)
{
    if (Grade >= 90)
		return 'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C';
	else if (Grade >= 60)
		return 'D';
	else if (Grade >= 50)
		return 'E';
	else
		return 'F';
}

void output (char letter)
{
    cout << letter << endl;
}

int main()
{
	output(getGradeLetter(read(0,100)));
	return (0);
}
