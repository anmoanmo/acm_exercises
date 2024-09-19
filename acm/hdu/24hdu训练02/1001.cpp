//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-22.
//



#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n;
    cin >> n;
    int ans = n / 3;
    int maxx = 2;
    vector<pair<int, int>> v;
    for (int i = ans; i >= 1; i--) {
        int x = 1;
        for (int j = 0; j < 3; j++) {
            if (x == i) {
                x = ans + 1;
            }
            v.push_back({min(i, x), max(i, x)});
            x++;

        }
        maxx = max(maxx, x);
    }
    for (int i = 3 * ans + 1; i <= n; i++) {
        v.push_back({1, maxx});
        maxx++;
    }
    sort(v.begin(), v.end());
    for (auto [x, y]: v) {
        cout << x << ' ' << y << '\n';
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