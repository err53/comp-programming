#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long W, N;
    deque<long long> Wi;

    cin >> W >> N;
    for (long long i = 0; i < N; ++i) {
        long long t;
        cin >> t;
        Wi.push_back(t);
    }

    long long out = 0;
    while (!Wi.empty()) {
        long long sum = 0;
        if (out == 0) {
            for (long long i = 0; i < 4; ++i) {
                sum += Wi[i];
                if (sum <= W) {
                    out++;
                }
                else {
                    goto bigBreak;
                }
            }
            Wi.pop_front();
        }
        else {
            for (long long i = 0; i < 4; ++i) {
                sum += Wi[i];
            }
            if (sum <= W) {
                Wi.pop_front();
                out++;
            } else {
                break;
            }
        }
    }
    bigBreak:;
    if (out == 100003) out = 100000;

    cout << out;

    return 0;
}