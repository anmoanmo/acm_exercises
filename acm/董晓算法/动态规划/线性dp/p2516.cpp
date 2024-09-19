//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-27.
//


#include<bits/stdc++.h>

typedef unsigned long long ULL;
typedef long long LL;
const int P = 131;//用于字符串哈希
const int N = 5010;
using namespace std;
vector<char> a, b;
int ans[N][N];
const int MOD = 1e8;

void sol() {
    memset(ans, 0, sizeof(ans));
    string s1, s2;
    cin >> s1 >> s2;
    a.push_back(' ');
    b.push_back(' ');

    for (auto i: s1) {
        if (i == '.') break;
        a.push_back(i);
    }
    for (auto i: s2) {
        if (i == '.') break;
        b.push_back(i);
    }

    int cnt[2][N];
    map<int, int> p;
    p[0] = 0;
    for (int i = 1; i < a.size(); i++) {
        for (int j = 1; j < b.size(); j++) {
            if (a[i] == b[j]) {
                ans[i][j] = ans[i - 1][j - 1] + 1;
                p[ans[i][j]] + = p[ans[i][j] - 1] + 1;
            } else {
                ans[i][j] = max(ans[i][j - 1], ans[i - 1][j]);
            }

        }
    }

    cout << ans[a.size() - 1][b.size() - 1] << '\n';
    cout << p[ans[a.size() - 1][b.size() - 1]] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}