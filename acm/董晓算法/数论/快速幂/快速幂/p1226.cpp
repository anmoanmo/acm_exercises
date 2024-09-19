//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-29.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;

ll quick_pow(ll a, ll b, ll m) {
    ll ans = 1;
    a %= m;
    while (b) {
        if (b & 1) {
            ans = (ans * a) % m;
        }
        a = (a * a) % m;
        b >>= 1;
    }
    return ans;
}

void sol() {
    ll a, b, q;
    cin >> a >> b >> q;
    printf("%lld^%lld mod %lld=%lld", a, b, q, quick_pow(a, b, q));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}