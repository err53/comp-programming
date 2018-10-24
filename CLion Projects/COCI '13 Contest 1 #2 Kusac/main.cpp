#include <bits/stdc++.h>

using namespace std;

int n, m, cut = 0;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < n * m; i+=n) {
        if (i%m != 0) cut++;
    }

    cout << cut;
    return 0;
}