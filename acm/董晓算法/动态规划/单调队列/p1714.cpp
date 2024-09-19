//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-12.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 5e5 + 10;
using namespace std;
int s[N], p[N], f[N];
int n, m;

void sol() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
        s[i] += s[i - 1];
    }

    int h = 1, t = 0;
    for (int i = 1; i <= n; i++) {
        while (h <= t && p[h] < i - m) {
            h++;
        }
        while (h <= t && s[p[t]] >= s[i - 1]) {
            t--;
        }
        p[++t] = i - 1;
        f[i] = s[i] - s[p[h]];
    }
    int res = -2e9;
    for (int i = 1; i <= n; i++) {
        res = max(f[i], res);
    }
    cout << res << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}