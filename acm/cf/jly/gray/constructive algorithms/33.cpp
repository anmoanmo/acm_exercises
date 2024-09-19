//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-11.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;

void sol() {
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    vector<char> a1, a2;
    if (k % 2 == 0) {
        sort(s.begin(), s.end());
    } else {
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                a2.push_back(s[i]);
            } else {
                a1.push_back(s[i]);
            }
        }
        sort(a1.begin(), a1.end());
        sort(a2.begin(), a2.end());
        int f1 = 0, f2 = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                s[i] = a2[f2++];
            } else {
                s[i] = a1[f1++];
            }
        }
    }
    cout << s << '\n';

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