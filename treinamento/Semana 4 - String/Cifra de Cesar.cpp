#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, code;
    string cifra;

    cin >> n;
    for (int i = 0; i < n; i++) {
        getline(cin >> ws, cifra);
        cin >> code;

        for (int j = 0; j < int(cifra.length()); j++) {
            cifra[j] = cifra[j] - code;
            if (cifra[j] < 'A') {
                cifra[j] += 26;
            }

            cout << cifra[j];
        }
        cout << endl;
    }

    return 0;
}