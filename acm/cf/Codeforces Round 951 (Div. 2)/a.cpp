//
// Created by 27188 on 24-6-14.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void sol(){
    int n=0;cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=1e10;
    for(int i=0;i<n-1;i++){
        ans = min(ans,max(v[i],v[i+1])-1);
    }
    cout<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=0;cin>>t;
    while(t--){
        sol();
    }
}

