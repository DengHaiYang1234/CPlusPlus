#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;


#pragma region ���ڷ�Χ��forѭ�����auto����
int main()
{
	std::vector<int> v = { 1,2,3 };
	//auto �൱��C# ��var
	for (auto i = v.begin(); i != v.end(); i++)
	{
		std::cout << *i << std::endl;
	}

	for (auto e : v)
	{
		std::cout << e << std::endl;
	}
	return 0;
}
#pragma endregion