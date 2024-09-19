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
    int t, m;
    cin >> t >> m;
    vector<pair<int, int>> v(m + 1);
    for (int i = 1; i <= m; i++) {
        cin >> v[i].first >> v[i].second;
    }

    vector<ll> dp(t + 1);
    for (int i = 1; i <= m; i++) {
        for (int j = v[i].first; j <= t; j++) {
            dp[j] = max(dp[j], dp[j - v[i].first] + v[i].second);
        }
    }
    cout << dp[t] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}