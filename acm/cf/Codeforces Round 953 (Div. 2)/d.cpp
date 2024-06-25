//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-17.
//


#include<bits/stdc++.h>
#define ll long long

void sol() {
    using namespace std;
    ll n,c;cin>>n>>c;
    vector<ll> a(n);
    vector<ll> suf(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    a[0] += c;
    for (ll i = n - 1; i >= 0; i--) {
        suf[i] = max(suf[i + 1], a[i]);
    }
    ll win = 0;
    while (a[win] != suf[0]) {
        win += 1;
    }
    a[0] -= c;
    ll tot = 0;
    for (ll i = 0; i < n; i++) {
        if (i == win) {
            cout << 0 << " ";
        } else {
            if (tot + a[i] + c >= suf[i + 1]) {
                cout << i << " ";
            } else {
                cout << i + 1 << " ";
            }
        }
        tot += a[i];
    }
    cout << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 0;
    std::cin >> t;
    while (t--) {
        sol();
    }
}