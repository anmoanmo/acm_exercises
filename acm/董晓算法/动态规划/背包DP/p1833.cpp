//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-13.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e3 + 10;
using namespace std;

void sol() {
    int h1, h2, m1, m2, n;
    char cc;
    cin >> h1 >> cc >> m1 >> h2 >> cc >> m2 >> n;
    int sum_t = (h2 - h1) * 60 + (m2 - m1);
    int dp[N] = {0}, g[N], q[N] = {0};

    for (int i = 0; i < n; i++) {
        int t, c, p;
        cin >> t >> c >> p;

        memcpy(g, dp, sizeof(dp));
        for (int j = 0; j < t; j++) {
            int head = 0, tail = -1;
            for (int k = j; k <= sum_t; k += t) {
                while (head <= tail && q[head] < k - p * t && p) {
                    head++;
                }
                if (head <= tail) {
                    dp[k] = max(g[k], g[q[head]] + (k - q[head]) / t * c);
                }
                while (head <= tail && g[k] >= g[q[tail]] + (k - q[tail]) / t * c) {
                    tail--;
                }
                q[++tail] = k;
            }
        }
    }
    cout << dp[sum_t] << '\n';


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}