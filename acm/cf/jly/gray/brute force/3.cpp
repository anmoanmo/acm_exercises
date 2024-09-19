//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-2.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;


void sol() {
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    int ans = 0;
    while (a.find(b) == -1 && (ans == 0 || a.size() < 2 * m)) {
        ans++;
        a += a;
    }
    if (a.find(b)==-1) {
        cout << -1 << '\n';
    } else {
        cout << ans << '\n';
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