//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-28.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int x, y;
    cin >> x >> y;
    y = y - abs(x);
    x = abs(x);
    if ((abs(y) - 1) <= x || y - 1 >= x) {
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