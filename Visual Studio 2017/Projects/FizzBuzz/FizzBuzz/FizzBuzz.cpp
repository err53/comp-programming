// FizzBuzz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

string fizzBuzz(int n)
{
	string out;
	if (n % 3 == 0) out += "Fizz";
	if (n % 5 == 0) out += "Buzz";
	if (n % 7 == 0) out += "Fuzz";
	if (n % 11 == 0) out += "Bizz";
	if (n % 13 == 0) out += "Biff";

	if (out == "") out = to_string(n);
	return out;
}

bool endPrompt()
{
	string endPrompt;
	cout << endl;
	cout << "Do you want to exit? (y/N)" << endl;
	cin >> endPrompt;
	if (endPrompt == "y" || endPrompt == "Y") return true;
	return false;
}

int main()
{
	cout << "Loading..." << endl;
	int iStart;
	int iEnd;
	system("cls");

	while (true)
	{
		cout << "Welcome to FizzBuzz Advanced v5.28 rev 491" << endl;
		cout << "What number do you want to start at?" << endl;
		cin >> iStart;
		cout << endl;
		cout << "What number do you want to end at?" << endl;
		cin >> iEnd;
		cout << endl;
		cout << "Processing..." << endl;
		cout << endl;

		int iRange = iEnd - iStart;
		for (int i = 0; i <= iRange; i++)
		{
			cout << fizzBuzz(i + iStart) << endl;
		}
		
		if (endPrompt()) return 0;
		system("cls");
	}
}

