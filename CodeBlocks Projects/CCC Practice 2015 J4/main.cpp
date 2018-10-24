#include <iostream>

using namespace std;

bool friendActive[100];
int friendTime[100];
int main()
{
    // Init friendTime
    for (int i = 0; i < 100; i++)
    {
        friendTime[i] = 0;
        friendActive[i] = false;
    }
    int lines;


    cin >> lines;
    // Run check program as many times as lines
    for (int i = 0; i < lines; i++)
    {
        char buffer[6];
        cin.get(buffer, 5);
        if (buffer[0] == 'R')
        {
            friendActive[buffer[2]] = true;
        }
        if (buffer[0] == 'W')
        {
            for (int n = 0; n < 99; n++)
            {
                if (friendActive)
                {
                    friendTime +=
                }
            }
        }
    }

    return 0;
}
