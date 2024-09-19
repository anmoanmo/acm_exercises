//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-2.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int a, b, c;
    cin >> a >> b >> c;
    c *= 2;
    cout << (abs(a - b) % c == 0 ? abs(a - b) / c : abs(a - b) / c + 1) << '\n';
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