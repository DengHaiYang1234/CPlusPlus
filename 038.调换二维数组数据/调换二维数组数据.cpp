#include "stdafx.h"
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a[3][3];
	cout << "输入9个数字作为矩阵的元素值" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}

	cout << "初始矩阵" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << "调用swap()" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < i; j++)
		{
			swap(a[i][j], a[j][i]);
		}
	}

	cout << "调换完成" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}