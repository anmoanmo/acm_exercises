//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-14.
//


#include<bits/stdc++.h>

#define ll long long
const int N = 1e5;
using namespace std;

void sol() {
    int x, k;
    cin >> x >> k;
    if (x == 1) {
        cout << 1 << '\n';
        return;
    }
    ll ans = k + 1;
    ll ans2 = 0;
    while (k > 0) {
        k--;
        ll ord = x;
        x = int(sqrt(x));
        ans2++;
        if (x == 1) {
            break;
        }
        if (x * x != ord) {
            ans2 += k;
        }
    }
    cout << ans + ans2 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}