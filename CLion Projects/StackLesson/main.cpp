#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stack<string> s;

    while (true) {
        string in;
        cin >> in;
        if (in == "0") {
            break;
        }

        for (int i = 0; i < in.length(); ++i) {
            if (in[i] == '+' || in[i] == '-') {

            } else {
                s.push();
            }
        }
    }

    return 0;
}