//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-17.
//

#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;

void sol() {
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 1; i <= n; i++) {
        if (i != 1) {
            int f = i;
            while (f <= n && !m[f]) {
                cout << f << ' ';
                m[f]++;
                f *= 2;
            }
        } else {
            cout << 1 << ' ';
        }
    }
    cout << '\n';
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