//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-31.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;
const int N = 1e3;
int g[N][N] = {0};

void sol() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        for (int j = 1; j <= s.size(); j++) {
            g[i][j] = s[j - 1] - '0';
        }
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            int ans = g[i][j] + g[i + 1][j] + g[i][j + 1] + g[i + 1][j + 1];
            if (ans == 3) {
                cout << "NO" << '\n';
                return;
            }
        }
    }
    cout << "YES" << "\n";
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