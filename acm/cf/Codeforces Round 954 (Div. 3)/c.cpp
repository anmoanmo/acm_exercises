//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-24.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n, m;
    cin >> n >> m;
    string s, c;
    cin >> s;
    vector<int> op(m);
    for (int i = 0; i < m; i++) {
        cin >> op[i];
    }
    sort(op.begin(), op.end());
    cin >> c;
    sort(c.begin(), c.end());

    int r = m - 1, lc = 0;
    for (int i = 0; i < m; i++) {
        if (op[i] == op[i + 1] && i != m - 1) {
            s[op[i]-1] = c[r--];
        } else {
            s[op[i]-1] = c[lc++];
        }
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