#include <bits/stdc++.h>
using namespace std;

static char const des[4][4] = {
        {'A', 'B', 'C', 'D'},
        {'E', 'F', 'G', 'H'},
        {'I', 'J', 'K', 'L'},
        {'M', 'N', 'O', '.'}
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char in[4][4];
    int scatter = 0;

    for (int i = 0; i < 4; ++i) {
        string buf;
        cin >> buf;
        for (int j = 0; j < 4; ++j) {
            in[i][j] = buf[j];
        }
    }

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            for (int k = 0; k < 4; ++k) {
                for (int l = 0; l < 4; ++l) {
                    if (in[i][j] != '.' && in[i][j] == des[k][l]) {
                        scatter += abs(i-k) + abs(j-l);
                    }
                }
            }
        }
    }

    cout << scatter;

    return 0;
}