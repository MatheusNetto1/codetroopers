#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;

    while (cin >> n >> m) {
        int t[n][m], a;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> t[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (t[i][j] == 1) cout << 9;
                else {
                    a = 0;

                    if (i > 0 && t[i-1][j] == 1) a++;
                    if (i < n-1 && t[i+1][j] == 1) a++;
                    if (j > 0 && t[i][j-1] == 1) a++;
                    if (j < m-1 && t[i][j+1] == 1) a++;

                    cout << a;
                }
            }
            cout << endl;
        }
    }

    return 0;
}