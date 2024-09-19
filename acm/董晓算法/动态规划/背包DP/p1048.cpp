//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-28.
//


#include<bits/stdc++.h>

typedef unsigned long long ULL;
typedef long long LL;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;

struct ob {
    int t, v;
};

void sol() {
    int t, m;
    cin >> t >> m;
    vector<ob> v(m + 1);
    for (int i = 1; i <= m; i++) {
        cin >> v[i].t >> v[i].v;
    }
    int dp[2][N] = {0}, old = 1, now = 0;
    for (int i = 1; i <= m; i++) {
        swap(old, now);
        for (int j = 0; j <= t; j++) {
            if (v[i].t > j) {
                dp[now][j] = dp[old][j];
            } else {
                dp[now][j] = max(dp[old][j], dp[old][j - v[i].t] + v[i].v);
            }
        }
    }
    cout << dp[now][t] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sol();
}