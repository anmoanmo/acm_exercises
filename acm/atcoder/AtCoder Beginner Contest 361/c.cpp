//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-6.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &i: a) {
        cin >> i;
    }
    sort(a.begin(), a.end());

    ll ans = a[n - 1] - a[0];
    for (ll i = 0; i <= k; ++i) {
        ans = min(ans, a[i + n - k - 1] - a[i]);
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}