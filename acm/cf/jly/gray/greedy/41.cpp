//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-18.
//

#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5 + 10;
using namespace std;

void sol() {
    int n;
    cin >> n;
    int a[N] = {0};
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    ll ans = 0;
    ll f1 = 0;
    for (int i = 1; i <= n; i++) {
        ans += a[i];
        if (a[i] % 2 == 1) {
            f1++;
        }
        if (i == 1) {
            cout << ans << ' ';
        } else {
            cout << ans - (f1 / 3) - (f1 % 3 == 1 ? 1 : 0) << ' ';
        }
    }
    cout << '\n';
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