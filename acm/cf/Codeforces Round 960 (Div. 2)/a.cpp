//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-20.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n;
    cin >> n;
    map<int, int> m;
    int max1 = 0;
    for (int x=0;x<n;x++) {
        int i;
        cin >> i;
        m[i]++;
    }
    max1 = max(m.begin()->first, m.end()->first);
    if (m[max1] % 2 == 1) {
        cout << "YES" << endl;
    } else {
        int ans = 0;
        for (auto i: m) {
            if (i.second % 2 == 1) {
                ans++;
            }
        }
        if (ans > 0) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
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