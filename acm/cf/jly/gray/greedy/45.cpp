//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-19.
//

#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5 + 10;
using namespace std;
vector<int> v[N];

void sol() {
    int n;
    cin >> n;
    int ans = 0;
    memset(v, 0, sizeof v);
    for (int i = 1; i <= n-1; i++) {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for (int i = 1; i <= n; i++) {
        if (v[i].size()==1) {
            ans++;
        }
    }
    cout << (ans % 2 == 1 ? ans / 2 + 1 : ans / 2) << '\n';

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