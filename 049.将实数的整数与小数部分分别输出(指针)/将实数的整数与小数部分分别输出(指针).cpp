 8.20(指针).cpp : 定义控制台应用程序的入口点。


#include "stdafx.h"
#include <iostream>
#include <cassert>

using namespace std;

#pragma region 将实数的整数与小数部分分别输出(指针)

void splitFloat(float x,int* intPart,float* floatPart)
{
	*intPart = static_cast<int>(x);  //取出整数部分
	*floatPart = x - *intPart;//取出小数部分
}



int main()
{
	cout << "Enter 3 float point numbers:" << endl;
	for (int i = 0; i < 3; i++)
	{
		float x, f;
		int n;
		cin >> x;
		splitFloat(x, &n, &f);
		cout << "intPart:" << n << endl;
		cout << "floatPart:" << f << endl;
	}
	return 0;
}
#pragma endregion