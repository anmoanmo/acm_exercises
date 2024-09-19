//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-31.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;
int n, m, u, v, w;
struct edge {
    int next, w;
};
int d[N], vis[N] = {0}, cnt[N] = {0};
vector<edge> e[N];

bool SPFA() {
    queue<int> q;
    q.push(1);
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        vis[x] = 0;

        for (auto &ed: e[x]) {
            if (d[ed.next] > d[x] + ed.w) {
                d[ed.next] = d[x] + ed.w;
                cnt[ed.next] = cnt[x] + 1;
                if (cnt[ed.next] >= n) {
                    return true;
                }
                if (!vis[ed.next]) {
                    q.push(ed.next);
                    vis[ed.next] = 1;
                }
            }
        }
    }
    return false;
}

void sol() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> u >> v >> w;
        e[u].push_back({v, w});
        if (w >= 0) {
            e[v].push_back({u, w});
        }
    }
    memset(d, 0x3f, sizeof d);
    d[1] = 0;
    cout << (SPFA() ? "YES" : "NO") << '\n';
    for (int i = 0; i <= n; i++) {
        e[i].clear();
        vis[i] = 0;
        cnt[i] = 0;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        sol();
    }
}