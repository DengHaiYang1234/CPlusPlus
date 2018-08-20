#include "stdafx.h"
#include <iostream>
#include <cassert>

using namespace std;


#pragma region 指针函数错误实例
int main()
{
	int* function();
	int* ptr = function();
	*ptr = 5;//危险的访问
	return 0;
}

int* function()
{
	int local = 0;  //非静态局部变量作用域寿命都仅限于本函数体内
	return &local;//函数运行结束时，变量local被释放
}
#pragma endregion
