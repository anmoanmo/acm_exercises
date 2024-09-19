//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-31.
//

#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int l = 0, r = 0;
    for (int i = 0; i < n - 1 - i; i++) {
        if (s[i] == s[n - 1 - i]) {
            r += 2;
        } else {
            l++;
            r++;
        }
    }

    string ans(n + 1, '0');
    for (int i = l; i <= r; i += 2) {
        ans[i] = '1';
        if (n % 2 == 1) {
            ans[i + 1] = '1';
        }
    }
    cout << ans << "\n";
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