//
// Created by 27188 on 24-6-13.
//
#include <bits/stdc++.h>
using namespace std;

void sol() {
    int n=0;cin>>n;
    int ans =0;
    for(int i=0;i<n;i++){
        int x=0;cin>>x;
        ans +=x;
    }
    ans /=n;
    cout<<ans;

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        sol();
    }

    return 0;
}
