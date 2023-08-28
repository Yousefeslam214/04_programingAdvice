#include <iostream>
#include <cmath>
#include <string>
using namespace std;
/**
 * readNum - take Circumference
 *
 * circleAreaAlongCircumference - Circle Area Along Circumference
 *
 * printResult - return result
*/

float readNum()  
{
    int L;
	cout<<"enter a of circle \n";
	cin>>L;
	return (L);
}

float circleAreaAlongCircumference(float L)
{
	float PI = 3.14;
	float area = (pow(L,2))/(4*PI);
    return (area);
}

void printResult(float area)
{
	cout<<"Circle Area Along the Circumference is : "<<area<<"\n";
}

int main()
{
	printResult(circleAreaAlongCircumference(readNum()));
	return (0);
}