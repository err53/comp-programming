#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, m;
    cin >> n >> m;

    long long* Dn = new long long[n];
    for (long long i = 0; i < n; ++i) {
        cin >> Dn[i];
    }

    long long c_sum = 0, min_l = n + 1;

    long long start = 0, end = 0;
    while (end < n) {
        while(c_sum <= m && end < n) {
            c_sum += Dn[end++];
        }
        while (c_sum > m && start < n) {
            if (end - start < min_l) {
                min_l = end - start;
            }
            c_sum -= Dn[start++];
        }
    }
    if (min_l == n + 1) {
        cout << -1;
    }
    else {
        cout << min_l;
    }


    return 0;
}