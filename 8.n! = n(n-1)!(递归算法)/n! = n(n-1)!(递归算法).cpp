#include "stdafx.h"
#include <iostream>;
#include <cmath>;
using namespace std;

int fac(int n)
{
	int f;
	if (n == 0)
	{
		f = 1;
	}
	else
	{
		f = fac(n - 1) * n;
	}
	return f;
}

int main()
{
	int n;
	cout << "Enter a number:" << endl;
	cin >> n;
	//cout << n << endl;
	//fac(n);
	int f = fac(n);
	cout << f << endl;
	return 0;
}