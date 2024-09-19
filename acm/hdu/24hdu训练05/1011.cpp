//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-2.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;
map<std::string, int> m;

void fc(string s) {
    if (m[s] != 0) {
        return;
    }
}

void sol() {
    int n;
    cin >> n;

    string s;
    for (int i = 0; i < n + 2; i++) {
        s += '0';
    }
    m[s]++;
    for (int i = 1; i <= n; i++) {
        string s1 = s;
        for (int j = 1; j <= n; j++) {
            s1[j - 1] = s1[j - 1] == '0' ? '1' : '0';
            s1[j] = s1[j] == '0' ? '1' : '0';
            s1[j + 1] = s1[j + 1] == '0' ? '1' : '0';
        }
        if (m[s1] == 0) {
            m[s1]++;
        }
    }
    for (auto i: m) {
        for (int j = 1; j <= n; j++) {
            cout << i.first[j];
        }
        cout << '\n';
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

//#include<bits/stdc++.h>

//#define ll long long
//using namespace std;
//const ll MOD = 998244353;
//
//ll qpow(ll a, ll n) {
//    ll ret = 1;
//    while (n) {
//        if (n & 1) ret = ret * a % MOD;
//        n >>= 1;
//        a = a * a % MOD;
//    }
//    return ret;
//}
//
//void sol() {
//    ll n;
//    cin >> n;
//    if (n % 3 == 2) {
//        cout << qpow(2, n - 1) % MOD << '\n';
//    } else {
//        cout << qpow(2, n) % MOD << '\n';
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int t = 0;
//    cin >> t;
//    while (t--) {
//        sol();
//    }
//}