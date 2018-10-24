#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int gcd(int a, int b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

string simpFrac(int nmrtr, int dnmntr)
{
    if (dnmntr == 0)
        return "ERROR! Cannot divide by 0!";
    else if (nmrtr / dnmntr > 0)
    {
        int whole = nmrtr / dnmntr;
        if (nmrtr % dnmntr != 0)
        {
            nmrtr = nmrtr - whole * dnmntr;
            string frac = simpFrac(nmrtr, dnmntr);
            return to_string(whole) + " " + frac;
        }
        else return to_string(whole);
    }
    else if (nmrtr % dnmntr != 0)
    {
        int divisor = gcd(nmrtr, dnmntr);
        return to_string(nmrtr / divisor) + "/"
        + to_string(dnmntr / divisor);
    }
    else return "0";
}

int main()
{
    cout << "Please input fraction as: " << endl << endl;
    cout << "NUMERATOR" << endl;
    cout << "DENOMINATOR" << endl << endl;

    int a, b;
    cin >> a >> b;

    cout << simpFrac(a, b);

    return 0;
}
