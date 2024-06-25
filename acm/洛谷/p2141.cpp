//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-6-15.
//

//ISBN码

#include<bits/stdc++.h>

#define ll long long
using namespace std;

void sol() {
    int n=0;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int f=v[i]+v[j];
            if(find(v.begin(),v.end(),f)!=v.end()){
                ans++;
            }
        }
    }
    cout<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();
}