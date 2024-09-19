//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-16.
//


#include<bits/stdc++.h>

#define ll long long
const int N = 110;
using namespace std;
int n, m;
char g[N][N];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int vis[N][N];
int ans;
bool ok;

void dfs(int x, int y) {
    if (vis[x][y] == 1) {
        return;
    }
    if (g[x][y] == '.') {
        return;
    } else if (g[x][y] == 'W') {
        vis[x][y] = 1;
        if (ok) {
            ok = false;
            ans++;
        }
    }

    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 1 || nx > n || ny < 1 || ny > m) {
            continue;
        }
        dfs(nx, ny);
    }
}

void sol() {
    cin >> n >> m;
    ans = 0;
    memset(vis, 0, sizeof(vis));
    char x;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> x;
            g[i][j] = x;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            ok = true;
            dfs(i, j);
        }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}