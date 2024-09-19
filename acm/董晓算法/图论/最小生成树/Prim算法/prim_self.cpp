//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-2.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
const int inf = 1e9;
using namespace std;
struct edge {
    int v, w;
};
vector<edge> e[N];
int n, m;
int vis[N] = {0}, cnt = 0, d[N];
ll ans;

bool prim(int s) {
    for (int i = 0; i <= n; i++) {
        d[i] = inf;
    }
    d[s] = 0;
    ans = 0;
    for (int i = 1; i <= n; i++) {
        int u = 0;
        for (int j = 1; j <= n; j++) {
            if (!vis[j] && d[j] < d[u]) {
                u = j;
            }
        }
        vis[u] = 1;
        ans += d[u];
        if (d[u] != inf) {
            cnt++;
        }
        for (auto ed: e[u]) {
            int v = ed.v, w = ed.w;
            if (d[v] > w) {
                d[v] = w;
            }
        }
    }
    return cnt == n;
}

void sol() {
    cin >> n >> m;
    int x, y, z;
    for (int i = 0; i < m; i++) {
        cin >> x >> y >> z;
        e[x].push_back({y, z});
        e[y].push_back({x, z});
    }
    if (prim(1)) {
        cout << ans << '\n';
    } else {
        cout << "orz" << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}