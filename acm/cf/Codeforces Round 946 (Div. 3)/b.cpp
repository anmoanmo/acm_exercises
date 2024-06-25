//
// Created by 27188 on 24-6-11.
//
#include<bits/stdc++.h>
using namespace std;

void sol() {
    int n = 0; cin >> n;
    string s; cin >> s;
    vector<char> vc;
    set<char> se;
    for (int i = 0; i < n; i++) {
        if (se.find(s[i]) == se.end()) {
            se.insert(s[i]);
            vc.push_back(s[i]);
        }
    }
    sort(vc.begin(),vc.end());
    map<char, char> m;
    int vc_size = vc.size();
    for (int i = 0; i < vc_size; i++) {
        m[vc[i]] = vc[vc_size - i - 1];
    }
    string ans;
    for (char i : s) {
        ans += m[i];
    }
    cout << ans << "\n";
}

int main() {
    int t = 0; cin >> t;
    while (t--) {
        sol();
    }
}
