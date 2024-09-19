//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-27.
//


#include<bits/stdc++.h>

typedef unsigned long long ULL;
typedef long long LL;
const int P = 131;//用于字符串哈希
const int N = 2010;
using namespace std;
int p[N];

void sol() {
    memset(p, 0, sizeof(p));
    string s1, s2;
    cin >> s1 >> s2;
    int n1 = s1.size(), n2 = s2.size();

    for (int i = 1; i <= n1; i++) {
        int t1 = p[0]++;
        for (int j = 1; j <= n2; j++) {
            int t2 = p[j];
            if (s1[i - 1] == s2[j - 1]) {
                p[j] = t1;
            } else {
                p[j] = min(t1, min(p[j - 1], p[j])) + 1;
            }
            t1 = t2;
        }
    }
    cout << p[n2] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}