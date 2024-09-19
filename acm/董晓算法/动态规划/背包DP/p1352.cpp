//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-14.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;
int n;
vector<int> g[N];
int s[N];
bool fa[N];
int dp[N][2];


void dfs(int root) {
    dp[root][1] = s[root];
    for (auto i: g[root]) {
        dfs(i);
        dp[root][0] += max(dp[i][0], dp[i][1]);
        dp[root][1] += dp[i][0];
    }
}

void sol() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }
    int x, y;
    for (int i = 1; i < n; i++) {
        cin >> x >> y;
        g[y].push_back(x);
        fa[x] = true;
    }
    int root = 1;
    while (fa[root]) {
        root++;
    }
    dfs(root);
    cout << max(dp[root][0], dp[root][1]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}