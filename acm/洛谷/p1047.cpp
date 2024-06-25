//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-15.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;
const int MAX = 1e4+5;
void sol() {
    int l,m;cin>>l>>m;
    int ans = 0;
    int arr[MAX] = {0};
    while(m--){
        int u,v;cin>>u>>v;
        for(int i=u;i<=v;i++){
            arr[i] = {1};
        }
    }
    for(int i=0;i<=l;i++){
        ans += (arr[i]==0);
    }
    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}