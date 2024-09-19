//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-4.
//



#include<bits/stdc++.h>

#define ll long long
using namespace std;
const int N = 1e3 + 5;
int dp[N][N];

void sol() {
    int n, c;
    cin >> n >> c;
    vector<int> a(n + 1), w(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= c; j++) {
            if (w[i] > j) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + a[i]);
            }
        }
    }
    cout << dp[n][c] << '\n';
}

// 记忆化代码
//int fc(int i, int j) {
//    if (dp[i][j] != 0) {
//        return dp[i][j];
//    }
//    if (i == 0) {
//        return 0;
//    }
//    int res;
//    if (w[i] > j) {
//        res = fc(i - 1, j);
//    } else {
//        res = max(fc(i - 1, j), fc(i - 1, j - w[i]) + a[i]);
//    }
//    return dp[i][j] = res;
//}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        sol();
    }
}