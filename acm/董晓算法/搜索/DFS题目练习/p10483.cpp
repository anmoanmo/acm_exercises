//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-6.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 20;
using namespace std;
int n, w;
vector<int> v(20);
vector<int> f(20);
int cnt, ans = N;


void dfs(int u) {
    if (cnt >= ans) {
        return;
    }
    if (u == n) {
        ans = cnt;
        return;
    }
    for (int i = 0; i < cnt; i++) {
        if (f[i] + v[u] <= w) {
            f[i] += v[u];
            dfs(u + 1);
            f[i] -= v[u];
        }
    }
    f[cnt++] += v[u];
    dfs(u + 1);
    f[--cnt] -= v[u];
}

void sol() {
    cin >> n >> w;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
//    sort(v.begin(), v.begin() + n);
//    reverse(v.begin(), v.begin() + n);
    dfs(0);
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}