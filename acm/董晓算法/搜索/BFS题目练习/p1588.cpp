//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-16.
//


#include<bits/stdc++.h>

#define ll long long
const int N = 1e5 + 10;
using namespace std;
int g[N], vis[N];
int ans, y;

void bfs(int x) {
    unordered_map<int, int> m;
    m[x] = 0;
    vis[x] = 1;
    queue<int> q;
    q.push(x);
    while (q.size()) {
        int n = q.front();
        q.pop();
        if (n == y) {
            cout << m[n] << '\n';
            return;
        }
        if (n + 1 < N) {
            if (!m.count(n + 1)) {
                m[n + 1] = m[n] + 1;
                q.push(n + 1);
            }
        }
        if (n - 1 > 0) {
            if (!m.count(n - 1)) {
                m[n - 1] = m[n] + 1;
                q.push(n - 1);
            }
        }
        if (2 * n < N) {
            if (!m.count(2 * n)) {
                m[2 * n] = m[n] + 1;
                q.push(n * 2);
            }
        }
    }

}

void sol() {
    int x;
    cin >> x >> y;
    bfs(x);
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