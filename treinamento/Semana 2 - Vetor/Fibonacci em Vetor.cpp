#include <bits/stdc++.h>

using namespace std;

int main(){
    int T, N;
    long long int fib[61];

    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i < 61; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> N;
        cout << "Fib(" << N << ") = " << fib[N] << endl;
    }

    return 0;
}