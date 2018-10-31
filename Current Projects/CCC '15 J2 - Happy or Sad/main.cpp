#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string in;
    getline(cin, in);

    bool emote = false;
    int happy = 0;

    for (int i = 0; i < in.length() - 2; ++i) {
        if (
                in[i] == ':' &&
                in[i + 1] == '-'
                ) {
            switch  (in[i + 2]) {
                case ')':
                    happy++;
                    emote = true;
                    break;
                case '(':
                    happy--;
                    emote = true;
                    break;
                default:break;
            }
        }
    }

    if (!emote) {
        cout << "none";
    }
    else if (happy > 0) {
        cout << "happy";
    }
    else if (happy < 0) {
        cout << "sad";
    }
    else {
        cout << "unsure";
    }

    return 0;
}