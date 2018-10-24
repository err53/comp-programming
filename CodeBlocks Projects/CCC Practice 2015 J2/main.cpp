#include <iostream>
#include <string>

using namespace std;

string happyOrSad(string in)
{
    int happyCount = 0;
    int sadCount = 0;
    if (in.length() < 3) return "none";
    for (unsigned int i = 0; i <= (in.length()-3); i++)
    {
        if (in.substr(i, 3) == ":-)") happyCount++;
        else if (in.substr(i, 3) == ":-(") sadCount++;
    }
    if (happyCount > sadCount) return "happy";
    else if (happyCount < sadCount) return "sad";
    else if (happyCount == 0 && sadCount == 0) return "none";
    else return "unsure";
}
int main()
{
    string in;
    getline(cin, in);
    cout << happyOrSad(in) << endl;
    return 0;

}
