//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-13.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 210;
using namespace std;

void sol() {
    int n, m, t, x, y;
    cin >> n >> m >> t;
    int dp[N][N] = {0};
    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        for (int j = m; j >= x; j--) {
            for (int k = t; k >= y; k--) {
                dp[j][k] = max(dp[j][k], dp[j - x][k - y] + 1);
            }
        }
    }
    cout<<dp[m][t]<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}