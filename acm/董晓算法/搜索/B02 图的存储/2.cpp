//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-11.
//


#include<bits/stdc++.h>

#define ll long long
const int N = 100;
using namespace std;
int vis[N];
int n,m;

struct edge{
    int u,v,w;
}e[N];

void dfs(int u) {
    vis[u] = true;
    for (int i = 1; i <= n; i++) { // 暴力枚举每个边，寻找u为该边的起始点，如果没找到，说明该点已经遍历完了
        if (e[i].u==u) {
            cout << e[i].u << ' ' << e[i].v << ' ' << e[i].w << '\n';
            if (vis[i]) {
                continue;
            }
            dfs(e[i].v);
        }
    }
}

void sol() {
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>e[i].u>>e[i].v>>e[i].w;
    }
    dfs(1);
    return;
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