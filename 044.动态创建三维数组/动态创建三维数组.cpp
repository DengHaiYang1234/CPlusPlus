#include "stdafx.h"
#include <iostream>
#include <cassert>

using namespace std;

#pragma region 动态创建三位数组
int main()
{
	int(*cp)[9][8] = new int[7][9][8];
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			for (int k = 0; k < 8; k++)
			{
				*(*(*(cp + i) + j) + k) = (i * 100 + j * 10 + k);
			}
		}
		cout << endl;
	}

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			for (int k = 0; k < 8; k++)
			{
				cout << cp[i][j][k] << " ";
			}
		}
		cout << endl;
	}
	delete[] cp;
	return 0;
}
#pragma endregion