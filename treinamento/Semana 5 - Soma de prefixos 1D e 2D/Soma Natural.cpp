#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int a, b, soma = 0;

    cin >> a >> b;

    soma = (a + b) * (b - a + 1);
    soma = soma/2;

    cout << soma << endl;

    return 0;
}