//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-20.
//


#include<bits/stdc++.h>

typedef unsigned long long ULL;
typedef long long LL;
const int P = 131;//用于字符串哈希
const int N = 20;
using namespace std;
int g[N][N], ans[N][N][N][N];

void sol() {
    int n;
    cin >> n;
    int x, y;

    while (cin >> x >> y >> g[x][y], x) {
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (x = 1; x <= n; x++) {
                for (y = 1; y <= n; y++) {
                    if (i == x && j == y) {
                        ans[i][j][x][y] = max(
                                max(ans[i - 1][j][x - 1][y], ans[i][j - 1][x][y - 1]),
                                max(ans[i - 1][j][x][y - 1], ans[i][j - 1][x - 1][y])
                        ) + g[i][j];
                    } else {
                        ans[i][j][x][y] = max(
                                max(ans[i - 1][j][x - 1][y], ans[i][j - 1][x][y - 1]),
                                max(ans[i - 1][j][x][y - 1], ans[i][j - 1][x - 1][y])
                        ) + g[i][j] + g[x][y];
                    }
                }
            }
        }
    }
    cout << ans[n][n][n][n] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}