#include <bits/stdc++.h>

using namespace std;

int main() {
    double m[12][12], soma = 0;
    char o;

    int dir = 12;

    cin >> o;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < 5; i++, dir--) {
        for (int j = i+1; j < dir-1; j++) {
            soma += m[i][j];
        }
    }

    cout << fixed << setprecision(1);
    if (o == 'S') cout << soma << endl;
    else cout << soma/30 << endl;

    return 0;
}