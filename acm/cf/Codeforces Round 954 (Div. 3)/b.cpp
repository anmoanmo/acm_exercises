//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-24.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> v(n + 2, vector<ll>(m + 2));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> v[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (v[i][j] > v[i][j - 1] && v[i][j] > v[i][j + 1] && v[i][j] > v[i - 1][j] && v[i][j] > v[i + 1][j]) {
                v[i][j] = max(max(max(v[i][j - 1], v[i][j + 1]), v[i - 1][j]), v[i + 1][j]);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << v[i][j] << " ";
        }
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        sol();
    }
}