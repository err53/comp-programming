#include <iostream>
#include <string>
using namespace std;

int main()
{
    int pos = 0;
    string key, mess;
    getline(cin, key);
    getline(cin, mess);
    for (int i = 0; i < mess.length(); ++i) {
        if (mess[i] < 'A' || mess[i] > 'Z') {
            mess.erase(mess.begin() + i);
            --i;
        }
        else {
            mess[i] += key[pos] - 'A';
            pos++;
            if (pos > key.size() - 1) {
                pos = 0;
            }
            if (mess[i] > 'Z') {
                mess[i] -= 26;
            }
        }
    }

    cout << mess;
    return 0;
}