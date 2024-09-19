//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-31.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n, l, r;
    cin >> n >> l >> r;
    ll ans[100100] = {0};
    for (int i = 1; i <= n; i++) {
//        如果 r / i == (l - 1) / i，
//        那么 r 和 l - 1 在被 i 分别整除后得到了相同的商。
//        这意味着在 i 等份的划分下，r 和 l-1 落在了同一个等份区间内。
        if (r / i == (l - 1) / i) {
            cout << "NO\n";
            return;
        }
        ans[i] = r / i * i;
    }
    cout << "YES\n";
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << ' ';
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

