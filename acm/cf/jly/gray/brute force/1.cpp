//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-1.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    array<int, 26> dif{};
    int branch = 0, ans = 0;
    for (auto c: s) {
        branch += dif[c - 'a']++ == 0;
        ans += branch;
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