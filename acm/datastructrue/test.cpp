//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-9.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    int ans = 2 * (((a1 > b1) + (a2 > b2) > (a1 < b1) + (a2 < b2)) + ((a1 > b2) + (a2 > b1) > (a1 < b2) + (a2 < b1)));
    cout << ans << "\n";

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