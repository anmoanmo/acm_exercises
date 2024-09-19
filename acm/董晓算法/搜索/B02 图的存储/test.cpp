//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-11.
//


#include<bits/stdc++.h>

#define ll long long
const int N = 1e5;
using namespace std;

void sol() {
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 1; i <= 5; i++) {
        if (a <= b && a <= c) {
            a++;
        } else if (b <= c && b <= a) {
            b++;
        } else {
            c++;
        }
    }
    cout << a * b * c << '\n';
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