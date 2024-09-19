//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-15.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int m, k, a1, ak;
    cin >> m >> k >> a1 >> ak;

//    int t = max(0, std::min(m / k, (m - a1 + k - 1) / k));
//    int ans = max(0, t - ak) + max(0, m - t * k - a1);
    int op_k = m / k;
    int op_1 = m % k;
    int need_1 = max(0, op_1 - a1);
    int left_1 = max(0, a1 - op_1);
    int need_k = max(0, op_k - ak);
    int to_replace = min(left_1 / k, need_k);
    int ans = need_1 + need_k - to_replace;
    cout << ans << "\n";
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