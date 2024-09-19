//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-28.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;

void sol() {
    int v, n;
    cin >> v >> n;
    vector<int> ob(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> ob[i];
    }

    int dp[2][N] = {0}, old = 1, now = 0;
    for (int i = 1; i <= n; i++) {
        swap(old, now);
        for (int j = 0; j <= v; j++) {
            if (ob[i] > j) {
                dp[now][j] = dp[old][j];
            } else {
                dp[now][j] = max(dp[old][j], dp[old][j - ob[i]] + ob[i]);
            }
        }
    }

    cout << dp[now][v] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}