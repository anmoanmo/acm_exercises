//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-18.
//
#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 350;
using namespace std;
int n, m;
int w[N];
vector<int> to[N];
int dp[N][N];

void dfs(int root) {
    dp[root][1] = w[root];
    for (auto i: to[root]) {
        dfs(i);
        for (int j = m + 1; j >= 1; j--) {
            for (int k = 0; k < j; k++) {
                dp[root][j] = max(dp[root][j], dp[root][j - k] + dp[i][k]);
            }
        }
    }
}

void sol() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x >> w[i];
        to[x].push_back(i);
    }
    dfs(0);
    cout << dp[0][m + 1] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;//cin>>t;
    while (t--) {
        sol();
    }
}
