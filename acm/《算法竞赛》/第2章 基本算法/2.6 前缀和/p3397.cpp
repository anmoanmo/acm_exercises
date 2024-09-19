//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-24.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n + 1, vector<int>(n + 1));
    vector<vector<int>> d(n + 2, vector<int>(n + 2));
    while (m--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        d[x1][y1]++;
        d[x1][y2 + 1]--;
        d[x2 + 1][y1]--;
        d[x2 + 1][y2 + 1]++;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            a[i][j] = -a[i - 1][j - 1] + d[i][j] + a[i - 1][j] + a[i][j - 1];
            cout << a[i][j] << ' ';

            //d[i][j] = -d[i - 1][j - 1] + d[i][j] + d[i - 1][j] + d[i][j - 1];
            //cout << d[i][j] << ' ';

        }
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}