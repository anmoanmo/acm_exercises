//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-17.
//


#include<bits/stdc++.h>

#define ll long long
const int N = 10;
using namespace std;
string be = "12348765";
string goal;
string s1;

void bfs() {
    unordered_map<string, string> ans;
    queue<string> q;
    ans[be] = "";
    q.push(be);
    while (!q.empty()) {
        string p = q.front();
        q.pop();
        //找到并且输出答案
        if (p == goal) {
            cout << ans[p].size() << '\n';
            int f = 0;
            for (auto i: ans[p]) {
                cout << i;
                f++;
                if (f % 60 == 0) {
                    cout << '\n';
                }
            }
            return;
        }

        s1 = std::string(1, p[4]) + std::string(1, p[5]) + std::string(1, p[6]) +
             std::string(1, p[7]) + std::string(1, p[0]) + std::string(1, p[1]) +
             std::string(1, p[2]) + std::string(1, p[3]);
        if (ans.find(s1) == ans.end()) {
            q.push(s1);
            ans[s1] = ans[p] + 'A';
        }

        s1 = std::string(1, p[3]) + std::string(1, p[0]) + std::string(1, p[1]) +
             std::string(1, p[2]) + std::string(1, p[7]) + std::string(1, p[4]) +
             std::string(1, p[5]) + std::string(1, p[6]);
        if (ans.find(s1) == ans.end()) {
            q.push(s1);
            ans[s1] = ans[p] + 'B';
        }
        s1 = std::string(1, p[0]) + std::string(1, p[5]) + std::string(1, p[1]) +
             std::string(1, p[3]) + std::string(1, p[4]) + std::string(1, p[6]) +
             std::string(1, p[2]) + std::string(1, p[7]);
        if (ans.find(s1) == ans.end()) {
            q.push(s1);
            ans[s1] = ans[p] + 'C';
        }
    }
}

void sol() {
    goal.clear();
    for (int i = 0; i < 8; i++) {
        char x;
        cin >> x;
        goal += x;
    }
    goal = std::string(1, goal[0]) + std::string(1, goal[1]) + std::string(1, goal[2]) +
           std::string(1, goal[3]) + std::string(1, goal[7]) + std::string(1, goal[6]) +
           std::string(1, goal[5]) + std::string(1, goal[4]);
    bfs();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}