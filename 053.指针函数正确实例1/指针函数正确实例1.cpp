#include "stdafx.h"
#include <iostream>
#include <cassert>

using namespace std;


#pragma region ָ�뺯����ȷʵ��1
int* search(int* a, int num);
int main()
{
	int arr[4];
	for (int i = 0; i < 4; i++)
		cin >> arr[i];
	int* ptr =  search(arr, 4);
	cout << *ptr << endl;
	return 0;
}

int* search(int* a, int num)
{
	for (int i = 0; i < num; i++)
	{
		if (a[i] == 0)
		{
			return &a[i];
		}
	}
}

#pragma endregion