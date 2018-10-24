#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int shift(unsigned int N, int k) {
    unsigned int returnVal = 0;
    for (int i = 0; i <= k; i++) {
        returnVal = returnVal + N*pow(10.0, i);
    }
    return returnVal;
}

int main()
{
    unsigned int N;
    int k;
    cin >> N;
    cin >> k;

    cout << shift(N, k) << endl;
}
