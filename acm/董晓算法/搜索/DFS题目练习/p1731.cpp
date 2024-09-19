//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-6.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 20, inf = 1e9;
using namespace std;
int n, m, ans = inf;
int minv[N], mins[N];

void dfs(int u, int r, int h, int v, int s) {
    if (u == 0) {
        if (v == n) {
            ans = min(ans, s);
        }
        return;
    }
    if (s + mins[u] >= ans) {
        return;
    }
    if (v + minv[u] > n) {
        return;
    }

    if (s + 2 * (n - v) / r >= ans) {
        return;
    }

    for (int i = min(r - 1, (int) (sqrt(n - v))); i >= u; i--) {
        for (int j = min(h - 1, (n - v) / (i * i)); j >= u; j--) {
            dfs(u - 1, i, j, v + i * i * j, s + 2 * i * j + (u == m ? i * i : 0));
        }
    }

}

void sol() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        minv[i] = minv[i - 1] + i * i * i;
        mins[i] = mins[i - 1] + 2 * i * i;
    }
    dfs(m, inf, inf, 0, 0);
    if (ans == inf) {
        ans = 0;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}