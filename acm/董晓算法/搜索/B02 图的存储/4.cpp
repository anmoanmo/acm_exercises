//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-11.
//



#include<bits/stdc++.h>

using namespace std;
const int N = 510;
int n, m, a, b, c;
struct edge {
    int u, v, w;
};

vector<edge> e;//边集
vector<int> h[N];//点的所有出边

void add(int a, int b, int c) {
    e.push_back({a, b, c});
    h[a].push_back(e.size() - 1);
}

void dfs(int u, int fa) {
    for (int i = 0; i < h[u].size(); i++) {
        int j = h[u][i];
        int v = e[j].v, w = e[j].w;
        if (v == fa) continue;
        printf("%d,%d,%d\n", u, v, w);
        dfs(v, u);
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        cin >> a >> b >> c,
                add(a, b, c);
        add(b, a, c);
    }
    dfs(1, 0);
    return 0;
}


//样例输出：
//6 5
//4 3 90
//1 4 30
//5 6 60
//1 5 20
//5 2 70
//样例输出：
//1,4,30
//4,3,90
//1,5,20
//5,6,60
//5,2,70
