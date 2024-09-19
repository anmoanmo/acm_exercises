//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-4.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;
const ll MOD = 1e9 + 7;

ll mul(ll a, ll b, ll m) {
    a = a % m;
    b = b % m;
    ll res = 0;
    while (b > 0) {
        if (b & 1) {
            res = (res + a) % m;
        }
        a = (a + a) % m;
        b >>= 1;
    }
    return res;
}

void sol() {
    int n;
    cin >> n;
    ll x = mul(n - 1, n - 1, MOD);
    cout << x << '\n';
    cout << x / n % MOD;
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