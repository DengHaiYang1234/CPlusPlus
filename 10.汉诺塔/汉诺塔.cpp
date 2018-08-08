#include "stdafx.h"
#include <iostream>;
#include <cmath>;
using namespace std;

void Move(char src, char dest)
{
	cout << src << "-------->" << dest << endl;
}

void hanoi(int m, char src, char mid, char dest)
{
	if (m == 1)
	{
		Move(src, dest);
	}
	else
	{
		hanoi(m - 1, src, dest, mid);
		Move(src, dest);
		hanoi(m - 1, mid, src, dest);
	}

}


int main()
{
	int n;
	cout << "Enter number:" << endl;
	cin >> n;
	hanoi(n, 'A', 'B', 'C');
}