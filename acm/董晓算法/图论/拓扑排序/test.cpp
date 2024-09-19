//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-31.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;
int n, m, s, t, t0;

vector<pair<int, int>> p[N];
const int MOD = 1e4;
int vis[N] = {0};
struct edge {
    ll len;
    ll times;
} e[N];
int d[N] = {0};

void dfs(int x) {
    for (auto i: p[x]) {
        e[i.first].len = (e[i.first].len + e[x].len + e[x].times * i.second) % MOD;
        e[i.first].times = (e[x].times + e[i.first].times) % MOD;
        if (--d[i.first] == 0) {
            dfs(i.first);
        }
    }
}


void tpsort() {
    e[s] = {0, 1};
    dfs(s);
    ll ans = e[t].len + t0 * (e[t].times - 1);
    ans %= MOD;
    cout << ans << '\n';
}

void sol() {
    cin >> n >> m >> s >> t >> t0;
    int x, y, z;
    for (int i = 1; i <= m; i++) {
        cin >> x >> y >> z;
        p[x].push_back({y, z});
        d[y]++;
    }
    tpsort();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}