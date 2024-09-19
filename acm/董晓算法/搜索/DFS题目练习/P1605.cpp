//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-15.
//


#include<bits/stdc++.h>

#define ll long long
const int N = 12;
using namespace std;
int visited[N][N];
int mg[N][N];
int ans;
int n, m;
void dfs(int x, int y, int fx, int fy) {

    if (x < 1 || x > n || y < 1 || y > m) return;
    if (mg[x][y] == 1) return;
    if (visited[x][y]) return;
    if (x == fx && y == fy) {
        ans++;
        return;
    }
    visited[x][y] = 1;
    dfs(x + 1, y, fx, fy);
    dfs(x - 1, y, fx, fy);
    dfs(x, y + 1, fx, fy);
    dfs(x, y - 1, fx, fy);
    visited[x][y] = 0;
};

void sol() {
    int t;
    cin >> n >> m >> t;
    int sx, sy, fx, fy;
    cin >> sx >> sy >> fx >> fy;
    memset(visited, 0, sizeof(visited));
    memset(mg, 0, sizeof(mg));
    for (int i = 0; i < t; i++) {
        int x, y;
        cin >> x >> y;
        mg[x][y] = 1;
    }
    ans = 0;
    dfs(sx, sy, fx, fy);
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}