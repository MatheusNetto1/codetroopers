#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, v;
    cin >> n;

    unordered_set<int> presenca;

    for (int i = 0; i < n; i++) {
        cin >> v;
        presenca.insert(v);
    }

    cout << presenca.size() << endl;

    return 0;
}