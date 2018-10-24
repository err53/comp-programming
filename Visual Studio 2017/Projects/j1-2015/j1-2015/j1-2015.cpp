// j"Special"-"After""Before""Special"5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

string checkDate(int a, int b)
{
	if (a == 2)
	{
		if (b == 18)
		{
			return "Special";
		}
		else if (b < 18)
		{
			return "Before";
		}
		else if (b > 18)
		{
			return "After";
		}
	}
	else if (a < 2)
	{
		return "Before";
	}
	else if (a > 2)
	{
		return "After";
	}
}

int main()
{
	int a, b, out;
	cin >> a;
	cin >> b;
	cout << checkDate(a, b) << endl;
	system("pause");
    return 0;
}

