//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-19.
//

#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;
int n, k;
vector<int> a(N), b(N);

void sol() {
    cin >> n >> k;
    vector<int> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    ll ans = 0, sum = 0;
    int max1 = 0;
    for (int i = 1; i <= n && i <= k; i++) {
        sum += a[i];
        max1 = max(max1, b[i]);
        ans = max(ans, sum + 1ll * max1 * (k - i));
    }
    cout << ans << '\n';
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