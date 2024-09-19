//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-15.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;
const int N = 510, M = 3000;
int n, m, a, b, c;
struct edge {
    int v, w, ne;
};
edge e[M];//边集
int idx, h[N];//点的第一条出边

void add(int a, int b, int c) {
    e[idx] = {b, c, h[a]};
    h[a] = idx++;
}

void dfs(int u, int fa) {
    for (int i = h[u]; ~i; i = e[i].ne) {
        int v = e[i].v, w = e[i].w;
        if (v == fa) continue;
        printf("%d,%d,%d\n", u, v, w);
        dfs(v, u);
    }
}

int main() {
    cin >> n >> m;
    memset(h, -1, sizeof h);
    for (int i = 1; i <= m; i++) {
        cin >> a >> b >> c,
                add(a, b, c);
        add(b, a, c);
    }
    dfs(1, 0);
    return 0;
}