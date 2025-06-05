#include <bits/stdc++.h>

using namespace std;

int main() {
    int hora_inicial, hora_final;
    int minuto_inicial, minuto_final;
    int duracao;

    cin >> hora_inicial >> minuto_inicial >> hora_final >> minuto_final;

    hora_inicial *= 60;
    hora_final *= 60;

    int tempo_inicio = hora_inicial + minuto_inicial;
    int tempo_final = hora_final + minuto_final;

    duracao = tempo_final - tempo_inicio;

    if (duracao == 0) {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    } else if(duracao < 0) {
        cout << "O JOGO DUROU " << (duracao/60) + 23 << " HORA(S) E " << (duracao%60) + 60 << " MINUTO(S)" << endl;
    } else {
        cout << "O JOGO DUROU " << duracao/60 << " HORA(S) E " << duracao%60 << " MINUTO(S)" << endl;
    }

    
    return 0;
}