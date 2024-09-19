//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-17.
//

#include<bits/stdc++.h>

#define ll long long
const int N = 510;
using namespace std;
int MAX = 1e8;
int n, m;
char g[N][N];
int vis[N][N];
int dis[N][N];
char op[4] = {'\\', '/', '\\', '/'};
int dx[4] = {-1, -1, 1, 1}, dy[4] = {-1, 1, 1, -1};
int where_x[4] = {-1, -1, 0, 0}, where_y[4] = {-1, 0, 0, -1};

void bfs() {
    deque<pair<int, int>> dq;
    dq.push_front({0, 0});
    memset(dis, 0x3f, sizeof dis);
    // 这行代码的问题在于 memset 并不适合用来初始化整型数组为一个大于 char 范围的整数值。
    // 在你的代码中，MAX 是 1e8，相当于 100,000,000，这是一个很大的数，但 memset 的作用是按字节填充内存，
    // 所以你会发现 dis 数组的值并不会被正确初始化为 MAX。
   // memset 只能将数组中的每个字节设置为相同的值，通常用于初始化为 0 或 -1（即所有字节都为 0 或 0xFF）。
   // 对于整型数组，直接使用 memset 初始化为一个大于 255 的值会导致意想不到的结果。
    dis[0][0] = 0;
    while (dq.size()) {
        auto p = dq.front();
        int x = p.first, y = p.second;
        dq.pop_front();
        if (vis[x][y]) {
            continue;
        }
        if (x == n && y == m) {
            break;
        }
        vis[x][y] = 1;
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx < 0 || nx > n || ny < 0 || ny > m) {
                continue;
            }
            int where_now_x = x + where_x[i], where_now_y = y + where_y[i];
            bool ok = g[where_now_x][where_now_y] == op[i];
            int d = dis[x][y] + (ok ? 0 : 1);
            if (d < dis[nx][ny]) {
                dis[nx][ny] = d;
                if (ok) {
                    dq.push_front({nx, ny});
                } else {
                    dq.push_back({nx, ny});
                }
            }

        }
    }
    if (dis[n][m] == 0x3f3f3f3f) {
        cout << "NO SOLUTION\n";
    } else {
        cout << dis[n][m] << '\n';
    }

}

void sol() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> g[i][j];
        }
    }
    bfs();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}