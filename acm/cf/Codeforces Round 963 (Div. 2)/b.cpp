//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-4.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n;
    cin >> n;
    vector<ll> v(n);
    int ans = 0;
    int ok = 0;
    ll odd = 0, even1 = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] % 2 == 0) {
            ans++;
            even1 = max(even1, v[i]);
        } else {
            odd = max(odd, v[i]);
        }
    }
    sort(v.begin(), v.end());
    ll f = odd;
    for (auto i: v) {
        if (i % 2 == 0 && i < f) {
            f += i;
        }
    }
    if (f < even1) {
        ok = 1;
    }

    if (even1 == 0 || odd == 0) {
        cout << 0 << '\n';
        return;
    } else if (ok || v[0] == odd) {
        cout << ans + 1 << '\n';
        return;
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