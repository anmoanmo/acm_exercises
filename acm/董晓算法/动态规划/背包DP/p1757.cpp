//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-13.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1010;
using namespace std;

void sol() {
    int n, m;
    cin >> m >> n;
    int t = 0;
    vector<pair<int, int>> v[N];
    for (int i = 1; i <= n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        v[z].push_back({x, y});
        t = max(t, z);
    }

    int dp[N] = {0};
    for (int i = 1; i <= t; i++) {
        for (int j = m; j >= 1; j--) {
            for (int z = 0; z < v[i].size(); z++) {
                if (j >= v[i][z].first) {
                    dp[j] = max(dp[j], dp[j - v[i][z].first] + v[i][z].second);
                }
            }
        }
    }
    cout << dp[m] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}