#include <iostream>
#include <string>

using namespace std;

string dayFinder(int m, int d) {
    if (m < 2) return "Before";
    else if (m > 2) return "After";
    else {
        if (d < 18) return "Before";
        else if (d > 18) return "After";
        else return "Special";
    }
}

int main()
{
    int m;
    int d;

    cin >> m;
    cin >> d;

    cout << dayFinder(m, d) << endl;
}
