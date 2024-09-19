//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-28.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;

struct ob {
    int v, p;
};

void sol() {
    int n, m;
    cin >> n >> m;
    vector<ob> v(m + 1);
    for (int i = 1; i <= m; i++) {
        cin >> v[i].v >> v[i].p;
    }

    ll dp[2][N];
    int old = 1, now = 0;

    for (int i = 1; i <= m; i++) {
        swap(now, old);
        for (int j = 0; j <= n; j++) {
            if (v[i].v > j) {
                dp[now][j] = dp[old][j];
            } else {
                dp[now][j] = max(dp[old][j], dp[old][j - v[i].v] + v[i].v * v[i].p);
            }
        }
    }
    cout << dp[now][n] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}