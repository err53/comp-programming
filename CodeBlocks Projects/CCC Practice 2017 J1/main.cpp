#include <iostream>
#include <cmath>

using namespace std;

int quadrantCalc (int x, int y) {
    if (x > 0 && y > 0) return 1;
    if (x < 0 && y > 0) return 2;
    if (x < 0 && y < 0) return 3;
    if (x > 0 && y < 0) return 4;
}
int main()
{
    int x;
    int y;

    cin >> x;
    cin >> y;

    cout << quadrantCalc(x, y) << endl;
}
