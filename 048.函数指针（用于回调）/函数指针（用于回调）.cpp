#include "stdafx.h"
#include <iostream>
#include <cassert>

using namespace std;


#pragma region 函数指针（用于回调）
int computer(int a, int b, int(*func)(int, int))
{
	return func(a, b);
}

int max(int a, int b)
{
	return((a > b) ? a : b);
}

int min(int a, int b)
{
	return((a < b) ? a : b);
}

int sum(int a, int b)
{
	return a + b;
}

int main()
{
	int c = computer(10, 20, sum);
	cout << c << endl;
	return 0;
}


#pragma endregion