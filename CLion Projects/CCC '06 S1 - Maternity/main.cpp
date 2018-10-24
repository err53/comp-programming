#include <iostream>
#include <string>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string in1, in2;
    cin >> in1 >> in2;

    int r;
    cin >> r;

    for (int i = 0; i < r; ++i) {
        string baby;
        cin >> baby;

        for (int i = 0; i < baby.length(); ++i) {
            if ((in1[i * 2] == i + 'A' && in1[i * 2 + 1] == i + 'A') ||
                (in2[i * 2] == i + 'A' && in2[i * 2 + 1] == i + 'A')) {
                if (baby[i] != i + 'A') {
                    cout << "Not their baby!" << '\n';
                    goto bigBreak;
                }
            }
            else if ((in1[i * 2] == i + 'a' && in1[i * 2 + 1] == i + 'a') &&
                     (in2[i * 2] == i + 'a' && in2[i * 2 + 1] == i + 'a')) {
                if (baby[i] != i + 'a') {
                    cout << "Not their baby!" << '\n';
                    goto bigBreak;
                }
            }
        }
        cout << "Possible baby." << '\n';
        bigBreak:;
    }
    return 0;
}