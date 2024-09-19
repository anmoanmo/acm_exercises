//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-20.
//

#include <iostream>
#include <algorithm>

using namespace std;

const int N = 55;
int a[N][N];
int f[N + N][N][N];

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)cin >> a[i][j];

    for (int k = 2; k <= m + n; k++) //步数
        for (int i = 1; i <= m; i++)   //行
            for (int x = 1; x <= m; x++) {  //行
                int j = k - i, y = k - x;
                if (j < 1 || j > n || y < 1 || y > n) continue;
                int &t = f[k][i][x];
                t = max(max(f[k - 1][i - 1][x - 1], f[k - 1][i - 1][x]),
                        max(f[k - 1][i][x - 1], f[k - 1][i][x]));
                if (i == x) t += a[i][j];
                else t += a[i][j] + a[x][y];
            }

    cout << f[m + n][m][m];
}