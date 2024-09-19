//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-11.
//


#include<bits/stdc++.h>

#define ll long long
const int N = 100;
using namespace std;
int vis[N];
int n, m;

struct edge {
    int v, w;
};
vector<edge> e[N];//边集

void dfs(int u, int fa) {
    for (auto ed: e[u]) {
        if (ed.v == fa) {   // 如果子节点==父节点则跳过
            continue;
        }
        cout << u << ' ' << ed.v << ' ' << ed.w << '\n';
        dfs(ed.v, u);
    }
}

void sol() {
    cin >> n >> m;
    memset(e, 0, n + 1);
    for (int i = 1; i <= m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        e[a].push_back({b, c});
        e[b].push_back({a, c});
    }
    dfs(1, 0);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}
//样例输入：
//7 6
//4 3 90
//1 4 30
//5 7 80
//5 6 60
//1 5 20
//5 2 70
//
//样例输出：
//1 4 30
//4 3 90
//1 5 20
//5 7 80
//5 6 60
//5 2 70