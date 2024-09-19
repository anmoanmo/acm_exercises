//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-26.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    ll i = 0, j = i, cur = 0, ans = 0;
    while (i < n) {
        while (j < n && cur < l) {
            cur += v[j];
            j++;
        }
        if (cur <= r&&cur>=l) {
            ans++;
            i = j;
            cur=0;
        }
        else{
            cur -= v[i];
            i++;
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