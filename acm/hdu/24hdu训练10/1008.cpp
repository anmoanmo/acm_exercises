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
    LL n, k;
    cin >> n >> k;
    int ok = n % (k + 1) == 0;
    LL f = n / (k + 1) + !ok;
    if ((f + ok) % 2 == 0) {
        cout << 'B';
    } else {
        cout << 'A';
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