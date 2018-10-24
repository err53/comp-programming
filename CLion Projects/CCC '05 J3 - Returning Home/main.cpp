#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<char> turns;
    stack<string> streets;

    while (true) {
        char turn;
        string street;
        cin >> turn >> street;
        turns.push(turn);
        if (street == "SCHOOL") {
            break;
        }
        streets.push(street);
    }

    while (!streets.empty()) {
        string turn; turn += turns.top(); turns.pop();
        string street = streets.top(); streets.pop();

        turn[0] == 'R' ?
        turn = "LEFT" : turn = "RIGHT";

        cout << "Turn " << turn << " onto " << street << " street." << '\n';
    }

    string turn; turn += turns.top(); turns.pop();

    turn[0] == 'R' ?
    turn = "LEFT" : turn = "RIGHT";

    cout << "Turn " << turn << " into your HOME." << '\n';
    return 0;
}