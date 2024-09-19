//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-4.
//

#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 810;
using namespace std;
char g[N][N];
int n, m;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int vis[N][N];
queue<pair<int, int>> qm, qg;
vector<pair<int, int>> vx;
int times;

bool check(int x, int y) {
    if (x < 1 || x > n || y < 1 || y > m || g[x][y] == 'X') {
        return false;
    }
    if (abs(vx[0].first - x) + abs(vx[0].second - y) <= 2 * times) {
        return false;
    }
    if (abs(vx[1].first - x) + abs(vx[1].second - y) <= 2 * times) {
        return false;
    }
    return true;
}

void bfs() {
    times = 0;
    memset(vis, 0, sizeof vis);
    while (!qm.empty() || !qg.empty()) {
        times++;
        for (int i = 0; i < 3; i++) {
            for (int j = 0, s = qm.size(); j < s; j++) {
                auto t = qm.front();
                qm.pop();
                int x = t.first, y = t.second;
                if (!check(x, y)) {
                    continue;
                }

                for (int k = 0; k < 4; k++) {
                    int a = x + dx[k], b = y + dy[k];
                    if (check(a, b)) {
                        if (vis[a][b] == 2) {
                            cout << times << '\n';
                            return;
                        }
                        if (!vis[a][b]) {
                            vis[a][b] = 1;
                            qm.push({a, b});
                        }
                    }
                }
            }
        }

        for (int i = 0; i < 1; i++) {
            for (int j = 0, s = qg.size(); j < s; j++) {
                auto t = qg.front();
                qg.pop();
                int x = t.first, y = t.second;
                if (!check(x, y)) {
                    continue;
                }

                for (int k = 0; k < 4; k++) {
                    int a = x + dx[k], b = y + dy[k];
                    if (check(a, b)) {
                        if (vis[a][b] == 1) {
                            cout << times << '\n';
                            return;
                        }
                        if (!vis[a][b]) {
                            vis[a][b] = 2;
                            qg.push({a, b});
                        }
                    }
                }
            }
        }
    }
    cout << -1 << '\n';

}

void sol() {
    //初始化输入数据
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> g[i][j];
            if (g[i][j] == 'M') {
                vis[i][j] = 1;
                qm.push({i, j});
            } else if (g[i][j] == 'G') {
                vis[i][j] = 2;
                qg.push({i, j});
            } else if (g[i][j] == 'Z') {
                vx.push_back({i, j});
            }
        }
    }
    bfs();
    while (!qm.empty()) {
        qm.pop();
    }
    while (!qg.empty()) {
        qg.pop();
    }
    vx.clear();

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        sol();
    }
}

