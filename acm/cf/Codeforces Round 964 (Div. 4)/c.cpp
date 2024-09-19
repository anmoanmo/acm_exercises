//
// Created by ?(???)? on 24-8-10.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n, s, m;
    cin >> n >> s >> m;

    int x = 0;
    bool ok = 0;
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        if (l - x >= s) {
            ok = 1;
        }
        x = r;
    }
    if (m - x >= s) {
        ok = 1;
    }
    if (ok) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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