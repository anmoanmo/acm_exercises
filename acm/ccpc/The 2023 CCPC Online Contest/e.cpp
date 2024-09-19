//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-4.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131; // 用于字符串哈希
const int N = 25;
using namespace std;

int g[N][N];
int n;
string s;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int op[N];
map<pair<int, int>, int> m;
vector<pair<int, int>> ans;

void dfs(int x, int y, int dep) {
    if (dep == n) {
        return ans.push_back({x, y});
    }
    int move_x = dx[op[dep]];
    int move_y = dy[op[dep]];
    if (!m.count({x + move_x, y + move_y})) {
        m[{x + move_x, y + move_y}] = 1;
        dfs(x + move_x, y + move_y, dep + 1);
        m[{x + move_x, y + move_y}] = 2;
        dfs(x, y, dep + 1);
        m.erase({x + move_x, y + move_y});


    } else if (m[{x + move_x, y + move_y}] == 1) {
        dfs(x + move_x, y + move_y, dep + 1);
    } else {
        dfs(x, y, dep + 1);
    }
}


void sol() {
    cin >> n;
    cin >> s;
    m[{0, 0}] = 1;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'R') {
            op[i] = 1;
        }
        if (s[i] == 'L') {
            op[i] = 3;
        }
        if (s[i] == 'D') {
            op[i] = 2;
        }
        if (s[i] == 'U') {
            op[i] = 0;
        }
    }
    dfs(0, 0, 0);
    set<pair<int, int>> s(ans.begin(), ans.end());
    vector<pair<int, int>> ans(s.begin(), s.end());
    sort(ans.begin(), ans.end(), [&](pair<int, int> a, pair<int, int> b) {
        if (a.first != b.first) {
            return a.first < b.first;
        }
        return a.second < b.second;
    });
    cout << ans.size() << '\n';
    for (auto i: ans) {
        cout << i.first << ' ' << i.second << '\n';
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}
