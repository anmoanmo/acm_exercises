//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-31.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5 + 10;
using namespace std;
struct edge {
    ll next, len;
};
vector<edge> e[N];

int vis[N] = {0};
ll d[N];
int n, m;

void dijkstra(int s) {
    memset(d, 0x3f, sizeof(d));
    d[s] = 0;
    for (int j = 1; j < n; j++) {
        int u = 0;
        for (int i = 1; i <= n; i++) {
            if (!vis[i] && d[i] < d[u]) {
                u = i;
            }
        }
        vis[u] = 1;
        for (auto ed: e[u]) {//枚举邻边
            int v = ed.next, w = ed.len;
            if (d[v] > d[u] + w) {
                d[v] = d[u] + w;
            }
        }

    }
}

void sol() {
    int s;
    cin >> n >> m >> s;
    int x, y, z;
    for (int i = 0; i < m; i++) {
        cin >> x >> y >> z;
        e[x].push_back({y, z});
    }
    dijkstra(s);
    for (int i = 1; i <= n; i++) {
        cout << d[i] << ' ';
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}