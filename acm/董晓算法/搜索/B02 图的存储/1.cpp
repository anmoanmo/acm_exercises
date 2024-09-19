//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-11.
//


#include<bits/stdc++.h>

#define ll long long
const int N = 100;
using namespace std;
int w[N][N];
int vis[N];
int n,m;

void dfs(int u) {
    vis[u] = true;
    for (int i = 1; i <= n; i++) {
        if (w[u][i]) {
            cout << u << ' ' << i << ' ' << w[u][i] << '\n';
            if (vis[i]) {
                continue;
            }
            dfs(i);
        }
    }
}

void sol() {
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int a,b,c;cin>>a>>b>>c;
        w[a][b] = c;
    }
    dfs(1);
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 0;
    sol();
}