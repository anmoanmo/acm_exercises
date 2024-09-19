//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-1.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 30010;
const int inf = 1e9;
using namespace std;
int n, m, a, b, c;
struct edge {
    int v, w;
};
vector<edge> e[N];
int vis[N], cnt[N];
ll d[N], h[N];

bool spfa() { //判负环
    memset(h, 0x3f, sizeof h);
    memset(vis, 0, sizeof vis);
    memset(cnt, 0, sizeof cnt);
    queue<int> q;
    q.push(0);
    vis[0] = 1;
    h[0] = 0;
    while (q.size()) {
        int u = q.front();
        q.pop();
        vis[u] = 0;
        for (auto ed: e[u]) {
            int v = ed.v, w = ed.w;
            if (h[v] > h[u] + w) {
                h[v] = h[u] + w;
                cnt[v] = cnt[u] + 1;
                if(cnt[v]>n){
                    printf("-1\n");exit(0);
                }
                if (!vis[v]) {
                    q.push(v);
                    vis[v] = 1;
                }
            }
        }

    }
    return 0;
}

void dijkstra(int s) {
    memset(vis, 0, sizeof vis);
    for (int i = 1; i <= n; i++)d[i] = inf;
    priority_queue<pair<ll, int>> q;
    q.push({0, s});
    d[s] = 0;
    while (!q.empty()) {
        int u = q.top().second;
        q.pop();
        if (vis[u]) {
            continue;
        }
        vis[u] = 1;
        for (auto ed: e[u]) {
            int v = ed.v, w = ed.w;
            if (d[v] > d[u] + w) {
                d[v] = d[u] + w;
                if (!vis[v]) {
                    q.push({-d[v], v});
                }
            }
        }
    }

}


void john() {
    for (int i = 1; i <= n; i++) {
        e[0].push_back({i, 0});
    }
    spfa();
    for (int i = 1; i <= n; i++) {
        for (auto &ed: e[i]) {
            ed.w += h[i] - h[ed.v];
        }
    }
    for (int i = 1; i <= n; i++) {
        dijkstra(i);
        ll ans = 0;
        for (int j = 1; j <= n; j++) {
            if (d[j] == inf) {
                ans += (ll) inf * j;
            } else {
                ans += (ll) j * (d[j] + h[j] - h[i]);
            }
        }
        cout << ans << '\n';
    }
}

void sol() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        e[a].push_back({b, c});
    }
    john();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}