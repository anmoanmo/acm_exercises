//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-30.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;
int n;
struct edge {
    vector<int> next;
    int len;
} v[N];
int pre[N] = {0};
int res[N] = {0};

void tpsort() {
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        if (pre[i] == 0) {
            res[i] = v[i].len;
            q.push(i);
        }
    }
    int x;
    int ans = 0;
    while (q.size()) {
        x = q.front();
        q.pop();
        for (auto i: v[x].next) {
            res[i] = max(res[x] + v[i].len, res[i]);
            ans = max(ans, res[i]);
            if (--pre[i] == 0) {
                q.push(i);
            }
        }
    }
    cout << ans << '\n';
}

void sol() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        int f = 0;
        int idx;
        while (cin >> x) {
            if (x == 0) {
                break;
            }
            if (f == 0) {
                idx = x;
            } else if (f == 1) {
                v[idx].len = x;
            } else if (f >= 2) {
                v[x].next.push_back(idx);
                pre[idx]++;
            }
            f++;
        }
    }

    tpsort();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}
