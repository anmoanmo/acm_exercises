//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-5.
//


#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
using ll = long long;

//const int N = 1e5 + 10;
//LL b[N], e[N], s[N], t[N];

struct node {
    ll x, y;
};

void solve() {
    int n, m;
    cin >> n >> m;
    vector<node> a(n), b(m), v;
    for (int i = 0; i < n; i++) {
        cin >> a[i].x >> a[i].y;
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i].x >> b[i].y;
    }
    ll idx = 0;
    ll s = 0, e = 0;
    bool ok = 1;
    for (int i = 0; i < n; i++) {
        while (e < a[i].x && idx < m) {
            s = b[idx].y, e = (b[idx].y - b[idx].x) * 2 + b[idx].y;
            idx++;
            if (b[idx].x < e && idx < m) {
                e = b[idx].x;
            }
        }
        if (a[i].x < s || a[i].y > e) {
            ok = 0;
            break;
        }
    }
    if (ok) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
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