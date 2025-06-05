#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    while (cin >> n) {
        int m;
        char l;

        int calc = 0;

        pair <int, char> botas[n];

        for (int i = 0; i < n; i++) {
            cin >> m >> l;
            botas[i] = make_pair(m, l);
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (botas[i].first == botas[j].first and botas[i].second != botas[j].second and botas[i].first != 0 and botas[j].first != 0) {
                    calc++;
                    botas[i].first = 0;
                    botas[j].first = 0;
                }
            }
        }

        cout << calc << endl;
    }

    return 0;
}