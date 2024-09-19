#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n, m, hp, dmg;
    cin >> n >> m >> hp >> dmg;
    vector<vector<char>> v(n + 2, vector<char>(m + 2, ' '));

    // 设置边框
    for (int i = 0; i < n + 2; i++) {
        v[i][0] = v[i][m + 1] = '|';
    }
    for (int j = 0; j < m + 2; j++) {
        v[0][j] = v[n + 1][j] = '-';
    }
    v[0][0] = v[0][m + 1] = v[n + 1][0] = v[n + 1][m + 1] = '+';

    if (hp <= m) {
        if (hp <= dmg) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= hp; j++) {
                    v[i][j] = '.';
                }
            }
        } else {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= hp; j++) {
                    v[i][j] = j < hp - n ? 'A' : '.';
                }
            }
        }
    } else {
        char c = 'A' + (hp / m - 1) % 5;
        char c1 = c == 'E' ? 'A' : c + 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= hp % m; j++) {
                v[i][j] = c1;
            }
            for (int j = hp % m + 1; j <= m; j++) {
                v[i][j] = c;
            }
        }

        // 应用伤害
        for (int i = 1; i <= n; i++) {
            int dmg1 = dmg;
            for (int j = m; j > hp % m && dmg1 > 0; j--) {
                v[i][j] = '.';
                dmg1--;
            }
            for (int j = hp % m; j >= 1 && dmg1 > 0; j--) {
                v[i][j] = '.';
                dmg1--;
            }
        }
    }

    // 输出结果
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
    int t;
    cin >> t;
    while (t--) {
        sol();
    }
}
