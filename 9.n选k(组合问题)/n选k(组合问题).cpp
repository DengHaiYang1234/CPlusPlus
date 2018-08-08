#include "stdafx.h"
#include <iostream>;
#include <cmath>;
using namespace std;


int comm(int n, int k)
{
	if (k > n)
		return 0;
	else if (k == n || k == 0)
		return 1;
	else
		return comm(n - 1, k) + comm(n - 1, k - 1);
}


int main()
{
	int n, k;
	cout << "Enter two number:" << endl;
	cin >> n >> k;
	cout << "C(n,k)" << comm(n, k) << endl;
}