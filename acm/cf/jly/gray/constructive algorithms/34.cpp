//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-11.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;

void sol() {
    int x, y, n;
    cin >> x >> y >> n;
    vector<int> a(n + 1);
    a[1] = x, a[n] = y;
    int f = 1;
    for (int i = n - 1; i > 1; i--) {
        a[i] = a[i + 1] - f;
        f++;
        if (a[i + 1] - a[i] >= a[i] - a[1]) {
            cout << -1 << '\n';
            return;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i] << ' ';
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