//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-1.
//


#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<cstring>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;
int n, m;
vector<pair<int, int>> e[N];
int d[N];

void dijkstra() {
    priority_queue<pair<int, int>> q;
    memset(d, 0x3f, sizeof d);
    q.push({0, 1});
    d[1] = 0;
    while (!q.empty()) {
        auto x = q.top();
        int u = x.second;
        q.pop();
        for (auto i: e[u]) {
            int v = i.first, w = i.second;
            if (d[v] > d[u] + w) {
                d[v] = d[u] + w;
                q.push({-d[v], v});
            }
        }
    }
}

void sol() {
    while (cin >> n >> m) {
        if (n == 0 && m == 0) {
            return;
        }
        int u, v, w;
        for (int i = 0; i < m; i++) {
            cin >> u >> v >> w;
            e[u].push_back({v, w});
            e[v].push_back({u, w});
        }
        dijkstra();
        cout << d[n] << '\n';
        for (int i = 0; i <= n; i++) {
            e[i].clear();
            d[i] = 0;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}