//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-3.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;

void sol() {
    string s;
    cin >> s;
    for (auto i: s) {
        if (i == '3' || i == '1') {
            cout << i;
        }
    }
    cout << '\n';
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