#include "stdafx.h"
#include <iostream>
using namespace std;

{
	int a;
	int* const ptr = &a;  
	int b;
	ptr = &b;    //������ָ�����ͱ���Ϊ���������ܹ��ٱ����޸�
}