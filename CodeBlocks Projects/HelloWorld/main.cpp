#include <iostream>
#include <cmath>

using namespace std;

double avgFunc (double a, double b) {
    double avg = (a+b)/2;
    return avg;
}

int main() {
    double num1;
    double num2;
    double avg;
    cout << "Welcome to the Averager!" << endl;
    cout << "Please input the first number to be averaged" << endl;
    cin >> num1;
    cout << "please input the second number to be averaged" << endl;
    cin >> num2;
    avg = avgFunc(num1, num2);
    cout << "Average is " << avg << endl;
    return 0;
}
