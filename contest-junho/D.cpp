#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    vector<char> nums;

    cin >> s;

    for (char c : s) {
        if (c != '+') {
            nums.push_back(c);
        }
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
        if (i > 0) {
            cout << "+";
        }

        cout << nums[i];
    }
    cout << endl;

    return 0;
}