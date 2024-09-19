//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-30.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;
int n, m;
vector<int> e[N], tp, c(N);

bool dfs(int x) {
    c[x] = -1;
    for (auto i: e[x]) {
        if (c[i] < 0) {
            return 0;
        } else if (!c[i]) {
            if (!dfs(i))return 0;
        }
    }
    c[x] = 1;
    tp.push_back(x);
    return 1;
}

bool tpsort() {
    for (int i = 1; i <= n; i++) {
        if (c[i]) continue;
        if (!dfs(i)) {
            return 0;
        }
    }
    reverse(tp.begin(), tp.end());
    return 1;
}

void sol() {
    cin >> n >> m;
    int x, y;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        e[x].push_back(y);
    }
    if (tpsort()) {
        for (auto i: tp) {
            cout << i << " ";
        }
        cout << '\n';
    } else {
        cout << -1 << '\n';
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}