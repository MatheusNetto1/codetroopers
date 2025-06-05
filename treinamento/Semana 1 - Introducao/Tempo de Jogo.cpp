#include <bits/stdc++.h>

using namespace std;

int main() {
    int hora_inicial, hora_final;
    int duracao;

    cin >> hora_inicial >> hora_final;

    duracao = hora_final - hora_inicial;

    if (duracao < 1 && duracao >= 0) {
        cout << "O JOGO DUROU 24 HORA(S)" << endl; 
    } else if (duracao < 0) {
        hora_final += 24;
        duracao = hora_final - hora_inicial;
        cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
    } else {
        cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
    }

    
    return 0;
}