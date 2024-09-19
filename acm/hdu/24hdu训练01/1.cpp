//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-19.
//


#include<iostream>
#include<map>
#include<vector>
using namespace std;
using LL = long long;

const int N = 2e6;
string s, t, tmp;
int ne[N], n, m;

int kmp()
{
    int cnt = 0;
    for(int i = 2, j = 0; i <= n; i ++){
        while(j && tmp[i] != tmp[j + 1]) j = ne[j];
        if(tmp[i] == tmp[j + 1]) j ++;
        ne[i] = j;
    }
    for(int i = 1, j = 0; i <= m; i ++){
        while(j && t[i] != tmp[j + 1]) j = ne[j];
        if(t[i] == tmp[j + 1]) j ++;
        if(j == n) cnt ++;
    }

    return cnt;
}
void solve()
{
    cin >> s >> t;
    int n, m;
    m = t.size();
    t = ' ' + t;
    int k = s.size();
    map<vector<char>, bool> mp;
    LL ans = 0;
    for(int i = 1; i <= k; i ++){
        tmp = s.substr(1, k - 1);
        tmp += s[0];
        s = tmp;
        vector<char> tt;
        for(auto ch : tmp) tt.push_back(ch);
        if(mp.count(tt)) continue;

        n = tmp.size();
        tmp = ' ' + tmp;

        int cnt = 0;
        for(int i = 2, j = 0; i <= n; i ++){
            while(j && tmp[i] != tmp[j + 1]) j = ne[j];
            if(tmp[i] == tmp[j + 1]) j ++;
            ne[i] = j;
        }
        for(int i = 1, j = 0; i <= m; i ++){
            while(j && t[i] != tmp[j + 1]) j = ne[j];
            if(t[i] == tmp[j + 1]) j ++;
            if(j == n) cnt ++;
        }

        ans += cnt;
        mp[tt] = 1;
    }

    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int Case; cin >> Case;
    while(Case --) solve();
    return 0;
}