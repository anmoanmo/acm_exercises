//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-2.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;
const ll MOD = 998244353;

void sol() {
    string s;
    cin >> s;
    int ok = -1;
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == s[i + 1]) {
            ok = i;
            break;
        }
    }
    if (ok == -1) {
        s = (s[0] == 'a' ? 'b' : 'a') + s;
    } else {
        char x = s[ok] == 'a' ? 'b' : 'a';
        s.insert(ok+1, 1, x);
    }
    cout << s << '\n';
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