//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-16.
//


#include<bits/stdc++.h>

using namespace std;

const int N = 1010;
int n, m, a, b;
vector<int> e[N];
int vis[N];
queue<int> q;

struct node{
    int x,y;
}pre[N];

void bfs(int s) {

}

int main() {
    for (int i = 0; i < 5; i++) {
        cin >> a >> b;
        e[a].push_back(b);
        e[b].push_back(a);
    }
    bfs(2); // 广搜起点
    return 0;
}
