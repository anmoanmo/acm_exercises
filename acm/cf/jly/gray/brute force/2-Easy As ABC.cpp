//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-1.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;


void sol() {
    vector v(3, vector<char>(3));
    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < 3; j++) {
            v[i][j] = s[j];
        }
    }
    array<array<int, 3>, 3> arr{};
    string t;
    string ans = "DDD";
    auto dfs = [&](auto self, int i, int x, int y) -> void {
        if (arr[x][y] == 1) {
            return;
        }
        t += v[x][y];
        arr[x][y] = 1;
        if (i == 2) {
            ans = min(ans, t);
        } else {
            for (int nx = 0; nx < 3; nx++) {
                for (int ny = 0; ny < 3; ny++) {
                    if (abs(x - nx) <= 1 && abs(y - ny) <= 1) {
                        self(self, i + 1, nx, ny);
                    }
                }

            }
        }
        t.pop_back();
        arr[x][y] = 0;
    };

    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            dfs(dfs, 0, x, y);
        }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}