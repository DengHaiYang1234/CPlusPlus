#include "stdafx.h"
#include <iostream>
#include <cassert>

using namespace std;

#pragma region 指针函数正确实例2(内存泄露有关)
int* newintvar();
int main()
{
	int* intptr = newintvar();
	*intptr = 5;//访问的合法有效的地址
	delete intptr;//如果忘记在这里释放，会造成内存泄露
	return 0;
}

int* newintvar()
{
	int* p = new int();//返回的地址指向的是动态分配的空间
	return p;
}//函数运行结束时，p中的地址任有效
#pragma endregion