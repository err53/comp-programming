#include <iostream>
#include <string>
#include <forward_list>

using namespace std;

forward_list<string> a;
forward_list<string> b;

int main()
{
    a.push_front ("Diana");
    a.push_front ("Harry");
    a.push_front ("Romeo");
    a.push_front ("Tom");

    b.push_front ("Diana");
    b.push_front ("Harry");
    b.push_front ("Romeo");
    b.push_front ("Tommy");

    for (int i = 0; i < 4; ++i)
    {
        if (a.front() == b.front()) cout << "True for " << a.front() << endl;
        else cout << "False, " << a.front() << " is different from "
            << b.front() << "." << endl;
        a.pop_front();
        b.pop_front();
    }
    return 0;
}
