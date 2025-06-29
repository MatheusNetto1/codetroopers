#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100;

int n;
int x[MAXN], y[MAXN];
bool visited[MAXN];

void dfs(int u) {
    visited[u] = true;
    for (int v = 0; v < n; v++) {
        if (!visited[v]) {
            if (x[u] == x[v] || y[u] == y[v]) {
                dfs(v);
            }
        }
    }
}

int main() {
    int components = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            components++;
            dfs(i);
        }
    }

    cout << components - 1 << endl;

    return 0;
}