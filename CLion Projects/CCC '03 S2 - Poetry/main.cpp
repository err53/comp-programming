#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*
    int n;
    cin >> n;
    cin.ignore(10000, '\n');

    for (int i = 0; i < n; ++i) {
        string line[4];
        for (int j = 0; j < 4; ++j) {
            getline(cin, line[j]);

            int lastVowel = -1;
            for (int k = line[j].length() - 1; k >= 0; --k) {
                if (line[j][k] == ' ') {
                    line[j] = line[j].substr(k);
                    break;
                }
            }

            transform(line[j].begin(), line[j].end(), line[j].begin(), ::tolower);
            for (int k = line[j].length() - 1; k >= 0; --k) {
                if (line[j][k] == 'a' ||
                        line[j][k] == 'e' ||
                        line[j][k] == 'i' ||
                        line[j][k] == 'o' ||
                        line[j][k] == 'u') {
                    lastVowel = k;
                    goto lastVowelFound;
                }
            }
            lastVowelFound:
            line[j] = line[j].substr(lastVowel + 1);
        }

        if (line[0] == line[1] && line[1] == line[2] && line[2] == line[3]) {
            cout << "perfect" << '\n';
        }
        else if (line[0] == line[1] && line[2] == line[3]) {
            cout << "even" << '\n';
        }
        else if (line[0] == line[2] && line[1] == line[3]) {
            cout << "cross" << '\n';
        }
        else if (line[0] == line[3] && line[1] == line[2]) {
            cout << "shell" << '\n';
        }
        else {
            cout << "free" << '\n';
        }
    }

    return 0;
    /**/

    char vowel[] = {"aeiou "};
    string r;
    getline(cin, r);
    for (int k = 0; k < r[0] - '0'; ++k) {
        string line[4];
        for (int i = 0; i < 4; ++i) {
            getline(cin, line[i]);
        }

    }
}