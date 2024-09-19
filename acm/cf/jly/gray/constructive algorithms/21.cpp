//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-29.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n;
    string s;
    cin >> n >> s;

    if (count(s.begin(), s.end(), '1') == n) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
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