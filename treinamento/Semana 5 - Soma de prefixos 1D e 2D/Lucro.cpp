#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int custoPorDia;
        int receita[n];
        int maxLucro = 0, soma = 0;
        int dias, lucro;

        cin >> custoPorDia;

        for (int i = 0; i < n; i++) {
            cin >> receita[i];
        }

        for (int i = 0; i < n; i++) {
            soma = 0;
            for (int j = i; j < n; j++) {
                soma += receita[j];
                dias = j - i + 1;
                lucro = soma - (dias * custoPorDia);
                maxLucro = max(maxLucro, lucro);
            }
        }

        cout << maxLucro << endl;
    }

    return 0;
}
