#include "stdafx.h"
#include <iostream>
using namespace std;

#pragma region ָ�붨�� ��ֵ ��ʹ��
int main()
{
	int i;
	int *ptr = &i; // ȡ��i�ĵ�ַ��ֵΪptr
	i = 10;
	cout << "i =" << i << endl;
	cout << "*ptr =" << *ptr << endl; //Ѱ��ptr�ĵ�ַ��ָ������
	return 0;
}
#pragma endregion