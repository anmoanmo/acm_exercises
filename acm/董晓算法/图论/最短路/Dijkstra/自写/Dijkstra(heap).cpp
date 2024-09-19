//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-31.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e6;
using namespace std;
int n, m, s;
struct edge {
    ll next, len;
};
vector<edge> e[N];
ll d[N];
int vis[N] = {0};
int pre[N] = {0};

void dijkstra(int s) {
    memset(d, 0x3f, sizeof(d));
    priority_queue<pair<int, int>> q;
    q.push({0, s});
    d[s] = 0;

    while (q.size()) {
        auto x = q.top();
        q.pop();
        if (vis[x.second]) {
            continue;
        }
        vis[x.second] = 1;
        for (auto i: e[x.second]) {
            if (d[i.next] > d[x.second] + i.len) {
                d[i.next] = d[x.second] + i.len;
                pre[i.next] = x.second;
                q.push({-d[i.next], i.next});
            }
        }
    }
}

void dfs_path(int u) {
    if (u == s) {
        cout<<u<<' ';
        return;
    }
    dfs_path(pre[u]);
    cout << u << ' ';
}

void sol() {
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