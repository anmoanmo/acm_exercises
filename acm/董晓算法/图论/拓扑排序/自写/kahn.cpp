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
vector<int> e[N], tp, pre(N);

bool tpsort() {
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        if (pre[i] == 0) {
            q.push(i);
        }
    }
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        tp.push_back(x);
        for (auto i: e[x]) {
            if (--pre[i] == 0)q.push(i);
        }
    }
    return tp.size() == n;
}

void sol() {
    cin >> n >> m;
    int x, y;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        e[x].push_back(y);
        pre[y]++;
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