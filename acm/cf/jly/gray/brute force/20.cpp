
//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-29.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;
bool ok = 0;

void dfs(int x, int n) {
    if (x == n) {
        ok = 1;
        return;
    }
    if (x > n) {
        return;
    }
    if (x % 2 == 0) {
        dfs(x + x / 2, n);
    }
    dfs(3 * x, n);
}

void sol() {
    int n, m;
    cin >> n >> m;
    ok = 0;
    if (m > n) {
        cout << "NO" << '\n';
        return;
    }
    dfs(m, n);
    if (ok) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
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