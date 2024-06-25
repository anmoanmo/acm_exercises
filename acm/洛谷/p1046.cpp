//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-15.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    vector<int> v(10);
    for(int i=0;i<10;i++){
        cin>>v[i];
    }
    int k=0;cin>>k;
    int ans=0;
    for(auto i:v){
        if(k>=i-30){
            ans++;
        }
    }
    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sol();
}