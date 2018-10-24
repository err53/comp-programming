#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    deque<int> students;
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        char mod;
        int student;
        cin >> mod >> student;

        switch (mod) {
            case 'F':
                students.push_front(student);
                break;
            case 'E':
                students.push_back(student);
                break;
            case 'R':
                students.erase(remove(students.begin(), students.end(), student), students.end());
        }
    }

    for (int student : students) {
        cout << student << '\n';
    }
    return 0;
}