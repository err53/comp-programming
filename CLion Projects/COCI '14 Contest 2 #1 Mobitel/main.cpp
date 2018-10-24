#include <iostream>
#include <string>

using namespace std;

const string convert[] = { "", "abc", "def",
                           "ghi", "jkl", "mno",
                           "pqrs", "tuv", "wxyz" };

int main() {
    int beh[9];
    for (int i = 0; i < 9; ++i) {
        cin >> beh[i];
    }

    string in;
    cin >> in;
    string out = " ";


    for (int i = 0; i < in.length(); ++i) {
        for (int j = 1; j < 9; ++j) {
            for (int k = 0; k < convert[j].length(); ++k) {
                if (in[i] == convert[j][k]) {
                    int buf = -1;
                    for (int l = 0; l < 9; ++l)
                    {
                        if (beh[l] == j + 1)
                        {
                            buf = l + 1;
                            break;
                        }
                    }
                    if (out.back() == buf + '0') {
                        out += '#';
                    }
                    for (int l = 0; l < k + 1; ++l) {
                        out += to_string(buf);
                    }
                    goto nextLetter;
                }
            }
        }
        nextLetter:;
    }

    cout << out.substr(1);

    return 0;
}