#include "stdafx.h"
#include <iostream>;
using namespace std;

//�ж�n�Ƿ�Ϊ����
bool symm(unsigned n)  //�൱�ڴӺ���ǰ�����жϣ���������ԭ���������ʾΪ����
{
	unsigned i = n;
	unsigned m = 0;
	while (i > 0)
	{
		m = m * 10 + i % 10;
		i /= 10;
	}

	return m == n;
}

int main()
{
	for (int i = 11; i < 1000; i++)
	{
		if (symm(i) && symm(i * i) && symm(i*i*i))
		{
			cout << i << endl;
		}
	}
	return 0;
}