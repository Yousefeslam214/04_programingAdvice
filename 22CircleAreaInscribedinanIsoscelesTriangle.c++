#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void readNum(float &num1,float &num2)
{
	cout<<"enter  a \n";
	cin>>num1;
    cout<<"enter b \n";
	cin>>num2;
}

float circleAreafloatriangle(float num1,float num2)
{
    float PI = 3.14;
	float area = PI * (pow(num2, 2) / 4) * ((2 * num1 - num2) / (2 * num1 + num2));
    return area;
}


void prfloatResult(float area)
{
	cout<<"Circle Area Inscribed in an Isosceles Triangle is : "<<area<<"\n";
}

int main()
{
	float num1, num2;

	readNum(num1, num2);
	prfloatResult(circleAreafloatriangle(num1, num2));
	return 0;
}