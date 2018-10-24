//Declarations
#include <stdio.h>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

// Calculate 1-3 sum, uses int digits
int oneThreeSum(int digits[3])
{
	int staticNum = 91;
	return staticNum + digits[0] + digits[2] + digits[1] * 3;
}

int main()
{
	int digits[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Digit " << i+11 << "? ";
		cin >> digits[i];
	}
	cout << "The 1-3-sum is " << oneThreeSum(digits) << endl;
    return 0;
}

