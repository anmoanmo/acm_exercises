//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-10.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;

void sol() {
    int n, W;
    cin >> n >> W;
    int dp[N] = {0}, f[N];
    int q[N] = {0};
    for (int i = 0; i < n; i++) {
        int v, w, m;
        cin >> v >> w >> m;
        memcpy(f, dp, sizeof dp);
        for (int j = 0; j < w; j++) {
            int h = 0, t = -1;
            for (int k = j; k <= W; k += w) {
                while (h <= t && q[h] < k - m * w) {
                    h++;
                }
                if (h <= t) {
                    dp[k] = max(f[k], f[q[h]] + (k - q[h]) / w * v);
                }
                while (h <= t && f[k] >= f[q[t]] + (k - q[t]) / w * v) {
                    t--;
                }
                q[++t] = k;
            }
        }
    }
    cout << dp[W] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}