#include <iostream>
#include <vector>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s, v, o;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> s >> v >> o;
        cin.ignore();
        vector<string> sIn;
        vector<string> vIn;
        vector<string> oIn;

        vector<string> out;

        for (int j = 0; j < s; ++j) {
            string buf;
            getline(cin, buf);
            sIn.push_back(buf);
        }
        for (int j = 0; j < v; ++j) {
            string buf;
            getline(cin, buf);
            vIn.push_back(buf);
        }
        for (int j = 0; j < o; ++j) {
            string buf;
            getline(cin, buf);
            oIn.push_back(buf);
        }

        for (int j = 0; j < s; ++j) {
            for (int k = 0; k < v; ++k) {
                for (int l = 0; l < o; ++l) {
                    out.push_back(sIn[j] + ' ' + vIn[k] + ' ' + oIn[l] + '.');
                }
            }
        }

        for (string it : out) {
            cout << it << '\n';
        }
        cout << '\n';
    }
    return 0;
}