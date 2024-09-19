//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-29.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;

void sol() {
    int n, W;
    cin >> n >> W;
    int num = 1;
    vector<pair<int, int>> vector1(N);
    for (int i = 1; i <= n; i++) {
        int v, w, m;
        cin >> v >> w >> m;
        for (int j = 1; j <= m; j <<= 1) {
            vector1[num++] = {v * j, w * j};
            m -= j;
        }
        if (m) {
            vector1[num++] = {v * m, w * m};
        }
    }
    int dp[N] = {0};
    for (int i = 1; i < num; i++) {
        for (int j = W; j >= vector1[i].second; j--) {
            dp[j] = max(dp[j], dp[j - vector1[i].second] + vector1[i].first);
        }
    }
    cout << dp[W] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}