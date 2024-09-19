//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-17.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i: a) {
        cin >> i;
    }
    int ans = 0;
    for (int i = 1; i < n - 1; i++) {
        if (a[i - 1] > a[i] && a[i] < a[i + 1]) {
            ans++;
        } else if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
            ans++;
        }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}