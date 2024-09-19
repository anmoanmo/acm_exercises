//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-18.
//


#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    int ans = 0;
    vector<int> v(n);
    for (int i = 0; i <= n; i++) {
        iota(v.begin(), v.end(), 1);
        reverse(v.begin() + n - i, v.end());
        int sum = 0, M = 0;
        for (int i = 1; i <= n; i++) {
            sum += i * v[i - 1];
            M = max(M, i * v[i - 1]);
        }
        ans = max(ans, sum - M);
    }
    cout << ans << '\n';

}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}