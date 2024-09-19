//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-19.
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
    vector<int> v(n);
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    ans = v[0] - 1;
    for (int i = 1; i < n; i++) {
        ans += max(0, v[i] - v[i - 1]);
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        sol();
    }
}