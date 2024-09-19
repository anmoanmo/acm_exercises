//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-5.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 20;
using namespace std;
vector<int> v(N), e[N];
int cnt, ans = N, n;

int gcd(int x, int y) {
    return y ? gcd(y, x % y) : x;
}

bool check(int u, int i) {
    for (auto j: e[i]) {
        if (gcd(u, j) > 1) {
            return false;
        }
    }
    return true;
}

void dfs(int u) {
    if (cnt >= ans) {
        return;
    }
    if (u == n) {
        ans = cnt;
        return;
    }
    for (int i = 0; i < cnt; i++) {
        if (check(v[u], i)) {
            e[i].push_back(v[u]);
            dfs(u + 1);
            e[i].pop_back();
        }
    }
    e[cnt++].push_back(v[u]);
    dfs(u + 1);
    e[--cnt].pop_back();


}

void sol() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    dfs(0);
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}
