//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-17.
//

#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;

void sol() {
    int n;
    cin >> n;
    vector<int> v(n);
    bool f = true;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (i != 0 && v[i] != v[i - 1]) {
            f = false;
        }
    }
    if (f) {
        cout << -1 << '\n';
        return;
    }
    sort(v.begin(), v.end());
    int i = 0;
    for (; i < n; i++) {
        if (v[i] == v[0]) {
            continue;
        }
        break;
    }
    cout << i << ' ' << n - i << '\n';
    for (int j = 0; j < i; j++) {
        cout << v[j] << ' ';
    }
    cout << '\n';
    for (int j = i; j < n; j++) {
        cout << v[j] << ' ';
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