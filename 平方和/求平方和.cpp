#include "stdafx.h"
#include <iostream>;
using namespace std;

double power(double x, int n)
{
	double val = 1.0;
	while (n--)
	{
		val *= x;
	}
	return val;
}

int main()
{
	double value = power(2.0, 5);
	cout << value << endl;
	return 0;
}