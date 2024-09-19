//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-12.
//


#include<bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;
const int P = 131;//用于字符串哈希
const int N = 1e3 + 10;
using namespace std;
int a, b, n;
int g[N][N], res = 1e9 + 10;
int ans1[N][N], ans2[N][N];
int ans11[N][N], ans22[N][N];

void find_min() {
    for (int i = 1; i <= a; i++) {
        deque<int> dq;
        for (int j = 1; j <= b; j++) {
            while (!dq.empty() && g[i][dq.back()] >= g[i][j]){
                dq.pop_back();
            }
            dq.push_back(j);
            if(j-n == dq.front()){
                dq.pop_front();
            }
            ans1[i][j] = g[i][dq.front()];
        }
    }

    for (int j = 1; j <= b; j++) {
        deque<int> dq;
        for (int i = 1; i <= a; i++) {
            while (!dq.empty() && ans1[dq.back()][j] >= ans1[i][j]){
                dq.pop_back();
            }
            dq.push_back(i);
            if(i-n == dq.front()){
                dq.pop_front();
            }
            ans11[i][j] = ans1[dq.front()][j];
        }
    }
}

void find_max() {
    for (int i = 1; i <= a; i++) {
        deque<int> dq;
        for (int j = 1; j <= b; j++) {
            while (!dq.empty() && g[i][dq.back()] <= g[i][j]){
                dq.pop_back();
            }
            dq.push_back(j);
            if(j-n == dq.front()){
                dq.pop_front();
            }
            ans2[i][j] = g[i][dq.front()];
        }
    }

    for (int j = 1; j <= b; j++) {
        deque<int> dq;
        for (int i = 1; i <= a; i++) {
            while (!dq.empty() && ans2[dq.back()][j] <= ans2[i][j]){
                dq.pop_back();
            }
            dq.push_back(i);
            if(i-n == dq.front()){
                dq.pop_front();
            }
            ans22[i][j] = ans2[dq.front()][j];
        }
    }
}

void sol() {
    cin >> a >> b >> n;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            cin >> g[i][j];
        }
    }
    find_min();
    find_max();

    for (int i = n; i <= a; i++) {
        for (int j = n; j <= b; j++) {
            res = min(res, ans22[i][j] - ans11[i][j]);
        }
    }
    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}