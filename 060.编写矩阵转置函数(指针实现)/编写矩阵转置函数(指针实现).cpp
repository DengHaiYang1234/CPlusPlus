#include "stdafx.h"
#include <iostream>
#include <string>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

#pragma region ��д����ת�ú���(ָ��ʵ��)
void swap(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int **a;
	a = new int*[3];  //ָ�����飬ÿ������Ԫ�ض���ָ��һ��һά������׵�ַ
	for (int i = 0; i < 3; i++)
	{
		a[i] = new int[3];//��������һά���飬a[i]ָ����ǵ�i�е��׵�ַ
	}
	cout << "����Ÿ�������Ϊ����Ԫ��ֵ��" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}

	cout << "��ʼ����" << endl;
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
	cout << "ת����ľ���" << endl;
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