#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    stack<char> chars;
    string unparsed;
    cin >> unparsed;
    for (int i = 0; i < unparsed.size(); ++i)
    {
        chars.push(unparsed[i]);
    }
    for (int i = 0; i < chars.size(); ++i)
    {
        cout << chars.top();
        chars.pop();
    }
    return 0;
}
