//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-3.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 360;
    for (int i = 0; i < n; i++) {
        int res = 0;
        for (int j = i; j < n; j++) {
            res += a[j];
            ans = min(ans, abs(2 * res - 360));
            if(ans==0){
                cout<<0<<'\n';
                return;
            }
        }
    }
    cout << abs(ans) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

//    int t = 0;
//    cin >> t;
//    while (t--) {
//        sol();
//    }
    sol();
}