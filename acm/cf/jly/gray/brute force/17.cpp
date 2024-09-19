//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-27.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    if(n==1){
        cout<<0<<'\n';
        return;
    }
    sort(v.begin(), v.end());
    int ans = 0;
    int f = 0;
    for (int i = 1; i <= n ; i++) {
        if (v[i] - v[i-1] <= k||i==1) {
            f++;
            ans = max(ans, f);
        } else {
            f = 1;
        }
    }
    cout << n - ans << '\n';
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