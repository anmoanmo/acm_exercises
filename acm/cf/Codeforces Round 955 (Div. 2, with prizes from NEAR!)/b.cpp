//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-25.
//

#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    ll x, y, k;
    cin >> x >> y >> k;
    while(x>=y&&k>0){
        ll step = y - x % y;
        if (k == step) {
            x += step;
            while (x % y == 0) {
                x /= y;
            }
            cout << x << '\n';
            return;
        }
        else if (k < step) {
            cout << x + k << '\n';
            return;
        }
        k-=step;
        x += step;
        while (x % y == 0) {
            x /= y;
        }
    }
    cout<<(x+k-1)%(y-1)+1<<'\n';
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