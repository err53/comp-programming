#include <bits/stdc++.h>
using namespace std;

float performOp(char op, float o1, float o2) {
    switch (op) {
        case '*':
            return o1 * o2;
        case '/':
            return o1 / o2;
        case '+':
            return o1 + o2;
        case '-':
            return o1 - o2;
        case '%':
            return fmod(o1, o2);
        case '^':
            return pow(o1, o2);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string in;
    getline(cin, in);

    stack<float>s;

    for (int i = 0; i < in.length(); ++i) {
        if(in[i] == ' ') {
            continue;
        }
        else if (isdigit(in[i])){
            int o = 0;
            while (i < in.length() && isdigit(in[i])) {
                o = (o*10) + (in[i] - '0');
                ++i;
            }

            --i;
            s.push(o);
        }
        else {
            float o2 = s.top(); s.pop();
            float o1 = s.top(); s.pop();
            float res = performOp(in[i], o1, o2);
            s.push(res);
        }
    }
    cout << s.top();

    return 0;
}