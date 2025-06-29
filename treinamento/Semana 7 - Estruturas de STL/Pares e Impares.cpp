#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    vector<int> p, i;

    cin >> n;

    for (int j = 0; j < n; j++) {
        cin >> k;

        if (k % 2 == 0) {
            p.push_back(k);
        } else {
            i.push_back(k);
        }
    }

    sort(p.begin(), p.end());
    sort(i.begin(), i.end(), greater<int>());

    vector<int> c(p.begin(), p.end());
    c.insert(c.end(), i.begin(), i.end());

    for (int element : c) {
        cout << element << endl;
    }

    return 0;
}