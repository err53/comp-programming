// Problem J2-Practice.cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int shiftCalc(int n, int k)
{
	int z[6] = { 0, 0, 0, 0, 0, 0 };
	for (int i = 0; (i - 1) <= k; i++)
	{
		z[i] = n * pow(10.0, i);
	}
	int x = z[0] + z[1] + z[2] + z[3] + z[4] + z[5];
	return x;
}

int main()
{
	int x;
	int y;
	cin >> x;
	cin >> y;
	/*
	int x = 99;
	int y = 4;
	*/
	cout << shiftCalc(x, y) << endl;
    return 0;
}

