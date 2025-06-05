#include <bits/stdc++.h>

using namespace std;

int main() {
    int x[1000], n;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    int menor = x[0], pos = 0;

    for (int i = 1; i < n; i++) {
        if (x[i] < menor) {
            menor = x[i];
            pos = i;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << pos << endl;

    return 0;
}