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
    int n, x;
    cin >> n >> x;
    vector<int> v(n + 1);
    v[0] = 0;
    int res = 0;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        res = max(v[i] - v[i - 1], res);
    }
    res = max((x - v[n]) * 2, res);
    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) {
        sol();
    }
}