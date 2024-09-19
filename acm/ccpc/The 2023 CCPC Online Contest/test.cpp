//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-4.
//


#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
#define lowbit(x) (x&(-x))
map<pair<int, int>, int> di;
map<pair<int, int>, int> panc;//0未知 1有物体 2 畅通
int n;
string s;
int sum;
pair<int, int> jie[106];

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first != b.first)
        return a.first < b.first;
    else
        return a.second < b.second;
}

void dfs(int step, int x, int y) {
    //cout<<step<<" "<<x<<" "<<y<<"\n";
    if (step == n) {
        sum++;
        jie[sum] = make_pair(x, y);
        return;
    }
    int tx = x, ty = y;
    if (s[step] == 'L') {
        tx--;
    } else if (s[step] == 'R') {
        tx++;
    } else if (s[step] == 'D') {
        ty--;
    } else {
        ty++;
    }
    pair<int, int> a;
    a.first = tx;
    a.second = ty;
    if (di[a] == 0) {
        di[a] = 1;
        dfs(step + 1, x, y);
        di[a] = 2;
        dfs(step + 1, tx, ty);
        di[a] = 0;
    } else if (di[a] == 1) {
        dfs(step + 1, x, y);
    } else if (di[a] == 2) {
        dfs(step + 1, tx, ty);
    }
}

void solve() {
    cin >> n;
    cin >> s;
    pair<int, int> te;
    te.first = 0;
    te.second = 0;
    di[te] = 2;
    dfs(0, 0, 0);
    //cout<<1;

    int nosum = 0;
    for (int i = 1; i <= sum; i++) {
        pair<int, int> a;
        a.first = jie[i].first;
        a.second = jie[i].second;
        //cout<<jie[i].first<<" "<<jie[i].second<<"\n";
        //cout<<panc[a]<<" "<<i<<"\n";
        if (!panc[a]) {
            panc[a] = 1;

        } else {
            jie[i].first = 9999;
            jie[i].second = 9999;
            nosum++;
        }
    }
    sort(jie + 1, jie + 1 + sum, cmp);
    sum -= nosum;
    cout << sum << "\n";
    for (int i = 1; i <= sum; i++) {
        cout << jie[i].first << " " << jie[i].second << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    //cin>>T;
    while (T--) {
        solve();
    }
    return 0;
}