#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string fizzBuzz(int n)
{
    string out;
    if (n % 3 == 0) out += "Fizz";
    if (n % 5 == 0) out += "Buzz";
    if (out == "") out = to_string(n);
    return out;
}

int main()
{
    int iStart;
    int iEnd;
    int range;

    cin >> iStart;
    cin >> iEnd;
    range = iEnd-iStart;

    for (int i = 0; i <= range; i++)
    {
        cout << fizzBuzz(i+iStart) << endl;
    }

    return 0;
}
