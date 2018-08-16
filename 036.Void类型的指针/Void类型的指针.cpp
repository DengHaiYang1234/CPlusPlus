#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	void* ptr;
	int i = 5;
	ptr = &i; //取出i的地址赋值给ptr
	int* pint = static_cast<int *>(ptr); //void指针转换为int指针
	cout << "*pint=" << *pint << endl;
	return 0;
}