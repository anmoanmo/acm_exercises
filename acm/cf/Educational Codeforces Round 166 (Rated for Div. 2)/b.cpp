//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-23.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i <= n; i++) {
        cin >> b[i];
    }
    ll x = b[n];
    ll ans = 1, t = 1e11;
    for (int i = 0; i < n; i++) {
        ans += abs(a[i] - b[i]);
        t = min(t, abs(a[i] - x));
        t = min(t, abs(b[i] - x));
        if (max(a[i], b[i]) >= x && min(a[i], b[i]) <= x) {
            t = 0;
        }
    }
    cout << ans + t << '\n';


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