#include <iostream>
#include <string>

using namespace std;

char consonants[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
char closestVow[] = {'a','a','e','e','i','i','i','i','i','o','o','o','o','o','u','u','u','u','u','u','u'};
char nextConson[] = {'c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z','z'};

string converter (string in)
{
    char* arrayIn = (char*)in.c_str();
    string out;

    for (int i = 0; i < in.length(); i++)
    {
        out += arrayIn[i];
        for (int n = 0; n < 21; n++)
        {
            if (arrayIn[i] == consonants[n])
            {
                out += closestVow[n];
                out += nextConson[n];
            }
        }
    }
    return out;
}
int main()
{
    string input;
    cin >> input;
    cout << converter(input);
    return 0;
}
