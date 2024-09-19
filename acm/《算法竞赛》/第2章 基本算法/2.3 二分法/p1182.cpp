//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-15.
//

// 数列分段

#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    ll l = 0, r = 0;
    for (auto &i: a) {
        cin >> i;
        l = max(l, i);
        r += i;
    }

    auto check = [&](auto x) {
        ll cur = 0;
        ll ans = 1;
        for (ll i = 0; i < n; i++) {
            if (cur + a[i] > x) {
                cur = 0;
                ans++;
            }
            cur += a[i];
        }
        return ans <= m;
    };
    ll ans = 0;
    while (l < r) {
        ll mid = (l + r) >> 1;
        if (check(mid)) {
            //ans = mid;
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    cout << l << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}