#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;
    cin.ignore(); // Ignora o caractere de nova linha após a leitura de n
    for (int i = 0; i < n; i++) {
        string linha;
        getline(cin, linha);                      // Lê a string da linha

        int len = linha.size();
        string primeira = linha.substr(0, len / 2);     // pega a metade esquerda
        string segunda = linha.substr(len / 2);         // pega a metade direita

        reverse(primeira.begin(), primeira.end());      // inverte a metade esquerda
        reverse(segunda.begin(), segunda.end());        // inverte a metade direita

        cout << primeira + segunda << endl;             // concatena e imprime
    }

    return 0;
}