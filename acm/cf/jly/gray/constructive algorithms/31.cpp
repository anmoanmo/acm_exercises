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
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '0' && b[i] == '0' && a[i + 1] == '1' && b[i + 1] == '1') {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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