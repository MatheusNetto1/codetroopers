#include <bits/stdc++.h>

using namespace std;

int main() {
    string a;

    while (getline(cin >> ws, a)) {
        vector<string> palavras;

        int inicio = 0;
        int fim = a.size() - 1;

        // Separa a frase em palavras
        for (int i = 1; i < int(a.size()); i++) {
            if (a[i] == ' '){
                palavras.push_back(a.substr(inicio, i - inicio));
                inicio = i + 1;
            }
        }
        palavras.push_back(a.substr(inicio, fim - inicio + 1)); // Adiciona a última palavra

        int aliteracoes = 0;            // Contador de aliterações
        char letraAnterior = 0;         // Letra anterior
        int grupo = 0;                  // Contador de letras consecutivas

        for (int i = 0; i < int(palavras.size()); i++) {
            char letraAtual = tolower(palavras[i][0]);      // Pega a primeira letra da palavra atual
            
            
            if (letraAtual == letraAnterior) {          // Se a letra atual for igual à letra anterior, incrementa o contador de grupo
                grupo++;                                // Incrementa o contador de grupo
            } else {                                    // Caso contrário, verifica se o grupo é maior que 1 e incrementa o contador de aliterações
                if (grupo > 1) {                        // Se o grupo for maior que 1, incrementa o contador de aliterações
                    aliteracoes++;                      // Incrementa o contador de aliterações 
                }
                grupo = 1;                              // Reinicia o contador de grupo
            }

            letraAnterior = letraAtual;                 // Atualiza a letra anterior
        }

        if (grupo > 1) aliteracoes++;                   // Se o grupo for maior que 1, incrementa o contador de aliterações

        cout << aliteracoes << endl;
    }

    return 0;
}