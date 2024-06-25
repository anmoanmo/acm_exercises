//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-22.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    ll x;
    cin >> x;
    vector<int> v;
    while (x) {
        if (x % 2 == 0) {
            v.push_back(0);
        } else {
            if ((x - 1) / 2 % 2 == 0) {
                v.push_back(1);
                x -= 1;
            } else {
                v.push_back(-1);
                x += 1;
            }
        }
        x /= 2;
    }
    cout << v.size() << '\n';
    for (int i: v) {
        cout << i << ' ';
    }
    cout << '\n';
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