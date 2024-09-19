//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-31.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    for (int m = 1; m <= n; m *= 2) {
        for (int i = m + 1; i < m * 2 && i < n; i++) {
            if (v[i] > v[i + 1]) {
                cout<<"NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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