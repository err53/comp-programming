#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int check (int in)
{
    int runCount = 0;
    int out = in;

    while (out != 1)
    {
        if (out % 2 == 0) out = out / 2;
        else out = out * 3 + 1;
        runCount++;
    }
    return runCount;
}
int main()
{
    int largestNum;
    char cIn[15];
    int iEndNum;
    string sStart;
    string sEnd;
    cin.getline(cIn, 15);
    for (int i = 0; i < 15; i++)
    {
        stringstream ss;
        string s;
        ss << cIn[i];
        ss >> s;
        if (!isspace(cIn[i])) sStart.append(s);
        else
        {
            iEndNum = i;
            break;
        }
    }
    for (int i = iEndNum; i < 15 - iEndNum; i++)
    {
        stringstream ss;
        string s;
        ss << cIn[i + iEndNum];
        ss >> s;
        if (cIn[i + iEndNum] != '\0') sEnd.append(s);
        else break;
    }

    stringstream intStream(sStart);
    int iStart = 0;
    int iEnd = 0;
    intStream >> iStart;
    intStream << sEnd;
    intStream >> iEnd;

    for (int i = iStart; i <= iEnd; i++)
    {
        int checkVal = check(i);
        if (checkVal > largestNum) largestNum = checkVal;
    }
    return iStart + ' ' + iEnd + ' ' + largestNum;
}
