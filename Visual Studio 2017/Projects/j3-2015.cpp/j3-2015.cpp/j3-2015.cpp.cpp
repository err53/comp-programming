// j3-2015.cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

char consonants[21] = { 'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z' };
char closestVowel[21] = { 'a', 'a', 'e', 'e', 'e', 'i', 'i', 'i', 'i', 'o', 'o', 'o', 'o', 'o', 'u', 'u', 'u', 'u', 'u', 'u', 'u' };
char nextConsanant[21] = { 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z' , 'z' };

string wordProssess (string in)
{
	int stringLength = in.length() - '0';
	bool isConsonant[30];
	string outFrag [30];
	string compiledFrag;
	for (int n = 0; n <= stringLength; n++)
	{
		int whichConsonant;
		isConsonant[n] = false;
		for (int i = 0; i <= 21; i++)
		{
			string::size_type position = in.find(consonants[i]);
			if (position != string::npos)
			{
				isConsonant[n] = true;
				whichConsonant = i;
			}
		}
		if (isConsonant[n] == true)
		{
			outFrag[n] = in.substr(n, 1) + closestVowel[whichConsonant] + nextConsanant[whichConsonant];
		}
		else
		{
			outFrag[n] = in.substr(n, 1);
		}
		compiledFrag.append(outFrag[n]);
	}
}
int main()
{
	string i;
	cin >> i;
	cout << wordProssess(i) << endl;
	system("pause");
    return 0;
}

