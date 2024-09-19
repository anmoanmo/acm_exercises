//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-31.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
const int inf = 0x3f3f3f3f;
using namespace std;
int n, m;
vector<pair<int, int>> e[N];
int d[N];
int x, y, z;

bool bellman() {
    memset(d, inf, sizeof d);
    d[1] = 0;
    bool flag;
    for (int i = 1; i <= n; i++) {
        flag = false;
        for (int j = 1; j <= n; j++) {
            if (d[j] == inf) {
                continue;
            }
            for (auto ed: e[j]) {
                int next = ed.first, w = ed.second;
                if (d[next] > d[j] + w) {
                    d[next] = d[j] + w;
                    flag = true;
                }
            }
        }
        if (!flag) {
            break;
        }
    }
    return flag;
}

void sol() {
    cin >> n >> m;
    for (auto &i: e) {
        i.clear();
    }
    for (int i = 0; i < m; i++) {
        cin >> x >> y >> z;
        e[x].push_back({y, z});
        if (z >= 0) {
            e[y].push_back({x, z});
        }
    }
    cout << (bellman() ? "YES" : "NO") << '\n';
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