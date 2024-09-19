//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-17.
//


#include <cstring>
#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

typedef pair<int, int> PII;
const int N = 510;
int n, m;
char g[N][N];   //存储格内斜边
int dis[N][N];  //存储操作步数
bool vis[N][N]; //判重
char es[] = "\\/\\/"; //格内斜边，左上角开始顺时针记录
int dx[] = {-1, -1, 1, 1}, dy[] = {-1, 1, 1, -1}; //格点增量
int ex[] = {-1, -1, 0, 0}, ey[] = {-1, 0, 0, -1}; //格子增量

int bfs() {
    //0x3f 表无穷大
    memset(dis, 0x3f, sizeof dis);
    dis[0][0] = 0;
    deque<PII> q;
    q.push_back({0, 0});
    while (q.size()) {
        PII u = q.front();
        q.pop_front(); //队头出队
        int x = u.first, y = u.second; //父格点
        if (vis[x][y]) continue;   //已出过队，已最小
        vis[x][y] = true;           //出队标记，只扩展一次
        for (int i = 0; i < 4; i++) {
            int a = x + dx[i], b = y + dy[i];   //子格点
            if (a < 0 || a > n || b < 0 || b > m) continue;
            int ea = x + ex[i], eb = y + ey[i]; //格子
            int d = dis[x][y] + (g[ea][eb] != es[i]);
            if (d < dis[a][b]) {  //从(x,y)到(a,b)操作更少
                dis[a][b] = d;
                if (g[ea][eb] != es[i])q.push_back({a, b});//队尾入队
                else q.push_front({a, b}); //队头入队
            }
        }
    }
    return dis[n][m];
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) scanf("%s", g[i]);
    int d = bfs();
    if (d == 0x3f3f3f3f) puts("NO SOLUTION");
    else printf("%d\n", d);
}