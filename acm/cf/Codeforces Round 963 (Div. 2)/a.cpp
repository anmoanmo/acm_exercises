//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-4.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> m;
    for (auto i: s) {
        m[i]++;
    }
    int ans = 0;
    for (auto i: m) {
        if (i.first != '?') {
            if (i.second >= n) {
                ans += n;
            } else {
                ans += i.second;
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