//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-17.
//

#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;

void sol() {
    int n, m, k, H;
    cin >> n >> m >> k >> H;
    int mk = (m - 1) * k;
    int x, ans = 0;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (abs(x - H) % k == 0 && abs(x - H) <= mk && H != x) {
            ans++;
        }
    }
    cout << ans << '\n';
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