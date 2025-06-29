#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t != 0) {
        int n;
        cin >> n;

        int G[805][805];
        int p[1605];
        bool filled[1605] = {false};

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> G[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int s = i + j + 2;
                if (!filled[s]) {
                    p[s] = G[i][j];
                    filled[s] = true;
                }
            }
        }

        for (int i = 2; i <= 2 * n; i++) {
            cout << p[i];
            if (i < 2 * n) {
                cout << " ";
            }
        }
        cout << endl;
        
        t--;
    }

    return 0;
}