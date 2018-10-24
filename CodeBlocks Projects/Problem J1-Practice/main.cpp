#include <iostream>
#include <cmath>
#include <sstream>
#include <fstream>
#include <string>

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

int bufferFunc (string a)
{
    istringstream buffer(a);
    int x;
    buffer >> x;
    return x;
}

int main()
{
	ifstream file("j1sample.02.in");
	string a,b;
	getline(file, a);
	getline(file, b);
	int x = bufferFunc(a);
	int y = bufferFunc(b);
	cout << quadrantCalc(x, y) << endl;
	return 0;
}
