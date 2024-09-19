//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-29.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(n), c(m);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> c[i];
    }

    int mx = *max_element(a.begin(), a.end()) + 1;

    vector<int> best(mx, 1e9);
    vector<int> calc(mx);

    for (int i = 0; i < n; ++i) {
        best[a[i]] = min(best[a[i]], a[i] - b[i]);
    }
    for (int v = 1; v < mx; ++v) {
        best[v] = min(best[v], best[v - 1]);
    }

    for (int v = 1; v < mx; ++v) {
        if (v >= best[v]) {
            calc[v] = 2 + calc[v - best[v]];
        }
    }

    long long ans = 0;
    for (int v : c) {
        int cur = v;
        if (cur >= mx) {
            int k = (cur - mx + 1 + best[mx - 1]) / best[mx - 1];
            ans += 2LL * k;
            cur -= k * best[mx - 1];
        }
        ans += calc[cur];
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

//    int t = 0;
//    cin >> t;
//    while (t--) {
//        sol();
//    }
    sol();
}