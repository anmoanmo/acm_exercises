//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-15.
//


#include<bits/stdc++.h>

using namespace std;
const int N = 500;
////////////////// 时间戳dfn
int n, m, a, b, tot;
vector<int> e[N];

void dfs(int u, int fa) {
    printf("dfn[%d]=%d\n", u, ++tot);
    for (auto v: e[u]) {
        if (v == fa) continue;
        dfs(v, u);
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        cin >> a >> b,
                e[a].push_back(b),
                e[b].push_back(a);
    dfs(1, 0);
    return 0;
}