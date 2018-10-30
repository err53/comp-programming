#include <iostream>
#include <string>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    char encoded[] = "...........................";
//    string plain, enc, dec;
//
//    getline(cin, plain);
//    getline(cin, enc);
//    getline(cin, dec);
//
//    for (int i = 0; i < plain.length(); ++i) {
//        if (isspace(enc[i])) {
//            encoded[27] = plain[i];
//        }
//        else {
//            encoded[enc[i] - 'A'] = plain[i];
//        }
//    }
//
//    for (auto &item : dec) {
//        if(isspace(item)) {
//            item = encoded[27];
//        }
//        else {
//            item = encoded[item - 'A'];
//        }
//    }
//    cout << dec;

    string i1, i2, i3;
    getline(cin, i1), getline(cin, i2), getline(cin, i3);
    char map[128];
    for (int i = 0; i < i2.length(); ++i) {
        map[i2[i]] = i1[i];
    }
    for (int i = 0; i < i3.length(); ++i) {
        if (map[i3[i]] == 0) {
            cout << '.';
        }
        else {
            cout << map[i3[i]];
        }
    }

}