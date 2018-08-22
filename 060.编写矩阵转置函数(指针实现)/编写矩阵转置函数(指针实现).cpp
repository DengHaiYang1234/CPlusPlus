#include "stdafx.h"
#include <iostream>
#include <string>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

#pragma region 编写矩阵转置函数(指针实现)
void swap(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int **a;
	a = new int*[3];  //指针数组，每个数组元素都是指向一个一维数组的首地址
	for (int i = 0; i < 3; i++)
	{
		a[i] = new int[3];//生成三个一维数组，a[i]指向的是第i行的首地址
	}
	cout << "输入九个整数作为矩阵元素值：" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}

	cout << "初始矩阵：" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[i][j]<<' ';

		}
		cout << endl;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < i; j++)
		{
			swap(a[i][j], a[j][i]);
		}
	}
	cout << "转换后的矩阵：" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[i][j] << ' ';

		}
		cout << endl;
	}


	return 0;
}
#pragma endregion