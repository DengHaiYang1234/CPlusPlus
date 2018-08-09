
#include "stdafx.h"
#include<iostream>;
using namespace std;

int sumOfSquare(int a, int b)
{
	return a* a + b* b;
}

double sumOfSquare(double a, double b)
{
	return a* a + b* b;
}

int main()
{
	int m, n;
	cout << "Enter two integer";
	cin >> m >> n;
	cout << "sum is=:" << sumOfSquare(m, n) << endl;
	double x, y;
	cout << "Enter two integer";
	cin >> x >> y;
	cout << "sum is=:" << sumOfSquare(x, y) << endl;
}