//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-18.
//

#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5 + 10;
using namespace std;

void sol() {
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    vector<int> pa(n), pb(n), pc(n);
    iota(pa.begin(), pa.end(), 0);
    iota(pb.begin(), pb.end(), 0);
    iota(pc.begin(), pc.end(), 0);
    sort(pa.begin(), pa.end(), [&](int x, int y) {
        return a[x] > a[y];
    });
    sort(pb.begin(), pb.end(), [&](int x, int y) {
        return b[x] > b[y];
    });
    sort(pc.begin(), pc.end(), [&](int x, int y) {
        return c[x] > c[y];
    });
    int ans = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                int x = pa[i], y = pb[j], z = pc[k];
                if (x != y && y != z && z != x) {
                    ans = max(ans, a[x] + b[y] + c[z]);
                }
            }
        }
    }
    cout << ans << '\n';

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