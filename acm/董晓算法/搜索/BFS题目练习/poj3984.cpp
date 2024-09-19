//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-16.
//

#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>

using namespace std;
const int N = 10;
int n, m, a, b;
int vis[N][N];

struct node {
    int x, y;
} pre[N][N];

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};


void bfs(int x, int y) {
    queue<node> q;
    vis[x][y] = 1;
    q.push({x, y});
    while (q.size()) {
        node ord = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = ord.x + dx[i];
            int ny = ord.y + dy[i];
            if (nx < 0 || nx > 4 || ny < 0 || ny > 4 || vis[nx][ny]) {
                continue;
            }
            vis[nx][ny] = 1;
            pre[nx][ny] = ord;
            q.push({nx, ny});
        }
    }
}

void ans(int x, int y) {
    cout << '(' << x << ", " << y << ')' << '\n';
    if (x == 4 && y == 4) {
        return;
    }
    node p = pre[x][y];
    ans(p.x, p.y);
}

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; ++j) {
            cin >> vis[i][j];
        }
    }
    bfs(4, 4);// 广搜起点
    ans(0, 0);
    return 0;
}
