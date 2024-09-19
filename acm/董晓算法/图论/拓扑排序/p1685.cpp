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
int d[N] = {0};
struct edge {
    ll len;
    ll times;
} e[N];

void tpsort() {
    queue<int> q;
    q.push(s);
    e[s] = {0, 1};
    while (q.size()) {
        auto i = q.front();
        q.pop();
        for (auto x: p[i]) {
            if (d[i] == 0) {
                e[x.first].len += e[i].len + x.second * e[i].times;
                e[x.first].times += e[i].times;
                d[x.first]--;
                q.push(x.first);
            }
        }
    }
    ull ans = e[t].len + (e[t].times - 1) * t0;
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