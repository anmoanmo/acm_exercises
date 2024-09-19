//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-3.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 5e5 + 10;
using namespace std;
vector<int> e[N];
vector<pair<int, int>> query[N];
int ans[N], vis[N], fa[N];

int find_fa(int s) {
    if (fa[s] == s) {
        return s;
    }
    return fa[s] = find_fa(fa[s]);
}

void tarjan_lca(int u) {
    vis[u] = 1;
    for (int v: e[u]) {
        if (!vis[v]) {
            tarjan_lca(v);
            fa[v] = u;
        }
    }
    for (auto ed: query[u]) {
        int v = ed.first, t = ed.second;
        if (vis[v]) {
            ans[t] = find_fa(v);
        }
    }
}

void sol() {
    int n, m, s;
    cin >> n >> m >> s;
    for (int i = 1; i <= n; i++) {
        fa[i] = i;
    }
    for (int i = 1; i < n; i++) {
        int x, y;
        cin >> x >> y;
        e[x].push_back(y);
        e[y].push_back(x);
    }
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        query[x].push_back({y, i});
        query[y].push_back({x, i});
    }
    tarjan_lca(s);
    for (int i = 1; i <= m; i++) {
        cout << ans[i] << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sol();
}