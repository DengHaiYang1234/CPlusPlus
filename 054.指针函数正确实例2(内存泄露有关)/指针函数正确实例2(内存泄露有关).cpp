#include "stdafx.h"
#include <iostream>
#include <cassert>

using namespace std;

#pragma region ָ�뺯����ȷʵ��2(�ڴ�й¶�й�)
int* newintvar();
int main()
{
	int* intptr = newintvar();
	*intptr = 5;//���ʵĺϷ���Ч�ĵ�ַ
	delete intptr;//��������������ͷţ�������ڴ�й¶
	return 0;
}

int* newintvar()
{
	int* p = new int();//���صĵ�ַָ����Ƕ�̬����Ŀռ�
	return p;
}//�������н���ʱ��p�еĵ�ַ����Ч
#pragma endregion