#include <bits/stdc++.h>
using namespace std;

int k;
string in, out;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> k;

    vector<char> chars;
    chars.resize(k);
    vector<string> seq;
    seq.resize(k);

    for (int i = 0; i < k; ++i) {
        cin >> chars[i] >> seq[i];
//        cout << chars[i] << ' ' << seq[i];
    }


    cin >> in;

    int i;
    for (i = 0; i < in.length(); ++i) {
        if (count(seq.begin(), seq.end(), in.substr(0, i + 1)) == 1) {
            out += chars[distance(seq.begin(), find(seq.begin(), seq.end(), in.substr(0, i + 1)))];
            in = in.substr(i + 1);
            i = -1;
        }
    }

    cout << out;
    
    
    return 0;
}