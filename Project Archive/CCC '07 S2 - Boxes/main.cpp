#include <bits/stdc++.h>
using namespace std;
int n, m;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    auto * boxes = new vector<int>[n];
    for (int i = 0; i < n; ++i) {
        boxes[i].resize(3);
        cin >> boxes[i][0] >> boxes[i][1] >> boxes[i][2];
        sort(boxes[i].rbegin(), boxes[i].rend());
    }
    sort(boxes, boxes + n);

    cin >> m;

    auto * items = new vector<int>[m];
    for (int i = 0; i < m; ++i) {
        items[i].resize(3);
        cin >> items[i][0] >> items[i][1] >> items[i][2];
        sort(items[i].rbegin(), items[i].rend());

        for (int j = 0; j < n; ++j) {
            if (
                    items[i][0] <= boxes[j][0] &&
                    items[i][1] <= boxes[j][1] &&
                    items[i][2] <= boxes[j][2]
            ) {
                cout << (unsigned long long)boxes[j][0] * (unsigned long long)boxes[j][1] * (unsigned long long)boxes[j][2] << '\n';
                goto boxFound;
            }
        }
        cout << "Item does not fit." << '\n';
        boxFound:;
    }

    return 0;
}