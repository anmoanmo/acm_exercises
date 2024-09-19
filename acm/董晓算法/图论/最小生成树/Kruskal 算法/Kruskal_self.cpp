//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-2.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 200010;
using namespace std;

struct edge {
    int u, v, w;

    bool operator<(const edge &t) const {
        return w < t.w;
    }
} e[N];

ll fa[5010], n, m, ans;

int find_fa(int i) {
    if (fa[i] == i) {
        return i;
    }
    return fa[i] = find_fa(fa[i]);
}

bool kruskal() {
    sort(e, e + m);
    ans = 0;
    ll cnt = 0;
    for (int i = 1; i <= n; i++) {
        fa[i] = i;
    }
    for (int i = 0; i < m; i++) {
        int x = find_fa(e[i].u);
        int y = find_fa(e[i].v);
        if (x != y) {
            fa[x] = y;
            ans += e[i].w;
            cnt++;
        }
    }
    return cnt == n - 1;
}

void sol() {
    cin >> n >> m;
    int x, y, z;
    for (int i = 0; i < m; i++) {
        cin >> x >> y >> z;
        e[i] = {x, y, z};
    }
    if (kruskal()) {
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