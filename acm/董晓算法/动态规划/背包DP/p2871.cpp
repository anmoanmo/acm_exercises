//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-27.
//


#include<bits/stdc++.h>

typedef unsigned long long ULL;
typedef long long LL;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;

struct ob {
    int w, d;
};

void sol() {
    int n, m;
    cin >> n >> m;
    vector<ob> v(n);
    for (auto &i: v) {
        cin >> i.w >> i.d;
    }
    int dp[2][m + 1];
    memset(dp, 0, sizeof(dp));
    int old = 1, now = 0;
    for (int i = 0; i < n; i++) {
        swap(old, now);
        for (int j = 0; j <= m; j++) {
            if (v[i].w > j) {
                dp[now][j] = dp[old][j];
            } else {
                dp[now][j] = max(dp[old][j], dp[old][j - v[i].w] + v[i].d);
            }
        }
    }
    cout << dp[now][m] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}