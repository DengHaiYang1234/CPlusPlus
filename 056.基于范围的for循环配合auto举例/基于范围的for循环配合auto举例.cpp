#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;


#pragma region 基于范围的for循环配合auto举例
int main()
{
	std::vector<int> v = { 1,2,3 };
	//auto 相当于C# 的var
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