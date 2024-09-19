//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-31.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n;
    cin >> n;
    vector<ll> a(n + 1), b(n + 1);
    ll a1 = 1e9 + 5, b1 = 1e9 + 5, suma = 0, sumb = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a1 = min(a1, a[i]);
        suma += a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        b1 = min(b1, b[i]);
        sumb += b[i];
    }
    ll total = 0;
    total = min((sumb + n * a1),(suma + n * b1));
    cout << total << '\n';
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