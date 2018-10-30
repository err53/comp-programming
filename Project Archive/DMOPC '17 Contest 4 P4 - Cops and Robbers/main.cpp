#include <bits/stdc++.h>

using namespace std;

int n; deque<int> pro, unpro; bool guard[1000002], fst[1000002];

int main() {
    cin >> n;

    for (int i = 1, x; i <= n; ++i) {
        cin >> x;
        if (!guard[x]) {
            guard[x] = 1; pro.push_back(x); fst[i] = 1;
        }

    }
    if(pro.size() == 1) {
        cout << -1; return 0;
    }
    for(int i = 1; i <= n; ++i) {
        if (!guard[i]) {
            unpro.push_back(i);
        }
    }
    int f = pro.front(); pro.pop_front(); pro.push_back(f);
    for(int i = 1; i <= n; ++i) {
        if(fst[i]) {
            cout << pro.front() << ' '; pro.pop_front();
        }
        else {
            cout << unpro.front() + ' '; pro.pop_front();
        }
    }


}