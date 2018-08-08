#include "stdafx.h"
#include <iostream>;
using namespace std;

//判断n是否为回文
bool symm(unsigned n)  //相当于从后往前依次判断，若最后等于原来的数则表示为回文
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