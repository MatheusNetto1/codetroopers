#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    while (cin >> n) {
        int m[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                m[i][j] = 3;

                if (i == j) m[i][j] = 1;
            }
            m[i][n-i-1] = 2;
        }


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << m[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}