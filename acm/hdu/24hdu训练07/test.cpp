#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
using namespace std;

const int MAXN = 100000;

vector<int> adj[MAXN];
int dist[MAXN];
bool visited[MAXN];

void bfs(int start, int n) {
    memset(dist, -1, sizeof(dist));
    queue<int> q;
    q.push(start);
    dist[start] = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}

bool canEscape(int n, int s, int r1, int r2) {
    bfs(s, n);

    // The farthest node that the defender can reach from s
    int maxDistance = 10 * r2;
    for (int i = 1; i <= n; i++) {
        if (dist[i] <= maxDistance) {
            // For this node, if there exists a node within r1 distance, the defender can't escape
            for (int j = 1; j <= n; j++) {
                if (dist[j] <= r1) {
                    if (dist[j] + r2 >= dist[i]) {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

void sol(){
    int n, s, r1, r2;
    cin >> n >> s >> r1 >> r2;

    // Clear the adjacency list
    for (int i = 1; i <= n; ++i) {
        adj[i].clear();
    }

    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if (canEscape(n, s, r1, r2)) {
        cout << "General_Kangaroo" << '\n';
    } else {
        cout << "Kangaroo_Splay" << '\n';
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

    return 0;
}
