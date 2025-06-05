#include <bits/stdc++.h>

using namespace std;

struct Ponto {
    float x, y;
};

float distancia(Ponto a, Ponto b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

int main() {
    Ponto p1, p2;

    cin >> p1.x >> p1.y;
    cin >> p2.x >> p2.y;

    cout << fixed << setprecision(4) << distancia(p1, p2) << endl;

    return 0;
}