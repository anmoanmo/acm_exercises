//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-31.
//


#include <bits/stdc++.h>

using namespace std;
map<string, int> m;

void fc(string s, int idx) {
    if (idx > s.size() - 2) {
        s = s.substr(2, s.size() - 2);
        m[s]++;
        return;
    }

    fc(s, idx + 1);

    s[idx] = s[idx] == '0' ? '1' : '0';
    s[idx + 1] = s[idx + 1] == '0' ? '1' : '0';
    if (idx + 2 < s.size()) s[idx + 2] = s[idx + 2] == '0' ? '1' : '0';
    fc(s, idx + 1);
}

void sol() {
    int n;
    cin >> n;

    string s(n + 2, '0');
    fc(s, 1);
    long long ans = 0;
    for (const auto &p: m) {
        ans++;
        //cout << p.first << '\n';
    }
    cout << "sum=" << ans << '\n';
    cout << '\n';
    m.clear();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        sol();
    }
}
