//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-19.
//

#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 2e5 + 10;
using namespace std;

void sol() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<char, int> m;
    int max1 = 0;
    for (int i = 0; i < n; i++) {
        m[s[i]]++;
        max1 = max(max1, m[s[i]]);
    }

    if ((2 * max1 - n) > 0) {
        cout << 2 * max1 - n << '\n';
    } else {
        cout << n % 2 << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        sol();
    }
}