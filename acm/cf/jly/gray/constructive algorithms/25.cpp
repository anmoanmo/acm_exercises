//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-31.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (n & 1) {
        cout << 4 << '\n';
        cout << 1 << ' ' << n - 1 << '\n';
        cout << 1 << ' ' << n - 1 << '\n';
        cout << n - 1 << ' ' << n << '\n';
        cout << n - 1 << ' ' << n << '\n';
    } else {
        cout << 2 << '\n';
        cout << 1 << ' ' << n << '\n';
        cout << 1 << ' ' << n << '\n';
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