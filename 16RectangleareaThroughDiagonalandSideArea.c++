#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void readNum(int &num1,int &num2)
{
	cout<<"enter rectangle side A \n";
	cin>>num1;
    cout<<"enter rectangle Diagonal D \n";
	cin>>num2;
}

float rectangleareaThroughDiagonal(int num1,int num2)
{
    float area = num1 * sqrt(pow(num2,2)-pow(num1,2));
    return area;
}


void printResult(float area)
{
	cout<<"rectangle area Through Diagonal is : "<<area<<"\n";
}

int main()
{
	int num1, num2;
	readNum(num1, num2);
	
	printResult(rectangleareaThroughDiagonal(num1, num2));
	return 0;
}