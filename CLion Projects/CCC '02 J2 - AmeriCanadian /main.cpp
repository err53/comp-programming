#include <bits/stdc++.h>

using namespace std;

bool isConsonant(char in) {
    string vowels = "aeiouy";
    for (int i = 0; i < 6; ++i) {
        if (in == vowels[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (true) {
        string in;
        cin >> in;
        if (in == "quit!") {
            return 0;
        }
        if (in.length() > 4 && isConsonant(in[in.length() - 3]) && in.substr(in.length() - 2) == "or") {
            cout << in.substr(0, in.length() - 2) << "our" << '\n';
        }
        else {
            cout << in << '\n';
        }
    }
}