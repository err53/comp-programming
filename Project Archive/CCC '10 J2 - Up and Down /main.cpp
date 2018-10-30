#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d, s;
    int bS = 0, nS = 0;
    int bi = 0, ni = 0;
    bool bF = true, nF = true;

    cin >> a >> b >> c >> d >> s;

    for (int i = 0; i < s; ++i) {

        if (nF) {
            if (ni < a) {
                nS++;
                ni++;
            }
            else {
                ni = 0;
                nF = false;
                nS--;
                ni++;
            }
        }
        else {
            if (ni < b) {
                nS--;
                ni++;
            }
            else {
                ni = 0;
                nF = true;
                nS++;
                ni++;
            }
        }

        if (bF) {
            if (bi < c) {
                bS++;
                bi++;
            }
            else {
                bi = 0;
                bF = false;
                bS--;
                bi++;
            }
        }
        else {
            if (bi < d) {
                bS--;
                bi++;
            }
            else {
                bi = 0;
                bF = true;
                bS++;
                bi++;
            }
        }
    }

    if (bS < nS) {
        cout << "Nikky";
    }

    else if (bS > nS) {
        cout << "Byron";
    }

    else {
        cout << "Tied";
    }

    return 0;
}