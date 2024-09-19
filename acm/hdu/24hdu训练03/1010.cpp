//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-26.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n, q;
    cin >> n >> q;
    int ans = 0;
    vector<int> v(n + 1);
    int num = 0;
    int f = 1e5;
    for (int i = 1; i <= q; i++) {
        int x, y;
        cin >> x >> y;
        if (x == 1) {
            v[y] = y;
            num++;
        } else {
            v[y] = 0;
            num--;
        }

        if (num < 2) {
            cout << -1 << '\n';
        } else {

        };
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