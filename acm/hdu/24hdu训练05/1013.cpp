//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-2.
//


#include <bits/stdc++.h>

#define ll long long
using namespace std;
const ll mod = 1e9 + 7;

void sol() {
    ll n;
    cin >> n;
    ll ans = (n - 1) * (n - 1) / n + 1;
    cout << ans % mod << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        sol();
    }
}
