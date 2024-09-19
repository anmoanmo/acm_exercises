//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-29.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n, m, hp, dmg;
    cin >> n >> m >> hp >> dmg;
    string s;
    int k = hp / m;
    vector<vector<char>> v(n + 2, vector<char>(m + 2, ' '));
    for (int i = 0; i < n + 2; i++) {
        v[i][0] = '|';
        v[i][m + 1] = '|';
    }
    for (int j = 0; j < m + 2; j++) {
        v[0][j] = '-';
        v[n + 1][j] = '-';
    }
    v[0][0] = '+', v[0][m + 1] = '+', v[n + 1][0] = '+', v[n + 1][m + 1] = '+';

    if (hp <= m) {
        if (hp <= dmg) {
            for (int i = 1; i < n + 1; i++) {
                for (int j = 1; j < hp + 1; j++) {
                    v[i][j] = '.';
                }
            }
        } else {
            for (int i = 1; i < n + 1; i++) {
                for (int j = 1; j < hp + 1 - n; j++) {
                    v[i][j] = 'A';
                }
                for (int j = hp + 1 - n; j < hp + 1; j++) {
                    v[i][j] = '.';
                }
            }
        }
    } else {
        if (dmg >= m) {
            for (int i = 1; i < n + 1; i++) {
                for (int j = 1; j < m + 1; j++) {
                    v[i][j] = '.';
                }
            }
        } else {
            int x = hp / m, y = hp % m;
            char c = 'A' + (x - 1) % 5;
            char c1;
            if (c == 'E') {
                c1 = 'A';
            } else {
                c1 = c + 1;
            }
            for (int i = 1; i < n + 1; i++) {
                for (int j = 1; j < y + 1; j++) {
                    v[i][j] = c1;
                }
                for (int j = y+1; j < m + 1; j++) {
                    v[i][j] = c;
                }
            }

            for (int i = 1; i < n + 1; i++) {
                int dmg1 = dmg;
                for (int j = y; j >= 1; j--) {
                    if (dmg1 > 0) {
                        v[i][j] = '.';
                        dmg1--;
                    }
                }
                for (int j = m; j > y; j--) {
                    if (dmg1 > 0) {
                        v[i][j] = '.';
                        dmg1--;
                    }
                }
            }
        }
    }
    for (int i = 0; i < n + 2; i++) {
        for (int j = 0; j < m + 2; j++) {
            cout << v[i][j];
        }
        cout << '\n';
    }
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