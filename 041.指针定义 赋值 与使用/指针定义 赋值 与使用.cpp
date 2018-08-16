#include "stdafx.h"
#include <iostream>
using namespace std;

#pragma region 指针定义 赋值 与使用
int main()
{
	int i;
	int *ptr = &i; // 取出i的地址赋值为ptr
	i = 10;
	cout << "i =" << i << endl;
	cout << "*ptr =" << *ptr << endl; //寻找ptr的地址所指的内容
	return 0;
}
#pragma endregion