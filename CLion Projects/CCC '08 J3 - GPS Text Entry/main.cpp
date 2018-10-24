#include <iostream>
#include <unordered_map>

using namespace std;

typedef unordered_map<char, pair<int, int>> AMapT;


int x = 0, y = 0;

int main() {
    AMapT mymap;

    mymap['A'] = make_pair(0, 0);
    mymap['B'] = make_pair(1, 0);
    mymap['C'] = make_pair(2, 0);
    mymap['D'] = make_pair(3, 0);
    mymap['E'] = make_pair(4, 0);
    mymap['F'] = make_pair(5, 0);

    mymap['G'] = make_pair(0, 1);
    mymap['H'] = make_pair(1, 1);
    mymap['I'] = make_pair(2, 1);
    mymap['J'] = make_pair(3, 1);
    mymap['K'] = make_pair(4, 1);
    mymap['L'] = make_pair(5, 1);

    mymap['M'] = make_pair(0, 2);
    mymap['N'] = make_pair(1, 2);
    mymap['O'] = make_pair(2, 2);
    mymap['P'] = make_pair(3, 2);
    mymap['Q'] = make_pair(4, 2);
    mymap['R'] = make_pair(5, 2);

    mymap['S'] = make_pair(0, 3);
    mymap['T'] = make_pair(1, 3);
    mymap['U'] = make_pair(2, 3);
    mymap['V'] = make_pair(3, 3);
    mymap['W'] = make_pair(4, 3);
    mymap['X'] = make_pair(5, 3);

    mymap['Y'] = make_pair(0, 4);
    mymap['Z'] = make_pair(1, 4);
    mymap[' '] = make_pair(2, 4);
    mymap['-'] = make_pair(3, 4);
    mymap['.'] = make_pair(4, 4);

    int dist = 0;
    string in;
    getline(cin, in);

    for (const auto &item : in) {
        pair<int, int> f = mymap.at(item);
        dist += abs(f.first - x) + abs(f.second - y);
        x = f.first;
        y = f.second;
    }
    dist += abs(5 - x) + abs(4- y);

    cout << dist;
    return 0;
}