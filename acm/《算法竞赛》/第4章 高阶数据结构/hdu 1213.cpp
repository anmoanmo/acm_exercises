//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-18.
//


#include<iostream>

#define ll long long
using namespace std;
const int N = 1100;
int s[N];

void init_set(int n) {
    for (int i = 1; i <= n; i++) {
        s[i] = i;
    }
}

int find_set(int x) {
    return x == s[x] ? x : find_set(s[x]);
}

void merge_set(int x, int y) {
    x = find_set(x), y = find_set(y);
    if (x != y) {
        s[x] = y;
    }
}


void sol() {
    int n, m;
    cin >> n >> m;
    init_set(n);
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        merge_set(x, y);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (s[i] == i) {
            ans++;
        }
    }
    cout << ans << '\n';
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