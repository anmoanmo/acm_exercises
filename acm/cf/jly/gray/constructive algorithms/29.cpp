//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-31.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;
const int N = 1e6;

void sol() {
    int n, ans = 0;
    cin >> n;
    int flag = 1e5;
    int x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x % 2 == 1) {
            continue;
        }
        ans++;
        int cnt = 0;
        while (x % 2 == 0) {
            x /= 2;
            cnt++;
        }
        flag = min(flag, cnt);
    }
    if (ans != n) {
        cout << ans << '\n';
    } else {
        cout << flag + (n - 1) << '\n';
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