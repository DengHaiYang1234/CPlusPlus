#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	void* ptr;
	int i = 5;
	ptr = &i; //ȡ��i�ĵ�ַ��ֵ��ptr
	int* pint = static_cast<int *>(ptr); //voidָ��ת��Ϊintָ��
	cout << "*pint=" << *pint << endl;
	return 0;
}