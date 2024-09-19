//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-4.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll max_one = v[n - 1];
    bool ok;
    for (int j = max_one; j < max_one + k; j++) {
        ok = 1;
        for (int i = 0; i < n - 1; i++) {
            if ((j - v[i]) % (2 * k) >= k) {
                ok = 0;
                break;
            }
        }
        if (ok == 1) {
            ans = j;
            break;
        }
    }
    if (ok) {
        cout << ans << '\n';
    } else {
        cout << -1 << '\n';
    }

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