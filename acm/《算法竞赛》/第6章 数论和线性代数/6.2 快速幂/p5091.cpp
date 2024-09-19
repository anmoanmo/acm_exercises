//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-29.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e6;
using namespace std;

ll fastPow(ll a, ll b, ll mod) {
    ll ans = 1;
    a %= mod;
    while (b) {
        if (b & 1) {
            ans = (ans * a) % mod;
        }
        b >>= 1;
        a = (a * a) % mod;
    }
    return ans;
}

ll eulerFunction(ll x) {
    ll eulerNumbers = x;
    for (ll i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            eulerNumbers = eulerNumbers / i * (i - 1);
            while (x % i == 0) {
                x /= i;
            }
        }
    }
    if (x > 1) {
        eulerNumbers = eulerNumbers / x * (x - 1);
    }
    return eulerNumbers;
}

ll eulerDropPow(ll a,char b[],ll c)
{
    ll eulerNumbers = eulerFunction(c);
    ll descendingPower=0;
    for(ll i=0,len = strlen(b); i<len; ++i)
    {
        descendingPower=(descendingPower*10+b[i]-'0') % eulerNumbers;
    }
    descendingPower += eulerNumbers;
    return fastPow(a,descendingPower,c);
}

void sol() {
    ll a, m;
    char b[N];
    cin >> a >> m >> b;
    cout << eulerDropPow(a, b, m) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}