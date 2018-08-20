#include "stdafx.h"
#include <iostream>
#include <cassert>

using namespace std;


#pragma region 指向常量的指针做形参
const int N = 6;
void Print(const int* p, int n);
int main()
{
	int arrat[N] = { 2,3,5,6,8,9 }; 
	int* p = arrat;
	cout << *p << endl;
	cout << *(p + 1) << endl;
	cout << *(p + 2) << endl;
	cout << *(p + 3) << endl;
	cout << *(p + 4) << endl;
	cout << *(p + 5) << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "," << *(p + i);
	}
	Print(arrat,N);
	return 0;
}

void Print(const int* p, int n)
{
	cout << "{" << *p;
	for (int i = 1; i < n; i++)
	{
		//cout <<"      I:"<< i;
		cout << "," << *(p + i);
	}
	cout << "}" << endl;
}

#pragma endregion