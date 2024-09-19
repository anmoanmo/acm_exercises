//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-31.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n, k, x;
    cin >> n >> k >> x;
    int ans = 0;
    if (k > n || k - 1 > x) {
        cout << -1 << '\n';
        return;
    } else {
        if (k == x) {
            ans = (k - 1) * k / 2 + (n - k) * (k - 1);
        } else {
            ans = (k - 1) * k / 2 + (n - k) * x;
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