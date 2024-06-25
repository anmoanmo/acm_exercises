//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-16.
//
#include<bits/stdc++.h>

#define ll long long

void sol() {
    using namespace std;
    ll n, a, b;
    cin >> n >> a >> b;
    if (b <= a) { cout << a * n << '\n'; }
    else {
        if ((b - a + 1) >= n) {
            cout << (2 * b + 1 - n) * n / 2 << endl;
        }
        else { cout << (b + a) * (b - a + 1) / 2 + (n - (b - a + 1)) * a << endl; }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t = 0;
    std::cin >> t;
    while (t--) { sol(); }
}