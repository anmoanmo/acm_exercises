//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-25.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    string s;
    cin >> s;
    ll n = s.size();
    ll ans = 0, i = 0;
    ll flag = 0;
    while (i < n) {
        while (s[i] == '1'&&i<n) {
            i++;
            flag++;
        }

        ll flag1 = 0;
        while (s[i] == '0'&&i<n) {
            i++;
            flag1++;
        }
        if(flag!=0){
            flag++;
        }
        ans += flag1 * flag;
        if(flag!=0){
            flag--;
        }
    }
    cout << ans << '\n';
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