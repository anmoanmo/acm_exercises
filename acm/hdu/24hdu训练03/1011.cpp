//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-26.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

struct node {
    ll x, y;
    char d;

    void move() {
        if (d == 'E') {
            x++;
        } else if (d == 'W') {
            x--;
        } else if (d == 'S') {
            y--;
        } else if (d == 'N') {
            y++;
        }
    }
};

void sol() {
    int n;
    cin >> n;
    vector <node> v(n);
    ll ans = 1e9;
    for (auto &i: v) {
        cin >> i.x >> i.y >> i.d;
    }
    int t = 1e5;
    while (t--) {
        ll x_max = 0, y_max = 0, x_min = 1e9 + 5, y_min = 1e9 + 5;
        for (auto i: v) {
            x_max = max(x_max, i.x);
            y_max = max(y_max, i.y);
            x_min = min(x_min, i.x);
            y_min = min(y_min, i.y);
            i.move();
        }
        ans = min(ans, (y_max - y_min)*2+(x_max - x_min)*2);
    }
    cout << ans << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}