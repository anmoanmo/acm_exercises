//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-8-14.
//


#include<bits/stdc++.h>

#define ll long long
const int N = 1e5;
using namespace std;

void sol() {
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int a1 = 0;
    for (auto i: s) {
        if (i == '1') {
            a1++;
        }
    }
    for (int i = 0; i <= k; i++) {
        int cnt = a1 + i;
        string ans;
        ans.assign("00000000000000000000000");
        int f=0;
        while (cnt) {
            if (cnt % 2 == 1) {
                ans[f] = '1';
            }
            cnt /= 2;
            f++;
        }
        ans = ans.substr(0,k);
        std::reverse(ans.begin(), ans.end());

        int a2 = 0;
        for (auto i: ans) {
            if (i == '1') {
                a2++;
            }
        }
        if (a2 == i&&ans.size()==k) {
            cout << ans << '\n';
            return;
        }

    }
    cout << "None" << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        sol();
    }
}