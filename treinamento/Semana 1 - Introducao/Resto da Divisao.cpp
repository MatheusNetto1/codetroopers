#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y;

    cin >> x >> y;

    for (int i = min(x, y)+1; i < max(x, y); i++) {
        int resto = i % 5;

        if(resto == 2 || resto == 3) {
            cout << i << endl;
        }
    }

    return 0;
}