//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-3.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 5e5 + 10;
using namespace std;
int dep[N] = {0}, fa[N][22] = {0};
vector<int> e[N];

void dfs(int u, int father) {
    dep[u] = dep[father] + 1;
    fa[u][0] = father;
    for (int i = 1; i <= 20; i++) {
        fa[u][i] = fa[fa[u][i - 1]][i - 1];
    }
    for (int v: e[u]) {
        if (v != father) {
            dfs(v, u);
        }
    }
}

int lca(int u, int v) {
    if (dep[u] < dep[v]) {
        swap(u, v);
    }
    for (int i = 20; i >= 0; i--) {
        if (dep[fa[u][i]] >= dep[v]) {
            u = fa[u][i];
        }
    }
    if (u == v) {
        return u;
    }
    for (int i = 20; i >= 0; i--) {
        if (fa[u][i] != fa[v][i]) {
            u = fa[u][i];
            v = fa[v][i];
        }
    }
    return fa[u][0];
}

void sol() {
    int n, m, s;
    cin >> n >> m >> s;
    for (int i = 1; i < n; i++) {
        int x, y;
        cin >> x >> y;
        e[x].push_back(y);
        e[y].push_back(x);
    }
    dfs(s, 0);
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        cout << lca(x, y) << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}