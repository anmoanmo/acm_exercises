//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-25.
//


#include<bits/stdc++.h>

typedef unsigned long long ULL;
typedef long long LL;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;


void sol() {
    int n;
    cin >> n;
    vector<int> a1(n);
    vector<int> a2(n);
    for (int i = 0; i < n; i++) {
        cin >> a1[i];
        a2[i] = 1;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (a1[j] < a1[i]) {
                a2[i] = max(a2[j] + 1, a2[i]);
                ans = max(a2[i], ans);
            }
        }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}