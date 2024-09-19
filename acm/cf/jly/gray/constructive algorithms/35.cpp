//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-17.
//

#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 2e5 + 10;
using namespace std;

void sol() {
    int n;
    cin >> n;
    int x;
    vector<int> v;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if ( i != 1 && x < v[ans - 1]) {
            v.push_back(x);
            ans++;
        }
        v.push_back(x);
        ans++;
    }
    cout << ans << '\n';
    for (auto i: v) {
        cout << i << " ";
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