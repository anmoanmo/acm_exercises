//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-15.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n=0;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    ll l=0, r=1e11;
    while(l<r){
        ll mid = (l+r)/2;
        ll f = 0;
        vector<ll> vector1(n);
        for(int i=0;i<n;i++){
            vector1[i] = mid/v[i]+1;
            f += vector1[i];
        }
        if(f==mid){
            for(auto i:vector1){
                cout<<i<<" ";
            }
            cout<<"\n";
            return;
        }
        if(f<mid){
            r = mid;
        }
        if(f>mid){
            l = mid + 1;
        }
    }
    cout<<-1<<endl;

    
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