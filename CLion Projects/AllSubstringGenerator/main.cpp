#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//    string in;
//    cin >> in;
//    for (int i = 0; i < in.length(); ++i) {
//        for (int j = 1; j < in.length() - i  + 1; ++j) {
//            cout << in.substr(i, j) << "\n";
//        }
//    }

//    string string1, string2;
//    cin >> string1 >> string2;
//
//    bool out = string1 == string2;
//    cout << out;


    string s;
    cin >> s;
    string t;
    basic_regex<char> r("[^a-zA-Z]");
    regex_replace(s, r, t);

    cout << t;


    return 0;
}