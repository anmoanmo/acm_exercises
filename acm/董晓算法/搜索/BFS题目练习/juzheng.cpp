//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-16.
//


#include<bits/stdc++.h>

#define ll long long
const int N = 100;
using namespace std;
int g[N][N];
int num;
int vis[N][N];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int n, m;

void bfs(int x, int y) {
    vis[x][y] = 1;//标记已访问
    queue<pair<int, int>> q;
    q.push({x, y});
    while (!q.empty()) {
        auto a = q.front();
        q.pop();
        //移动
        for (int i = 0; i < 4; i++) {
            int nx = a.first + dx[i];
            int ny = a.second + dy[i];
            //越界或重复访问时跳过
            if (nx <= 0 || nx > n || ny <= 0 || ny > m || vis[nx][ny]) {
                continue;
            }
            //找到答案
            if (g[nx][ny] == 1) {
                num = abs(nx - x) + abs(ny - y);
                return;
            }
            //继续广搜
            q.push({nx, ny});
        }
    }

}

void sol() {
    cin >> n >> m;
    //输入
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> g[i][j];
        }
    }
    int ans[N][N];
    //找答案
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            //跳过
            if (g[i][j] == 1) {
                ans[i][j] = 0;
                continue;
            }
            //初始化访问数组
            memset(vis, 0, sizeof(vis));
            bfs(i, j);
            ans[i][j] = num;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << ans[i][j] << ' ';
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}