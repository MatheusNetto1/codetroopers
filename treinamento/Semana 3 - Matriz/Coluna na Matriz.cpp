#include <bits/stdc++.h>

using namespace std;

int main() {
    float m[12][12], soma = 0;
    int c;
    char t;

    cin >> c >> t;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < 12; i++) soma += m[i][c];

    cout << fixed << setprecision(1);
    if (t == 'S') cout << soma << endl;
    else cout << soma/12 << endl;

    return 0;
}