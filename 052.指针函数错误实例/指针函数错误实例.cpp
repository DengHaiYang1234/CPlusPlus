#include "stdafx.h"
#include <iostream>
#include <cassert>

using namespace std;


#pragma region ָ�뺯������ʵ��
int main()
{
	int* function();
	int* ptr = function();
	*ptr = 5;//Σ�յķ���
	return 0;
}

int* function()
{
	int local = 0;  //�Ǿ�̬�ֲ����������������������ڱ���������
	return &local;//�������н���ʱ������local���ͷ�
}
#pragma endregion
