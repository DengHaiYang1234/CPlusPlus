 8.20(ָ��).cpp : �������̨Ӧ�ó������ڵ㡣


#include "stdafx.h"
#include <iostream>
#include <cassert>

using namespace std;

#pragma region ��ʵ����������С�����ֱַ����(ָ��)

void splitFloat(float x,int* intPart,float* floatPart)
{
	*intPart = static_cast<int>(x);  //ȡ����������
	*floatPart = x - *intPart;//ȡ��С������
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