#include <iostream>
#include <string>
#include <vector>

using namespace std;
string keys[8] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

int main() {
    while (true) {
        string in;
        vector<int> out;
        int length = 0;
        cin >> in;
        if (in == "halt") {
            break;
        }
        for (int i = 0; i < in.length(); ++i) {
            for (int j = 0; j < 8; ++j) {
                for (int k = 0; k < keys[j].length(); ++k) {
                    if (keys[j][k] == in[i]) {
                        if (!out.empty() && out.back() == j) {
                            length += 2;
                        }
                        for (int l = -1; l < k; ++l) {
                            out.push_back(j);
                        }
                        goto bigBreak;
                    }
                }
            }
            bigBreak:;
        }
        length += out.size();
        cout << length << '\n';
    }
    return 0;
}