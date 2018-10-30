#include <iostream>
#include <regex>
using namespace std;
int main() {
    regex r("([aieou])p\\1");
    string s;
    getline(cin, s);
    cout << regex_replace(s, r, "$1");
    return 0;
}