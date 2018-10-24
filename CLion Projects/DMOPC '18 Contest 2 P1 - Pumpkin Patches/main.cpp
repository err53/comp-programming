#include <iostream>
using namespace std;
int main() {
    int p;
    cin >> p;
    int lowX, lowY, highX, highY;
    for (int i = 0; i < p; ++i) {
        int x, y;cin >> x >> y;
        if (i == 0) {
            lowX = x;
            highX = x;
            lowY = y;
            highY = y;
        }
        else {
            if (x < lowX) {
                lowX = x;
            }
            if (y < lowY) {
                lowY = y;
            }
            if (x > highX) {
                highX = x;
            }if (y > highY) {
                highY = y;
            }
        }
    }
    cout << 2 * (highX - lowX) + 2 * (highY - lowY);
    return 0;
}