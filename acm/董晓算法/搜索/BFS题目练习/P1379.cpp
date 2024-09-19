//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-16.
//


#include <bits/stdc++.h>
#define ll long long
using namespace std;

string g;
const string goal = "123804765";
int dx[4] = {-1, 1, -3, 3};

bool is_valid_move(int idx, int nx) {
    if (nx < 0 || nx > 8) return false;
    // 防止越过左边界或右边界
    if (idx % 3 == 2 && nx % 3 == 0) return false; // 右边界不能往左移
    if (idx % 3 == 0 && nx % 3 == 2) return false; // 左边界不能往右移
    return true;
}

int bfs(string str) {
    unordered_map<string, int> d;
    queue<string> q;
    q.push(str);
    d[str] = 0;
    while (!q.empty()) {
        auto s = q.front();
        q.pop();
        if (s == goal) {
            return d[s];
        }
        int idx = s.find('0');
        for (int i = 0; i < 4; i++) {
            int nx = idx + dx[i];
            if (!is_valid_move(idx, nx)) {
                continue;
            }
            string s1 = s;
            swap(s1[idx], s1[nx]);
            if (d.find(s1) != d.end()) {
                continue;
            }
            d[s1] = d[s] + 1;
            q.push(s1);

        }
    }
    return -1; // 如果没有找到解，返回 -1
}

void sol() {
    // 初始化输入数据，建立起始图
    cin >> g;
    cout << bfs(g) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}
