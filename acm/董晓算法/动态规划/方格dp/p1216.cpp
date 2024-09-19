//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-20.
//


#include<bits/stdc++.h>

typedef unsigned long long ULL;
typedef long long LL;
const int P = 131;//用于字符串哈希
const int N = 1e3 + 10;
using namespace std;
int g[N][N];
int ans[N][N];


void sol() {
    int r;
    cin >> r;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> g[i][j];
        }
    }
    int m = 0;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= i; j++) {
            ans[i][j] = max(ans[i -1 ][j - 1], ans[i - 1][j]) + g[i][j];
            m = max(m, ans[i][j]);
        }
    }
    cout << m << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}