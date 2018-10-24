// Problem J1-Practice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int quadrantCalc(int x, int y)
{
	if (x > 0)
	{
		if (y > 0)
		{
			return 1;
		}
		else if (y < 0)
		{
			return 4;
		}
	}
	else if (x < 0)
	{
		if (y > 0)
		{
			return 2;
		}
		else if (y < 0)
		{
			return 3;
		}
	}
}
int main()
{
	ifstream file("j1sample.02.in");
	string a,b;
	getline(file, a);
	getline(file, b);
	int x = atoi(a.c_str());
	int y = atoi(b.c_str());
	cout << quadrantCalc(x, y) << endl;
	system("pause");
	return 0;
}