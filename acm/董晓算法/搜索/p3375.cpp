//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-20.
//


#include<bits/stdc++.h>

typedef unsigned long long ULL;
typedef long long LL;
const int P = 131;//用于字符串哈希
const int N = 1e6 + 10;
using namespace std;
int ne[N];
string s1, s2;


void kmp_next() {
    ne[1] = 0;
    int n = s2.size() - 1;
    for (int i = 2, j = 0; i <= n; i++) {
        while (j && s2[i] != s2[j + 1]) {
            j = ne[j];
        }
        if (s2[i] == s2[j + 1]) {
            j++;
        }
        ne[i] = j;
    }
}

void kmp() {
    int n1 = s1.size() - 1;
    int n2 = s2.size() - 1;
    for (int i = 1, j = 0; i <= n1; i++) {
        while (j && s1[i] != s2[j + 1]) {
            j = ne[j];
        }
        if (s1[i] == s2[j + 1]) {
            j++;
        }
        if (j == n2) {
            cout << i - n2 + 1 << '\n';
        }
    }
}

void sol() {
    cin >> s1 >> s2;
    s1 = ' ' + s1;
    s2 = ' ' + s2;
    kmp_next();
    kmp();
    for (int i = 1; i < s2.size(); i++) {
        cout << ne[i] << ' ';
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}