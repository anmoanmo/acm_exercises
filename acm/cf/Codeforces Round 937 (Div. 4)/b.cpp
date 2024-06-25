//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-19.
//


#include<bits/stdc++.h>

#define ll long long

void sol() {
    using namespace std;
    int n;
    cin >> n;
    for (int i = 0; i < 2 * n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            cout << ((i / 2 + j / 2) & 1 ? '.' : '#');
        }
        cout << '\n';
    }


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