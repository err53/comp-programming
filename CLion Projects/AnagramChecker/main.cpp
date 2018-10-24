#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string in1, in2;
    getline(cin, in1), getline(cin, in2);
    in1.erase(remove(in1.begin(), in1.end(), ' '), in1.end());
    in2.erase(remove(in2.begin(), in2.end(), ' '), in2.end());
    sort(in1.begin(), in1.end());
    sort(in2.begin(), in2.end());
    if (in1 == in2) {
        cout << "Is an anagram.";
    } else {
        cout << "Is not an anagram.";
    }
}
