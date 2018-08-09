
#include "stdafx.h"
#include<iostream>;
using namespace std;

const double PI = 3.14159265358979;
inline double calArea(double radius)
{
	return PI * radius * radius;
}

int main()
{
	double r = 3.0;
	double area = calArea(r);//直接实现函数内部，而不用进行参数传递
	cout << area << endl;
	return 0;
}