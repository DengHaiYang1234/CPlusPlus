#include "stdafx.h"
#include <iostream>
#include <cassert>

using namespace std;


#pragma region 正确的前向引用声明
class Fread;
class Barney
{
	Fread* x;
};

class Fread
{
	Barney y;
};
#pragma endregion