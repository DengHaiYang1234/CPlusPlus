#include "stdafx.h"
#include <iostream>
using namespace std;

{
	int a;
	int* const ptr = &a;  
	int b;
	ptr = &b;    //申明的指针类型本身为常量，不能够再被被修改
}