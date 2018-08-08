#include "stdafx.h"
#include <iostream>;
#include <cmath>;
using namespace std;


int func1(int x)
{
	return x * x;
}

int func2(int x, int y)
{
	return func1(x) + func1(y);
}

int main()
{
	int x, y;
	cout << "请输入x：" << endl;
	cin >> x;
	cout << "请输入y：" << endl;
	cin >> y;
	cout << "平方和结果：" << func2(x, y) << endl;
	return 0;
}