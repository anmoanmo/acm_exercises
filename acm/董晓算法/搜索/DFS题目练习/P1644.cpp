//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-15.
//


#include<bits/stdc++.h>

#define ll long long
const int N = 20;
using namespace std;
int vis[N][N];
int n, m;
int g[N][N];
int ans;
int dx[4] = {1,1,2,2};
int dy[4] = {2,-2,1,-1};

void dfs(int x, int y) {
    if (x == m && y == n) {
        ans++;
        return;
    }
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || nx > m || ny < 0 || ny > n ) {
            continue;
        }
        dfs(nx, ny);
    }
}

void sol() {
    cin >> n >> m;
    ans = 0;
    dfs(0, 0);
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}