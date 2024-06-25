//
// Created by 27188 on 24-6-12.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void sol() {
    ll h, n;
    cin >> h >> n;
    vector<pair<ll, ll>> a(n);
    for(auto& i:a){
        cin>>i.first;
    }
    for(auto& i:a){
        cin>>i.second;
    }
    ll l=0,r=1e11;
    ll mid = 0;
    ll at=0;
    while(l<r){
        at = 0;
        mid = (l+r)>>1;
        for(auto i : a){
            at += i.first*(mid/i.second+1);
            if(at>=h){
                break;
            }
        }
        if(at>=h){
            r = mid;
        }
        else{
            l = mid+1;
        }
    }
    cout<<l+1<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 0;
    cin >> t;
    while (t--) {
        sol();
    }
    return 0;
}