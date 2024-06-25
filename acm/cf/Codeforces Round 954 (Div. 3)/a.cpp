//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-24.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int a,b,c;cin>>a>>b>>c;
    int ans=1e9;
    for(int i=1;i<=10;i++){
        ans = min(ans,abs(i-a)+abs(i-b)+abs(i-c));
    }
    cout<<ans<<'\n';
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