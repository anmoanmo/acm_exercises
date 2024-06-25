//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-18.
//


#include<bits/stdc++.h>

#define ll long long

void sol() {
    using namespace std;
    ll a, b, m;
    cin >> a >> b >> m;
    ll ans = m / a + m / b + 2;
    cout << ans << '\n';


}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 0;
    std::cin >> t;
    while (t--) {
        sol();
    }
}