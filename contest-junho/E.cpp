#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t != 0) {
        long long a, b;
        cin >> a >> b;
        
        long long r = a % b;
        if (r == 0) {
            cout << 0 << endl;
        } else {
            cout << b - r << endl;
        }

        t--;
    }

    return 0;
}