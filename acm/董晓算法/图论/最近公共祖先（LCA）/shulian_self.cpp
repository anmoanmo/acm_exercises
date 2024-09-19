//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-4.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int N = 5e5 + 10;
using namespace std;
vector<int> e[N];
vector<pair<int, int>> query[N];
int fa[N], dep[N], son[N], sz[N], top[N];

void dfs1(int u, int father) {
    fa[u] = father, dep[u] = dep[father] + 1, sz[u] = 1;
    for (auto v: e[u]) {
        if (v != father) {
            dfs1(v, u);
            sz[u] += sz[v];
            if (sz[son[u]] < sz[v]) {
                son[u] = v;
            }
        }
    }
}

void dfs2(int u, int t) {
    top[u] = t;
    if (!son[u]) {
        return;
    }
    dfs2(son[u], t);
    for (auto v: e[u]) {
        if (v == fa[u] || v == son[u]) {
            continue;
        }
        dfs2(v, v);
    }
}

int lca(int a, int b) {
    while (top[a] != top[b]) {
        if (dep[top[a]] < dep[top[b]]) {
            swap(a, b);
        }
        a = fa[top[a]];
    }
    return dep[a] > dep[b] ? b : a;
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
    dfs1(s, 0);
    dfs2(s, s);

    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        cout << lca(x, y) << '\n';
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}