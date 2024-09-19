//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-25.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    ll n, k;
    cin >> n >> k;
    if (k >= 30) {
        cout << 0 << '\n';
        return;
    }
    int ans = 0;
    for (int i = n; i >= 0; i--) {
        bool ok = true;
        int x, y = i, z = n;
        for (int j = 0; j < k - 2; j++) {
            x = z - y;
            if (x > y) {
                ok = false;
                break;
            }
            z = y;
            y = x;
        }
        if (ok) {
            ans++;
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