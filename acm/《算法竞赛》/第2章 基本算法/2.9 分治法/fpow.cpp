//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-4.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

ll fastPow(ll a, ll n, ll m) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return a;
    }

    ll temp = fastPow(a, n / 2, m);
    if (n & 1) {
        return temp * temp * a % m;
    } else {
        return temp * temp % m;
    }
}

void sol() {

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