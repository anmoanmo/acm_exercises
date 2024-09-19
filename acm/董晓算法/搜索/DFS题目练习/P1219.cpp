//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-15.
//


#include<bits/stdc++.h>

#define ll long long
const int N = 100;
using namespace std;
int n, ans;
int pos[N], c[N], l[N], r[N];

void dfs(int line) {
    if (line > n) {
        ans++;
        if (ans <= 3) {
            for (int i = 1; i <= n; i++) {
                cout << pos[i] << ' ';
            }
            cout << endl;
        }
        return;
    }
    for (int j = 1; j <= n; j++) {
        if (c[j] || r[line + j] || l[n + line - j]) {
            continue;
        }
        pos[line] = j;
        c[j] = r[line + j] = l[n + line - j] = 1;
        dfs(line + 1);
        c[j] = r[line + j] = l[n + line - j] = 0;
    }
}

void sol() {
    cin >> n;
    ans = 0;
    dfs(1);
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}
