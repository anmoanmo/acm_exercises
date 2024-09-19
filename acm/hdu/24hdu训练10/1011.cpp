//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-18.
//


#include<bits/stdc++.h>

typedef unsigned long long ULL;
typedef long long LL;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;

void sol() {
    LL n, m, k;
    cin >> n >> m >> k;
    vector<LL> a(n), b(n);
    for (auto &i: a) {
        cin >> i;
    }
    for (auto &i: b) {
        cin >> i;
    }
    LL num = 0;
    for (int i = 0; i < n; i++) {
        num += a[i] - 1;
        num = min(m - 1, num);
        if (num > k - 1) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";

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