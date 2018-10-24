#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 0; i < 5; ++i) {
        string in;
        int r = 0, o = 0;
        getline(cin, in);


        for (int j = 0; j < in.length(); ++j) {
            if (isalpha(in[j])){
                o++;
            }
            else {
                if (o >= 4) {
                    ++r;
                }
                o = 0;
            }
        }

        if (o >= 4) {
            ++r;
        }

        cout << r << "\n";
    }
    return 0;
}