#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int nums[5];
    for (int i = 0; i < 5; ++i) {
        cin >> nums[i];
    }

    while (nums[0] != 1 || nums[1] != 2 ||
    nums[2] != 3 || nums[3] != 4 || nums[4] != 5) {
        for (int i = 0; i < 4; ++i) {
            if (nums[i] > nums[i+1]) {
                swap(nums[i], nums[i+1]);
                for (int j = 0; j < 4; ++j) {
                    cout << nums[j] << ' ';
                }
                cout << nums[4] << "\n";
            }
        }
    }
    return 0;
}