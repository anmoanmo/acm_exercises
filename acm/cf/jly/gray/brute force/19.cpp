//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-27.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int x = 0; x <= n; x++) {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cnt += x < v[i];
        }
        if (cnt == x) {
            cout << cnt << '\n';
            return;
        }
    }
    cout << -1 << '\n';

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