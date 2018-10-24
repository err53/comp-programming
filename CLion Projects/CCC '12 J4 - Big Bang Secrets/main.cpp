#include <iostream>

using namespace std;

int main() {
    int k;
    string in;
    cin >> k >> in;

    for (int i = 0; i < in.length(); ++i) {
        in[i] = in[i] - (3 * (i + 1) + k);
        if (in[i] < 'A') {
            in[i] += 26;
        }
    }

    cout << in;
    return 0;
}