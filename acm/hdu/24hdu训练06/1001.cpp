#include<iostream>
#include<vector>
#include<climits>
using namespace std;
using LL = long long;

const int N = 2e5 + 10;
int n;
vector<vector<int>> e(N);
int d1[N], d2[N], up[N], c1[N], c2[N];
inline int read()
{
    int x = 0,f = 1; char ch = getchar();
    while(ch < '0' || ch > '9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch >= '0' && ch <= '9'){x=x*10+ch-'0';ch=getchar();}
    return x * f;
}
void init()
{
    for(int i = 1; i <= n; i ++) e[i].clear(), d1[i] = d2[i] = up[i] = c1[i] = c2[i] = 0;
}
void dfs1(int u, int fa)
{
    for(auto v : e[u]){
        if(v == fa) continue;
        dfs1(v, u);
        if(d1[v] + 1 > d1[u])
            d2[u] = d1[u], c2[u] = c1[u], d1[u] = d1[v] + 1, c1[u] = v;
        else if(d1[v] + 1 > d2[u])
            d2[u] = d1[v] + 1, c2[u] = v;
    }
}
void dfs2(int u, int fa)
{
    for(auto v : e[u]){
        if(v == fa) continue;
        if(c1[u] != v) up[v] = max(d1[u], up[u] + 1);
        else up[v] = max(d2[u], up[u] + 1);
        dfs2(v, u);
    }
}
void solve()
{
    bool ok = 0;
    cin >> n;
    init();
    for(int i = 1; i < n; i ++){
        int u, v; cin >> u >> v;
        e[u].push_back(v);
        e[v].push_back(u);
    }
    int p = 0, ans = INT_MAX;
    dfs1(1, 0);
    dfs2(1, 0);
    for(int i = 1; i <= n; i ++)
        if(max(up[i], d1[i]) < ans) p = i, ans = max(up[i], d1[i]);

    for(int i = -1; i <= 1; i ++){
        int u = p + i;
        if(e[u].size() != 2) continue;
        int a = e[u][0], b = e[u][1];
        int cnt = 0;
        for(int j = 1; j <= n; j ++){
            if(j == u) continue;
            int tt = e[j].size();
            if(j == a || j == b) tt --;
            if(tt > 1) cnt ++;
        }
        if(cnt <= 2){
            ok = 1;
            break;
        }
    }

    cout << (ok ? "Yes" : "No") << '\n';
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int Case; cin >> Case;
    while(Case --) solve();
    return 0;
}