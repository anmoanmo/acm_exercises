//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-26.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n, q;
    cin >> n >> q;
    int ans = 0;
    vector<int> v(n + 1);
    int num = 0;

    for (int i = 1; i <= q; i++) {
        int x, y;
        cin >> x >> y;
        if (x == 1) {
            v[y] = y;
            num++;
        } else {
            v[y] = 0;
            num--;
        }
        if (num < 2) {
            cout << -1 << '\n';
        } else {
            for (auto i: v) {
                if (i != 0 &&  ) {
                    ans = min(ans, ans / i + ans % i);
                }
            }
            cout << ans << '\n';
        }
        ans = y;
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