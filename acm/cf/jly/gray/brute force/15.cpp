//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-26.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n;
    cin >> n;
    vector<int> v(n + 1);
    bool ok = 1;
    int ans = 1e9;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        if (v[i] < v[i - 1]) {
            ok = 0;
        }
        if (i > 1) {
            ans = min(ans, v[i] - v[i - 1]);
        }
    }
    if (ok) {
        cout << ans / 2 + 1 << '\n';
    } else {
        cout << 0 << '\n';
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