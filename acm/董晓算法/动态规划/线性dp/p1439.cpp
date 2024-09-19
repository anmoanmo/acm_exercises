//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-26.
//


#include<bits/stdc++.h>

typedef unsigned long long ULL;
typedef long long LL;
const int P = 131;//用于字符串哈希
const int N = 1e5 + 10;
using namespace std;

void sol() {
    int n;
    cin >> n;
    map<int, int> m;
    int b[n + 1];
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        m[x] = i;
    }
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        b[i] = m[x];
    }
    int p[n + 1];
    memset(p, 0, sizeof(p));
    p[1] = -1;
    int ans = 1;
    for (int i = 1; i <= n; i++) {
        if (b[i] > p[ans]) {
            p[++ans] = b[i];
        } else {
            *lower_bound(p + 1, p + ans, b[i]) = b[i];
        }
    }
    cout << ans - 1 << '\n';
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}