//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-27.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    ll n;
    cin >> n;

    int ans = 1;
    while (n % (ans + 1) == 0) {
        ans++;
    }
    cout << ans << '\n';

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