//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-6.
//

#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131; // 用于字符串哈希
const int N = 70;
using namespace std;

int n, sum, cnt, len;
vector<int> v(N), e(N);
bool flag = false;
int vis[N];

void dfs(int u, int cur, int start) {
    if (u == cnt) {
        cout << len << '\n';
        exit(0);
    }
    if (cur == len) {
        dfs(u + 1, 0, 0);
        return;
    }
    for (int i = start; i < n; i++) {
        if (vis[i] || cur + v[i] > len) {
            continue;
        }
        vis[i] = 1;
        dfs(u, cur + v[i], i + 1);
        vis[i] = 0;
        if (cur == 0) {
            return;
        }
        if (cur + v[i] == len) {
            return;
        }
        while (i < n - 1 && v[i] == v[i + 1]) {
            i++;
        }
    }
}

void sol() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.begin() + n, [&](int a, int b) {
        return a > b;
    });
    for (len = v[0]; len <= sum; len++) {
        if (sum % len != 0) {
            continue;
        }
        cnt = sum / len;
        dfs(0, 0, 0);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}