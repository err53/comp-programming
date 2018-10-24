#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string in;
    cin >> in;
    for (int i = in.length() - 2; i >= 0; --i)
    {
        if (in[i] < in[i+1]) {
            int s = distance(in.begin(), max_element(in.begin() + i + 1, in.end()));
            for (int j = in.length() - 1; j >= i; --j) {
                if (in[j] > in[i] && in[j] < in[s]) {
                    s = j;
                }
            }
            swap(in[i], in[s]);
            sort(in.begin() + i + 1, in.end());
            cout << in;
            return 0;
        }
    }
    cout << '0';

    return 0;
}