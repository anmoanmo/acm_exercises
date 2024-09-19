//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-2.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = n + 2;
    for (char i = 'a'; i <= 'z'; i++) {
        int l = 0, r = n - 1;
        int res = 0;
        while (l < r) {
            if (s[l] == s[r]) {
                r--, l++;
            } else if (s[l] == i) {
                l++,res++;
            } else if (s[r] == i) {
                r--, res++;
            }else {
                res = n + 2;
                break;
            }
        }
        ans = min(ans, res);
    }
    if (ans == n + 2) {
        cout << -1 << '\n';
        return;
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