#include <iostream>
using namespace std;

unsigned int factorial(unsigned int n)
{
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int main() {
	unsigned int n;
	while (cin >> n && n != 0) {
		cout << factorial(n) << endl;
	}
}