// j2-2015.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int isMostlyHappy(string text)
{
	int smileyCount = 0;
	int frownyCount = 0;
	bool noSmile = false;
	bool noFrown = false;
	string::size_type smileyPos = text.find(":-)");
	string::size_type frownyPos = text.find(":-(");
	if (smileyPos != string::npos)
	{
		smileyCount++;
		for (int x = 0; x < 85; x++)
		{
			if (text.find(":-)", smileyPos + x) != string::npos)
			{
				smileyCount++;
			}
			else
			{ }
		}
	}
	else noSmile = true;
	if (frownyPos != string::npos)
	{
		frownyCount++;
		for (int x = 0; x < 85; x++)
		{
			if (text.find(":-(", frownyPos + x) != string::npos)
			{
				frownyCount++;
			}
			else
			{ }
		}
	}
	else noFrown = true;
	if (smileyCount > frownyCount)
	{
		return 0;
	}
	else if (frownyCount > smileyCount)
	{
		return 2;
	}
	else if (noSmile == true && noFrown == true)
	{
		return 3;
	}
	else return 1;
}

int main()
{
	string i;
	int mostlyHappy;
	getline(cin, i);
	mostlyHappy = isMostlyHappy(i);
	if (mostlyHappy == 0) cout << "happy" << endl;
	else if (mostlyHappy == 2) cout << "sad" << endl;
	else if (mostlyHappy == 3) cout << "none" << endl;
	else cout << "neutral" << endl;
	system("pause");
    return 0;
}

