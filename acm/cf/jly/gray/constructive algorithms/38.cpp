//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-17.
//

#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;

void sol() {
    int n;
    cin >> n;
    int x;
    vector<int> m2;
    ll min1 = 1e10;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        ll f1 = 1e10, f2 = 1e10;
        int ind = -1;
        for (int j = 1; j <= x; j++) {
            ll y;
            cin >> y;
            if (y < f1) {
                ind = j;
                f2 = f1;
                f1 = y;
            }
            if (ind != j && y < f2) {
                f2 = y;
            }
        }
        min1 = min(min1, f1);
        m2.push_back(f2);
    }

    int index = -1;
    ll c = 1e10;
    for (int i = 0; i < n; i++) {
        if (c > m2[i]) {
            c = m2[i];
            index = i;
        }
    }
    ll ans = min1;
    for (int i = 0; i < n; i++) {
        if (i == index) {
            continue;
        }
        ans += m2[i];
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

