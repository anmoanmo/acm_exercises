//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-26.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    vector<string> ty(n);
    for (int i = 0; i < n; i++) {
        cin >> ty[i];
    }
    ll diff = 0;
    vector<vector<ll>> pref(n + 1, vector<ll>(m + 1, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            pref[i + 1][j + 1] = ty[i][j] == '0' ? 1 : -1;
            diff += pref[i + 1][j + 1] * v[i][j];
            pref[i + 1][j + 1] += pref[i + 1][j];
        }
    }
    if (diff == 0) {
        cout << "YES" << '\n';
        return;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            pref[i][j] += pref[i - 1][j];
        }
    }
    ll f = 0;
    for (int i = 0; i < n - k + 1; i++) {
        for (int j = 0; j < m - k + 1; j++) {
            int d = pref[i][j] - pref[i + k][j] - pref[i][j + k] + pref[i + k][j + k];
            f = gcd(f, d);
        }
    }
    if (f == 0 || diff % f != 0) {
        cout << "NO" << '\n';
        return;
    }
    cout << "YES" << '\n';
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
