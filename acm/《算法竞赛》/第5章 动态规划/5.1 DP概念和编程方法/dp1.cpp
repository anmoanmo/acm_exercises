//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-4.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;
const int N = 1e5;
int dp[2][N];

int sol(int n, int C) {
    memset(dp, 0, sizeof(dp));
    int now = 0, old = 1;
    for (int i = 1; i <= n; i++) {
        swap(old, now);
        for (int j = 0; j <= C; j++) {
            if (c[i] > j) {
                dp[now][j] = dp[old][j];
            } else {
                dp[now][j] = max(dp[old][j], dp[old][j - c[i]] + w[i]);
            }
        }
    }
    return dp[now][C];
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