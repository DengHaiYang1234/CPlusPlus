#include "stdafx.h"
#include <iostream>;
using namespace std;

int i = 1;  //iΪȫ�ֱ��������о�̬������
void other()
{
	static int a = 2;  
	static int b;
	//a,bΪ��̬�ֲ�����������ȫ���������ֲ��ɼ����ҽ���һ�ν��뺯��ʱ��ʼ����
	int c = 10; //cΪ�ֲ����������ж�̬������.ÿ�ν��뺯����Ҫ����ʼ��
	a += 2;
	i += 32;
	c += 5;
	cout << "----------OTHER--------" << endl;
	cout << "I:" << i << "A:" << a << "B:" << b << "C:" << c << endl;
	b = a;
}


int main()
{
	static int a;//aΪ��̬�ֲ�����������ȫ���������ֲ��ɼ����ҽ���һ�ν��뺯��ʱ��ʼ��
	int b = -10;//b,cΪ�ֲ����������ж�̬������
	int c = 0;
	cout << "-----MAIN-----" << endl;
	// i: 1 a: 0  b:-10 c:0
	cout << "I:" << i << "A:" << a << "B:" << b << "C:" << c << endl;
	c += 8;
	//i:33 a:4 b:0 c:15
	other();
	cout << "-----MAIN-----" << endl;
	//i:33 a:0 b:-10 c: 8
	cout << "I:" << i << "A:" << a << "B:" << b << "C:" << c << endl;
	i += 10;
	//i:75 a:6 b:4 c:15
	other();
	return 0;
}