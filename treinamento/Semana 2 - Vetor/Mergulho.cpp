#include <iostream>

using namespace std;

int main() {
    int n, r;

    while (cin >> n >> r) {
        bool retornou[n];

        for (int i = 0; i < n; i++) retornou[i] = false;

        for (int i = 0; i < r; i++) {
            int ret;
            cin >> ret;
            retornou[ret-1] = true;
        }

        if (n == r) cout << "*" << endl;

        else {
            for (int i = 0; i < n; i++) {
                if (retornou[i] == false) {
                    cout << i+1 << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}