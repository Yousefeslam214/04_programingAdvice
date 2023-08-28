#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void readNum(float &num1, float &num2, float &num3)
{
	cout<<"enter  a \n";
	cin>>num1;
    cout<<"enter b \n";
	cin>>num2;
	cout<<"enter c \n";
	cin>>num3;
}

float circleAreaByATriangle(float num1,float num2, float num3)
{
    float PI = 3.14;
	float p;
	p = (num1+ num2 +num3)/2;
	float t ;
	t = (num1 * num2 * num3) / (4 * sqrt(p * (p - num1) * (p - num2) * (p - num3)));
    float area ;
	area = PI * pow(t,2);
    return area;
}

void printtResult(float area)
{
	cout<<"Circle Area circle Described Around an Arbitrary Triangle is : "<<area<<"\n";
}

int main()
{
	float num1, num2, num3;
	readNum(num1, num2,num3);
	
	printtResult(circleAreaByATriangle(num1, num2,num3));
	return 0;
}