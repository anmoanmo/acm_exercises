#include <bits/stdc++.h>

typedef unsigned long long ULL;
typedef long long LL;
const int P = 131; // 用于字符串哈希
const int N = 1e5;
using namespace std;

struct node {
    int l, r, t;
};

void sol() {
    // 初始化输入
    int n, m;
    cin >> n >> m;
    vector<node> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].l >> v[i].r >> v[i].t;
    }


    sort(v.begin(), v.end(), [](node i, node j) {
        if (i.r != j.r) return i.r < j.r;
        if (i.t != j.t) return i.t > j.t;
        return i.l < j.l;
    });

    int ans = 0;
    vector<int> t(m + 1, 0);

    for (int i = 0; i < n; i++) {
        int f = 0;
        for (int j = v[i].l; j <= v[i].r; j++) {
            if (t[j] == 0) {
                f++;
            } else {
                f = 0;
            }
            if (f == v[i].t) {
                ans++;
                for (int z = j; z > j - v[i].t; z--) {
                    t[z]++;
                }
                break;
            }
        }
    }

    if (ans == n) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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