#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int read() 
{
	int total;
	cout << "enter number ?" << endl;
	cin >> total;
	return (total);
}

int commissionPercentage(int total)
{
    if (total >= 1000000)
		return ((total/100)*1);
	else if (total >= 500000 && total <= 1000000)
		return ((total/100)*2);
	else if (total >= 100000 && total <= 500000)
		return ((total/100)*3);
	else if (total >= 50000 && total <= 100000)
		return ((total/100)*5);
	else
		return ((total/100)*0);
}

void output (int commission)
{
    cout << commission << endl;
}

int main()
{
	output(commissionPercentage(read()));
	return (0);
}
