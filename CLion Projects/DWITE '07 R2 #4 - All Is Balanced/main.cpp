#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 0; i < 5; ++i) {
        stack<char> s;
        string in;
        cin >> in;
        for (int j = 0; j < in.length(); ++j) {
            switch (in[j]) {
                case '(':
                case '[':
                case '{':
                    s.push(in[j]);
                    break;
                case ')':
                    if (!s.empty() && s.top() == '(') {
                        s.pop();
                        break;
                    }
                    else {
                        goto notBalanced;
            }
            case ']':
                    if (!s.empty() && s.top() == '[') {
                        s.pop();
                        break;
                    }
                    else {
                        goto notBalanced;
                    }
                case '}':
                    if (!s.empty() && s.top() == '{') {
                        s.pop();
                        break;
                    }
                    else {
                        goto notBalanced;
                    }
                default:
                    break;
            }
        }
        cout << "balanced" << "\n";
        continue;
        notBalanced:
        cout << "not balanced" << "\n";
    }
    return 0;
}