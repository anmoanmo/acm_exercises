//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-18.
//


#include<bits/stdc++.h>

typedef unsigned long long ULL;
typedef long long LL;
const int P = 131;//用于字符串哈希
const int N = 1e5;
using namespace std;
vector<ULL> p[N];

ULL into(string s) {
    ULL ans = 0;
    for (int i = 0; i < s.size(); i++) {
        ans = ans * P + s[i];
    }
    return ans;
}

void sol() {
    int n;
    cin >> n;
    vector<ULL> ans;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        ans.push_back(into(s));
    }
    sort(ans.begin(), ans.begin() + n);
    int f = 1;
    for (int i = 1; i < n; i++) {
        if (ans[i] != ans[i - 1]) {
            f++;
        }
    }
    cout << f << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}