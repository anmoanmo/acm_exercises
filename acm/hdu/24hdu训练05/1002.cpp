//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-2.
//

#include<iostream>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;
using LL = long long;

int a[110];

void solve() {
    int n;
    cin >> n;
    int d = 0;
    map<int, int> mp;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        v[i] = a[i];
        mp[a[i]] = 1;
        d = __gcd(d, a[i]);
    }
    if (d == min(mp.begin()->first, mp.end()->first)) {
        cout << n - 1 << '\n';
        return;
    }
    sort(v.begin(), v.end());
    bool ok = 1;
    for (int i = 2; i <= n && ok == 1; i++) {
        for (int j = 1; j < i; j++) {
            if (v[i] % v[j] == 1) {
                ok = 0;
                break;
            }
        }
    }
    if (ok) {
        cout << n + 1 << '\n';
    } else {
        cout << n << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int Case;
    cin >> Case;
    while (Case--) solve();
    return 0;
}