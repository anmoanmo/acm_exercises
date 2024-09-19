//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-17.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;


void sol() {
    int n, c;
    cin >> n >> c;
    vector<ll> x(n);
    ll l = 1e9 + 10, r = 0;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    sort(x.begin(), x.end());
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            l = min(l, x[i] - x[i - 1]);
        }
    }
    r = x[n - 1] - x[0];

    auto check = [&](auto mid) {
        ll ans = 1,a1=x[0];
        for (int i = 0; i < n; i++) {
            if(x[i]-a1 >= mid){
                ans++;
                a1 = x[i];
            }
        }
        return ans >= c;
    };
    ll ans = 0;
    while (l <= r) {
        ll mid = l + r >> 1;
        if (check(mid)) {
            ans = mid;
            l = mid+1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << '\n';


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}