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
	cout << "������x��" << endl;
	cin >> x;
	cout << "������y��" << endl;
	cin >> y;
	cout << "ƽ���ͽ����" << func2(x, y) << endl;
	return 0;
}