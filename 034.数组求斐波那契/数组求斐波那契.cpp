#include "stdafx.h"
#include <iostream>

using namespace std;

#pragma region 数组求斐波那契
int main()
{
	int f[20] = { 1,1 };
	for (int i = 2; i < 20; i++)
	{
		f[i] = f[i - 2] + f[i - 1];
	}

	for (int i = 0; i < 20; i++)
	{
		cout << f[i] << endl;
	}

	return 0;
}