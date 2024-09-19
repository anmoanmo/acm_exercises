//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-12.
//


#include<iostream>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;
int n, m;
int g[N][N];

void sol() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        if (x > y) {
            swap(x, y);
        }
        g[x][y] = 1;
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (g[i][j] == 0) {
                ans++;
            }
        }
    }
    cout << ans << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}