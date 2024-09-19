//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-9-12.
//

#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<vector>

using namespace std;
using LL = long long;
using PIS = pair<int, string>;

const int N = 1e4 + 10;
int n, m;

void solve() {
    cin >> n >> m;
    set<PIS> st1, st2;
    map<string, int> mp;
    for (int i = 0, rk = 1; i < n; i++) {
        string s;
        cin >> s;
        if (!mp[s]) {
            st1.insert({rk++, s});
            mp[s] = 1;
        }
    }
    mp.clear();
    for (int i = 0, rk = 1; i < m; i++) {
        string s;
        cin >> s;
        if (!mp[s]) {
            st2.insert({rk++, s});
            mp[s] = 1;
        }
    }

    //for(auto [rk, s] : st2) cout << rk << ' ' << s << '\n';
    vector<string> s1, s2, ans;
    for (auto [rk, s]: st1) {
        s1.push_back(s);
    }
    for (auto [rk, s]: st2) {
        s2.push_back(s);
    }

    mp.clear();
    int i = 0, j = 0;
    while (i < s1.size() && j < s2.size()) {
        if (!mp[s1[i]]) cout << s1[i] << '\n', mp[s1[i]] = 1;
        if (!mp[s2[j]]) cout << s2[j] << '\n', mp[s2[j]] = 1;
        i++, j++;
    }
    while (i < s1.size()) {
        if (!mp[s1[i]]) cout << s1[i] << '\n', mp[s1[i]] = 1;
        i++;
    }
    while (j < s2.size()) {
        if (!mp[s2[j]]) cout << s2[j] << '\n', mp[s2[j]] = 1;
        j++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}